
ulong FUN_1003be930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    uVar2 = FUN_10018c2b0(uVar2);
    uVar3 = FUN_100112cc0(uVar2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

