#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Hello from CLion 👋");
    button.resize(260, 60);
    button.show();

    return app.exec();
}
