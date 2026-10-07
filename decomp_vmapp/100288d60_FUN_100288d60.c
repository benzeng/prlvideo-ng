
undefined8 FUN_100288d60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa0);
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),
                     (*(uint *)(lVar1 + 0x1c) & *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) != 0);
  }
  return uVar2;
}

