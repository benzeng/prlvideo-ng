
undefined4 FUN_10070e510(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    uVar3 = 0;
    FUN_1008e3970("","AbstractFile",0,"!priv");
  }
  else {
    if (*(int *)(lVar4 + 0x24) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      lVar4 = param_1[2];
    }
    uVar3 = 1;
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar3 = FUN_10070dcb0(lVar4,param_2);
      lVar4 = param_1[2];
    }
    lVar1 = *(long *)(lVar4 + 0x10);
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x20);
      *(long *)(lVar4 + 0x10) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + -1;
      (**(code **)(**(long **)(lVar1 + 0x40) + 0x18))();
      FUN_10070aed0(lVar1);
      lVar4 = param_1[2];
      lVar1 = *(long *)(lVar4 + 0x10);
    }
  }
  return uVar3;
}

