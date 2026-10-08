
int FUN_10086bfcb(undefined1 *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar5;
  int iVar6;
  int local_6c;
  byte *local_60;
  undefined1 *local_50;
  byte *local_40;
  uint local_14;
  int local_c;
  int iVar4;
  int iVar7;
  
  if (((param_1 == (undefined1 *)0x0) || (param_2 == (int *)0x0)) || (param_4 == (int *)0x0)) {
    local_6c = -1;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    *param_4 = 0;
    local_6c = 0;
  }
  else {
    pbVar5 = param_3 + *param_4;
    iVar2 = *param_2;
    local_50 = param_1;
    local_40 = param_3;
    while( true ) {
      iVar3 = (int)param_1;
      iVar6 = (int)local_50;
      iVar4 = (int)param_3;
      iVar7 = (int)local_40;
      if (pbVar5 <= local_40) break;
      local_14 = (uint)*local_40;
      local_60 = local_40 + 1;
      if (local_14 < 0x80) {
        local_c = 0;
      }
      else {
        if (local_14 < 0xc0) {
          *param_2 = iVar6 - iVar3;
          *param_4 = iVar7 - iVar4;
          return -2;
        }
        if (local_14 < 0xe0) {
          local_14 = local_14 & 0x1f;
          local_c = 1;
        }
        else if (local_14 < 0xf0) {
          local_14 = local_14 & 0xf;
          local_c = 2;
        }
        else {
          if (0xf7 < local_14) {
            *param_2 = iVar6 - iVar3;
            *param_4 = iVar7 - iVar4;
            return -2;
          }
          local_14 = local_14 & 7;
          local_c = 3;
        }
      }
      if ((long)pbVar5 - (long)local_60 < (long)local_c) break;
      while ((local_c != 0 && (local_60 < pbVar5))) {
        bVar1 = *local_60;
        local_60 = local_60 + 1;
        if ((bVar1 & 0xc0) != 0x80) break;
        local_14 = local_14 << 6 | bVar1 & 0x3f;
        local_c = local_c + -1;
      }
      if (0x7f < local_14) {
        *param_2 = iVar6 - iVar3;
        *param_4 = iVar7 - iVar4;
        return -2;
      }
      if (param_1 + iVar2 <= local_50) break;
      *local_50 = (char)local_14;
      local_50 = local_50 + 1;
      local_40 = local_60;
    }
    *param_2 = iVar6 - iVar3;
    *param_4 = iVar7 - iVar4;
    local_6c = *param_2;
  }
  return local_6c;
}

