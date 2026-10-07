
int FUN_10013917f(ushort *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar6;
  int iVar7;
  int local_7c;
  byte *local_70;
  ushort *local_58;
  uint local_24;
  int local_1c;
  int iVar5;
  int iVar8;
  
  pbVar6 = param_3 + *param_4;
  if (((param_1 == (ushort *)0x0) || (param_2 == (int *)0x0)) || (param_4 == (int *)0x0)) {
    local_7c = -1;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    *param_4 = 0;
    local_7c = 0;
  }
  else {
    iVar2 = *param_2;
    local_70 = param_3;
    local_58 = param_1;
    while( true ) {
      iVar4 = (int)param_1;
      iVar7 = (int)local_58;
      iVar5 = (int)param_3;
      iVar8 = (int)local_70;
      if (pbVar6 <= local_70) break;
      local_24 = (uint)*local_70;
      local_70 = local_70 + 1;
      if (local_24 < 0x80) {
        local_1c = 0;
      }
      else {
        if (local_24 < 0xc0) {
          *param_2 = iVar7 - iVar4;
          *param_4 = iVar8 - iVar5;
          return -2;
        }
        if (local_24 < 0xe0) {
          local_24 = local_24 & 0x1f;
          local_1c = 1;
        }
        else if (local_24 < 0xf0) {
          local_24 = local_24 & 0xf;
          local_1c = 2;
        }
        else {
          if (0xf7 < local_24) {
            *param_2 = iVar7 - iVar4;
            *param_4 = iVar8 - iVar5;
            return -2;
          }
          local_24 = local_24 & 7;
          local_1c = 3;
        }
      }
      if ((long)pbVar6 - (long)local_70 < (long)local_1c) break;
      while ((local_1c != 0 && (local_70 < pbVar6))) {
        bVar1 = *local_70;
        local_70 = local_70 + 1;
        if ((bVar1 & 0xc0) != 0x80) break;
        local_24 = local_24 << 6 | bVar1 & 0x3f;
        local_1c = local_1c + -1;
      }
      if (local_24 < 0x10000) {
        if (param_1 + iVar2 / 2 <= local_58) break;
        if (DAT_10110d748 == 0) {
          *(char *)local_58 = (char)local_24;
          *(char *)((long)local_58 + 1) = (char)(local_24 >> 8);
          local_58 = local_58 + 1;
        }
        else {
          *local_58 = (ushort)local_24;
          local_58 = local_58 + 1;
        }
      }
      else {
        if ((0x10ffff < local_24) || (param_1 + iVar2 / 2 <= local_58 + 1)) break;
        local_24 = local_24 - 0x10000;
        if (DAT_10110d748 == 0) {
          *(char *)local_58 = (char)(local_24 >> 10);
          *(byte *)((long)local_58 + 1) = (byte)((local_24 >> 10) >> 8) | 0xd8;
          uVar3 = (ushort)local_24 & 0x3ff;
          *(char *)(local_58 + 1) = (char)uVar3;
          *(byte *)((long)local_58 + 3) = (byte)(uVar3 >> 8) | 0xdc;
          local_58 = local_58 + 2;
        }
        else {
          *local_58 = (ushort)(local_24 >> 10) | 0xd800;
          local_58[1] = (ushort)local_24 & 0x3ff | 0xdc00;
          local_58 = local_58 + 2;
        }
      }
    }
    *param_2 = iVar7 - iVar4;
    *param_4 = iVar8 - iVar5;
    local_7c = *param_2;
  }
  return local_7c;
}

