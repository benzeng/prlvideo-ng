
undefined8 FUN_100c6bca0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100bf61a0();
  uVar2 = FUN_100bf70a0(*param_1);
  iVar1 = FUN_100bf67c0(uVar2,1,param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_100bf6bf0(*param_1);
    uVar3 = FUN_100bf7160(*param_1);
    uVar3 = FUN_100bf67c0(uVar3,1,param_1);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else if ((param_1[1] != 0) && (*param_1 != param_1[1])) {
      uVar3 = FUN_100bf70a0();
      iVar1 = FUN_100bf67c0(uVar3,0x8001,uVar2);
      uVar3 = 0;
      if (iVar1 != 0) {
        FUN_100bf6bf0(param_1[1]);
        uVar3 = FUN_100bf7160(param_1[1]);
        uVar2 = FUN_100bf67c0(uVar3,0x8001,uVar2);
        return uVar2;
      }
    }
  }
  return uVar3;
}

