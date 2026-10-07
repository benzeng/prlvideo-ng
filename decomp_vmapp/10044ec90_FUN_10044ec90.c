
void FUN_10044ec90(uint *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    pbVar1 = (byte *)(param_2 + 2);
    do {
      *param_1 = (uint)pbVar1[-2] * 0x1d + 0x80 + (uint)pbVar1[-1] * 0x96 + (uint)*pbVar1 * 0x4d >>
                 8;
      param_1 = param_1 + 1;
      pbVar1 = pbVar1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

