// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;

double getVMC(double Vm, double Vdc) {
    // Moving Coil reads average value, which is just the DC component
    return Vdc;
}

double getVMI(double Vm, double Vdc) {
    // Moving Iron reads RMS of the total waveform
    return sqrt(pow(Vdc, 2) + pow(Vm, 2) / 2.0);
}

double getVMCR(double Vm, double Vdc) {
    // Moving Coil Rectifier case
    if (Vm < Vdc) {
        // The waveform never goes negative
        return  PI * Vdc / (2 * sqrt(2));
    } else {
        // Waveform crosses zero; calculate using angle alpha
        double alpha = asin(Vdc / Vm);
        return (1.0 / sqrt(2)) * (alpha * Vdc + Vm * cos(alpha));
    }
}

int main() {
    // Example values
    double Vm_rms = 35.0;             // AC RMS Voltage
    double Vm = Vm_rms * sqrt(2);    // AC Peak Voltage
    double Vdc = 30.0;               // DC Voltage

    double Vmc = getVMC(Vm, Vdc);
    double Vmi = getVMI(Vm, Vdc);
    double Vmcr = getVMCR(Vm, Vdc);
    
    double Vmc_P = 28;
    double Vmi_P = 44;
    double Vmcr_P = 50;

    cout << "Theoretical MC reading:   " << Vmc << " V | Error : "  << Vmc - Vmc_P << endl;
    cout << "Theoretical MI reading:   " << Vmi << " V | Error : " << Vmi - Vmi_P << endl;
    cout << "Theoretical MCR reading:  " << Vmcr << " V| Error : " << Vmcr - Vmcr_P << endl;

    return 0;
}
