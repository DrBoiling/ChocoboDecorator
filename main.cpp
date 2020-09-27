#include "ChocoboFFXIV.h"

#include <QtWidgets/QApplication>
#include <QFile>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QString qss;
	QFile qssFile("m.qss");
	qssFile.open(QFile::ReadOnly);
	if (qssFile.isOpen())
	{
		qss = QLatin1String(qssFile.readAll());
		qApp->setStyleSheet(qss);
		qssFile.close();
	}
	
    ChocoboFFXIV w;
	w.setWindowFlags(Qt::WindowStaysOnTopHint);
	w.setWindowTitle("ChocoboDecorator v0.9.8.1(CN5.25)");
    w.show();

    return a.exec();
}

