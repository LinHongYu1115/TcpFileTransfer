#include "tcpfilesender.h"
#include "tcpfileserver.h"
#include <QApplication>
#include <QInputDialog>
#include <QTabWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTabWidget tabWidget;

    TcpFileSender sender;
    TcpFileServer server;

    tabWidget.addTab(&sender, QStringLiteral("檔案傳送"));
    tabWidget.addTab(&server, QStringLiteral("檔案接收"));

    tabWidget.show();

    return a.exec();
}
