#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "chatserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    //Register a QT Component
	qmlRegisterType<ChatServer>("Coding.Headers.chatserver", 1, 0, "ChatServer");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;
       
    return app.exec();
}
