#ifndef ApplicationController_H
#define ApplicationController_H

#include "Core/ModuleManager/ModuleManager.h"
#include "UI/ApplicationView/ApplicationView.h"

#include <QPointer>

namespace Core {
namespace ApplicationController {

class ApplicationController {
public:
  ApplicationController();

  ~ApplicationController();

private:
  QPointer<UI::ApplicationView::ApplicationView> mApplicationView;
  Core::ModuleManager::ModuleManager mModuleManager;
};

} // namespace ApplicationController
} // namespace Core

#endif // ModuleManager_H
