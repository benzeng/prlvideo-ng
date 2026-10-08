
undefined8 FUN_10018dc50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa8);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x28) == 0x3e9);
    }
  }
  return uVar2;
}

