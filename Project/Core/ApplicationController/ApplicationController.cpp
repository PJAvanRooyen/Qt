#include "ApplicationController.h"

#include <QComboBox>
#include <QVBoxLayout>

namespace Core {
namespace ApplicationController {

ApplicationController::ApplicationController()
    : mApplicationView(new UI::ApplicationView::ApplicationView()),
      mModuleManager(Core::ModuleManager::ModuleManager()) {

  QVBoxLayout *verticalLayout = new QVBoxLayout(mApplicationView);
  QWidget *centralWidget = new QWidget(mApplicationView);
  centralWidget->setLayout(verticalLayout);
  mApplicationView->setCentralWidget(centralWidget);

  for (int count = 1; count <= 20; ++count) {
    QComboBox *comboBox = new QComboBox(centralWidget);
    verticalLayout->addWidget(comboBox);
  }

  mApplicationView->show();
}

ApplicationController::~ApplicationController() {
  mApplicationView->deleteLater();
}

} // namespace ApplicationController
} // namespace Core
