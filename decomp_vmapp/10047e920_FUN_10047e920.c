
undefined8 FUN_10047e920(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    lVar1 = *(long *)(param_1 + 0x30);
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8) < 100);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

