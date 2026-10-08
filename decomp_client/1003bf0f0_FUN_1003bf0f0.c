
undefined8 FUN_1003bf0f0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  uVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
  uVar3 = 0;
  if ((lVar2 != 0) && ((uVar1 & 0xffffff00) == 0x800)) {
    uVar3 = FUN_10016f500(lVar2);
    uVar3 = FUN_10061c2b0(uVar3,0x10080);
  }
  return uVar3;
}

