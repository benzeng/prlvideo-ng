
void FUN_10067c4e0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QVariant local_30;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    uVar3 = FUN_10016f500();
    if (*(int *)(param_1 + 0x154) == 2) {
      cVar1 = FUN_10061c5c0(uVar3);
      if (cVar1 != '\0') {
        FUN_10061abe0(&local_30,uVar3,0);
        uVar2 = QVariant::toInt((bool *)&local_30);
        cVar1 = FUN_10061c740(uVar2);
        QVariant::~QVariant(&local_30);
        if (cVar1 == '\0') {
          CAbstractWizardModel::wizardCtrl();
          CWizardController::goNext();
        }
      }
    }
  }
  return;
}

