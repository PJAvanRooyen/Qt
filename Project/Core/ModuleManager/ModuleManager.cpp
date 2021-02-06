#include "ModuleManager.h"

namespace Core {
namespace ModuleManager {

ModuleManager::ModuleManager()
    : mWidgetManager(new UI::WidgetManager::WidgetManager()) {
  quint8 val = 1;

  mWidgetManager->increment(val);

  qt_noop();
}

ModuleManager::~ModuleManager() { delete mWidgetManager; }

} // namespace ModuleManager
} // namespace Core
