
void FUN_1005b1f30(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_2 < 0) {
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar2,0);
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goBack();
    return;
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100264dd0(uVar2);
  uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b87d0(uVar3,uVar2);
  pvVar4 = operator_new(0x30);
  FUN_10072e7c0(pvVar4,*(undefined8 *)(param_1 + 0x10));
  FUN_10072e810(pvVar4,uVar2);
  uVar2 = FUN_1005c11f0(*(undefined8 *)(param_1 + 0x10));
  FUN_10072f3d0(pvVar4,uVar2);
  lVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(lVar5 + 0x6d) != '\0') {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goNext();
    return;
  }
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar2,2);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_1005b8750(uVar2);
  FUN_10083fee0(param_1,uVar1);
  return;
}

