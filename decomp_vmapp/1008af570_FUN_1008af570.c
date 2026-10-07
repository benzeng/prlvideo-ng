
char * FUN_1008af570(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xfffffeff;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
  if (0x1e < uVar1) {
    return "(unknown)";
  }
  return (&PTR_s_EOC_100be2b00)[(int)uVar1];
}

