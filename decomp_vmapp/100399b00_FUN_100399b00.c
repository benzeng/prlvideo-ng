
char * FUN_100399b00(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8 + (ulong)param_2 * 0xc) - 1;
  if (uVar1 < 4) {
    return (&PTR_s_sampler2D_100bbd370)[(int)uVar1];
  }
  return "";
}

