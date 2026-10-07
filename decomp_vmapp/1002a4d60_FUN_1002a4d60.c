
void FUN_1002a4d60(long param_1,int param_2,char param_3)

{
  long lVar1;
  
  if ((-1 < param_2) &&
     ((lVar1 = (long)param_2, *(char *)(param_1 + 0x28 + lVar1 * 0xc) == '\0' ||
      (*(char *)(param_1 + 0x29 + lVar1 * 0xc) != param_3)))) {
    *(char *)(param_1 + 0x28 + lVar1 * 0xc) = param_3;
  }
  return;
}

