
undefined8 FUN_10057a490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x12b8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(char *)(lVar1 + 0x28) != '\0');
  }
  return uVar2;
}

