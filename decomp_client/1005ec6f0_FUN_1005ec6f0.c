
void FUN_1005ec6f0(long param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  QVariant local_40;
  
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  lVar3 = FUN_1005b87b0(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_1005ec990(param_1 + 0x38);
    uVar1 = *(undefined4 *)(lVar4 + 0x74);
    pcVar5 = operator_new(0x40);
    FUN_100227250(pcVar5,lVar3,0,uVar1,0);
    if (param_2 != '\0') {
      CAbstractWizardPage::wizardCtrl();
      lVar3 = CWizardController::parentWidget();
      if (lVar3 != 0) {
        CAbstractWizardPage::wizardCtrl();
        CWizardController::parentWidget();
        lVar3 = QWidget::window();
        if (lVar3 != 0) {
          auVar6 = QWidget::frameGeometry();
          local_48 = CONCAT44((auVar6._12_4_ + auVar6._4_4_) / 2,(auVar6._8_4_ + auVar6._0_4_) / 2);
          QVariant::QVariant(&local_40,(QPoint *)&local_48);
          QObject::setProperty(pcVar5,(QVariant *)"centralPoint");
          QVariant::~QVariant(&local_40);
        }
      }
    }
    CAbstractTask::execute();
  }
  return;
}

