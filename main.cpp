#include "mainwindow.h"
#include <QApplication>
# include "QTextCodec"
# include "qglobal.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);

       QStringList paths = QCoreApplication::libraryPaths();
       paths.append(".");

       paths.append("platforms");
       QCoreApplication::setLibraryPaths(paths);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
