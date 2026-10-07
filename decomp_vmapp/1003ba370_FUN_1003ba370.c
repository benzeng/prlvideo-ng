
long FUN_1003ba370(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x218) != '\0') {
    FUN_1003ba140(param_1);
  }
  lVar1 = *(long *)(param_1 + 0x1f8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x208);
  }
  return lVar1;
}

