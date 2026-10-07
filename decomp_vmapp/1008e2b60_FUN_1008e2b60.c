
undefined8 FUN_1008e2b60(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1008e2200();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_1008e2350(lVar2,*(undefined8 *)(param_1 + 0x28));
    if (iVar1 == 0) {
      FUN_1008e22d0(lVar2);
    }
    else {
      FUN_100892130(param_2,0x37e,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

