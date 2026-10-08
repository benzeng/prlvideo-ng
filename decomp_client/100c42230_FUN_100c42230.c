
undefined4 FUN_100c42230(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_100c26720();
  if (lVar3 != 0) {
    uVar4 = FUN_100c3fad0(*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_100c36bd0(uVar4,lVar3,0);
    if (iVar1 != 0) {
      uVar2 = FUN_100c26610(lVar3);
      FUN_100c266b0(lVar3);
      return uVar2;
    }
  }
  FUN_100c63270();
  return 0;
}

