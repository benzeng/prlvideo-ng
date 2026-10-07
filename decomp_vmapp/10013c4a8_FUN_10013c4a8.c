
int FUN_10013c4a8(byte *param_1,int *param_2,byte *param_3,int *param_4,long param_5)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int local_74;
  byte *local_60;
  byte *local_50;
  byte *local_28;
  uint local_1c;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == (int *)0x0)) || (param_4 == (int *)0x0)) ||
     ((param_3 == (byte *)0x0 || (param_5 == 0)))) {
    local_74 = -1;
  }
  else {
    pbVar2 = param_1 + *param_2;
    pbVar3 = param_3 + *param_4;
    local_1c = (uint)*param_3;
    local_60 = param_3;
    local_50 = param_1;
    local_28 = pbVar3;
    while( true ) {
      if ((pbVar3 <= local_60) || (pbVar2 + -1 <= local_50)) break;
      if (0x7f < local_1c) {
        uVar1 = *(ushort *)((ulong)(local_1c - 0x80) * 2 + param_5);
        if (uVar1 == 0) {
          *param_2 = (int)local_50 - (int)param_1;
          *param_4 = (int)local_60 - (int)param_3;
          return -1;
        }
        if (uVar1 < 0x800) {
          *local_50 = (byte)(uVar1 >> 6) & 0x1f | 0xc0;
          local_50[1] = (byte)uVar1 & 0x3f | 0x80;
          local_50 = local_50 + 2;
        }
        else {
          *local_50 = (byte)(uVar1 >> 0xc) | 0xe0;
          local_50[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          local_50[2] = (byte)uVar1 & 0x3f | 0x80;
          local_50 = local_50 + 3;
        }
        local_60 = local_60 + 1;
        local_1c = (uint)*local_60;
      }
      if ((long)pbVar2 - (long)local_50 < (long)local_28 - (long)local_60) {
        local_28 = local_60 + ((long)pbVar2 - (long)local_50);
      }
      while ((local_1c < 0x80 && (local_60 < local_28))) {
        *local_50 = (byte)local_1c;
        local_50 = local_50 + 1;
        local_60 = local_60 + 1;
        local_1c = (uint)*local_60;
      }
    }
    if (((local_60 < pbVar3) && (local_50 < pbVar2)) && (local_1c < 0x80)) {
      *local_50 = (byte)local_1c;
      local_50 = local_50 + 1;
      local_60 = local_60 + 1;
    }
    *param_2 = (int)local_50 - (int)param_1;
    *param_4 = (int)local_60 - (int)param_3;
    local_74 = *param_2;
  }
  return local_74;
}

