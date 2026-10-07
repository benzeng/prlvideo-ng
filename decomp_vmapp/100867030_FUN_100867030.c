
undefined4 FUN_100867030(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_10084b520();
  if (lVar3 != 0) {
    uVar4 = FUN_1008648d0(*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_10085b9d0(uVar4,lVar3,0);
    if (iVar1 != 0) {
      uVar2 = FUN_10084b410(lVar3);
      FUN_10084b4b0(lVar3);
      return uVar2;
    }
  }
  FUN_100888070();
  return 0;
}

