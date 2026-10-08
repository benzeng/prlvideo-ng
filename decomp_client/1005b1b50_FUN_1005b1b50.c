
bool FUN_1005b1b50(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = CAbstractWizardModel::currentPageId();
  if (iVar1 == 0xf) {
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    lVar4 = FUN_1005b87b0(uVar3);
    if (lVar4 != 0) {
      uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      iVar1 = FUN_1005b8750(uVar3);
      if (iVar1 != 2) {
        FUN_1005b29e0(param_1);
        return false;
      }
    }
  }
  uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_1005b8750(uVar3);
  if (iVar1 != 4) {
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar3,0);
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar2 = FUN_1005b8750(uVar3);
    FUN_10083fee0(param_1,uVar2);
  }
  return iVar1 != 4;
}

