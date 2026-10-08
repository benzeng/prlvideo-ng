
undefined8 FUN_100c42320(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100c3fad0(*(undefined8 *)(param_2 + 0x20));
  lVar3 = FUN_100c36a20(uVar2);
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_100c3fae0(*(undefined8 *)(param_1 + 0x20),lVar3);
    if (iVar1 != 0) {
      FUN_100c36170(lVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

