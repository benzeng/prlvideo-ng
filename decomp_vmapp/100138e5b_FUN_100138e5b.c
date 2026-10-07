
int FUN_100138e5b(byte *param_1,int *param_2,ushort *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  byte *local_60;
  ushort *local_38;
  uint local_24;
  uint local_20;
  int local_c;
  
  iVar2 = *param_2;
  if (*param_4 % 2 == 1) {
    *param_4 = *param_4 + -1;
  }
  iVar3 = *param_4;
  local_60 = param_1;
  local_38 = param_3;
  do {
    puVar4 = local_38;
    iVar5 = (int)local_38;
    if ((param_3 + (uint)(iVar3 / 2) <= local_38) ||
       ((long)*param_2 <= (long)(local_60 + (5 - (long)param_1)))) goto LAB_10013914d;
    if (DAT_10110d748 == 0) {
      uVar1 = *local_38;
    }
    else {
      uVar1 = *local_38;
    }
    local_24 = (uint)uVar1;
    local_38 = local_38 + 1;
    if ((local_24 & 0xfc00) == 0xd800) {
      if (param_3 + (uint)(iVar3 / 2) <= local_38) {
LAB_10013914d:
        *param_2 = (int)local_60 - (int)param_1;
        *param_4 = iVar5 - (int)param_3;
        return *param_2;
      }
      if (DAT_10110d748 == 0) {
        uVar1 = *local_38;
      }
      else {
        uVar1 = *local_38;
      }
      local_20 = (uint)uVar1;
      local_38 = puVar4 + 2;
      if ((local_20 & 0xfc00) != 0xdc00) {
        *param_2 = (int)local_60 - (int)param_1;
        *param_4 = iVar5 - (int)param_3;
        return -2;
      }
      local_24 = ((local_24 & 0x3ff) << 10 | local_20 & 0x3ff) + 0x10000;
    }
    if (param_1 + iVar2 <= local_60) goto LAB_10013914d;
    if (local_24 < 0x80) {
      *local_60 = (byte)local_24;
      local_60 = local_60 + 1;
      local_c = -6;
    }
    else if (local_24 < 0x800) {
      *local_60 = (byte)(local_24 >> 6) & 0x1f | 0xc0;
      local_60 = local_60 + 1;
      local_c = 0;
    }
    else if (local_24 < 0x10000) {
      *local_60 = (byte)(local_24 >> 0xc) & 0xf | 0xe0;
      local_60 = local_60 + 1;
      local_c = 6;
    }
    else {
      *local_60 = (byte)(local_24 >> 0x12) | 0xf0;
      local_60 = local_60 + 1;
      local_c = 0xc;
    }
    for (; (-1 < local_c && (local_60 < param_1 + iVar2)); local_60 = local_60 + 1) {
      *local_60 = (byte)(local_24 >> ((byte)local_c & 0x1f)) & 0x3f | 0x80;
      local_c = local_c + -6;
    }
  } while( true );
}

