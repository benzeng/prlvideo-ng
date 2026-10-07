
void FUN_10044e850(uint *param_1,long param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_2 + 2);
    do {
      bVar1 = pbVar2[-1];
      *param_1 = ((uint)*pbVar2 - (uint)bVar1 & 0xff) << 0x10 |
                 (uint)bVar1 << 8 | (uint)pbVar2[-2] - (uint)bVar1 & 0xff;
      param_1 = param_1 + 1;
      pbVar2 = pbVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

