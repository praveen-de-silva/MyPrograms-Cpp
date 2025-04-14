#include <QtWidgets/QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    
    QLineSeries *series = new QLineSeries();
    series->append(1, 2);
    series->append(2, 3);
    series->append(3, 5);
    series->append(4, 7);
    series->append(5, 11);
    
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Sample Plot");
    
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(800, 600);
    chartView->show();
    
    return a.exec();
}