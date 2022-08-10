#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qtwebengineglobal.h>


int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("QtExamples");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);

    QGuiApplication app(argc, argv);
    QtWebEngine::initialize();
    QQmlApplicationEngine engine;

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}


/* WEBKIT APPLICATION TO RUN ON A QT VERSION WHERE WEBKIT IS NOT DEPRECATED ( < 5.7 )
 *
#include<QApplication>
#include<QDesktopServices>
#include<QUrl>
#include<QWebView>
#include<QMainWindow>
#include<QWebSettings>
int main (int argc, char *argv[])
{
    QApplication app(argc,argv);
        QWebView view;

        QWebSettings::globalSettings()->setAttribute(QWebSettings::JavascriptEnabled,true);
        QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled,true);

        view.load(QUrl("qrc:/main.qml"));
        view.show();
}
 * */
