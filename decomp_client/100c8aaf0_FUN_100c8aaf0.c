
char * FUN_100c8aaf0(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xfffffeff;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
  if (0x1e < uVar1) {
    return "(unknown)";
  }
  return (&PTR_s_EOC_102253110)[(int)uVar1];
}

