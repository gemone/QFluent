#include <QApplication>
#include <QDebug>
#include <QLabel>

int main(int argc, char *argv[]) {
  QApplication const app(argc, argv);
  app.setApplicationName("Playground");
  qDebug() << "Application started with arguments:" << argc << "arguments.";

  QLabel label("Qt Label Show");
  label.resize(500, 500);
  label.show();

  return app.exec();
}
