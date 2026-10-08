
void FUN_1007dea20(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((((*(int *)(*(long *)(param_1 + 0x28) + 4) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
        (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) &&
       (cVar1 = CAbstractTask::canBeTerminated(), cVar1 == '\0')) {
      return;
    }
    if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
       ((*(long *)(param_1 + 0x30) != 0 && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')))) {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x78))(*(long **)(param_1 + 0x30),0x80000275);
    }
  }
  CAbstractWizardModel::wizardCtrl();
  lVar2 = CWizardController::parentWidget();
  if (lVar2 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222e630);
  FUN_1007dcc40(uVar3,0x80000275);
  return;
}

