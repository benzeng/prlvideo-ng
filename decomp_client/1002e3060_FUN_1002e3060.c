
undefined8 FUN_1002e3060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xc) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(char *)(lVar1 + 0x40) == '\0');
  }
  return uVar2;
}

