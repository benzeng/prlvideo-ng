
void FUN_1005b37d0(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  if (param_2 < 0) {
    uVar7 = 1;
    if (param_2 != -0x7ffffd8b) {
      return;
    }
  }
  else {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar3 = FUN_10029b440(uVar6);
    if (lVar3 != 0) {
      iVar1 = FUN_10018bce0(lVar3);
      if (iVar1 == 3) {
        lVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        *(undefined4 *)(lVar4 + 0x50) = 10;
        uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x50);
        }
        uVar6 = FUN_10029b440(uVar6);
        FUN_100260540(uVar5,uVar6);
        uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        uVar2 = FUN_10018f890(lVar3);
        FUN_1005b82f0(uVar6,uVar2);
        CAbstractWizardModel::wizardCtrl();
        CWizardController::goNext();
        return;
      }
    }
    uVar7 = 0;
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(lVar3 + 0x50) = 3;
  uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar6,2);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(lVar3 + 0x1a1) = uVar7;
  uVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_1005b8750(uVar6);
  FUN_10083fee0(param_1,uVar2);
  return;
}

