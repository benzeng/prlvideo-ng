
uint FUN_10084c160(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((-1 < param_2) &&
     (iVar2 = (int)(((uint)(param_2 >> 0x1f) >> 0x1a) + param_2) >> 6, iVar2 < (int)param_1[1])) {
    uVar1 = (uint)(*(ulong *)(*param_1 + (long)iVar2 * 8) >> ((byte)param_2 & 0x3f)) & 1;
  }
  return uVar1;
}

