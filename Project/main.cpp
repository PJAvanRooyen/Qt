#include "Core/ModuleManager/ModuleManager.h"

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  ::Core::ModuleManager::ModuleManager *moduleManager =
      new Core::ModuleManager::ModuleManager();
  delete moduleManager;

  return a.exec();
}
