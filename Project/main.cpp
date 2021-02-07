#include "Core/ApplicationController/ApplicationController.h"
#include "Core/ModuleManager/ModuleManager.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Core::ApplicationController::ApplicationController application =
      Core::ApplicationController::ApplicationController();

  Core::ModuleManager::ModuleManager moduleManager =
      Core::ModuleManager::ModuleManager();

  return a.exec();
}
