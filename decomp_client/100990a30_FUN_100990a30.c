
undefined8 FUN_100990a30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(long *)(param_1 + 0x50) != 0);
  }
  return uVar2;
}

