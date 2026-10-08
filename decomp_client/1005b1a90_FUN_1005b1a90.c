
void FUN_1005b1a90(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (-1 < param_2) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
    }
    uVar3 = FUN_100202d10(uVar3);
    FUN_1005b87d0(uVar2,uVar3);
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar2,2);
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar1 = FUN_1005b8750(uVar2);
    FUN_10083fee0(param_1,uVar1);
    return;
  }
  FUN_1005b87d0(uVar2,0);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar2,0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goBack();
  return;
}

