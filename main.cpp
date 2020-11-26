#include "MainWindow.h"
#include <QApplication>
#include <QFileInfo>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout << "here: " << (QFileInfo(".").absolutePath()).toStdString().append("/datbase2") << endl;//get the working directory
    MainWindow w;
    w.show();

    return a.exec();
}
