
void FUN_1005e6bf0(long param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_a0 [72];
  QString local_58 [2];
  undefined1 local_48 [40];
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  lVar2 = QMetaObject::cast((QObject *)&DAT_1021f4710);
  if (*(int *)(*(long *)(lVar2 + 0x58) + 4) != 0) {
    uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    FUN_1005b69c0(local_a0,uVar3);
    cVar1 = operator==((QString *)(lVar2 + 0x58),local_58);
    FUN_100252c80(local_48);
    FUN_100252e70(local_a0);
    if (cVar1 != '\0') goto LAB_1005e6ca0;
  }
  uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005b9a00(uVar3,lVar2 + 0x10);
LAB_1005e6ca0:
  lVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  *(undefined4 *)(lVar2 + 0x50) = 6;
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

