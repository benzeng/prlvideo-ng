
ulong FUN_100174cb1(long param_1,byte *param_2,byte *param_3,char *param_4,char *param_5,
                   char *param_6,char *param_7)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *local_48;
  char *local_40;
  char *local_38;
  byte *local_30;
  byte *local_28;
  ulong local_18;
  
  if (param_2 == (byte *)0x0) {
    iVar3 = (uint)*param_3 + (uint)*param_3;
  }
  else {
    iVar3 = (uint)*param_2 + (uint)*param_2;
  }
  local_18 = (ulong)(iVar3 * 0xf);
  local_28 = param_2;
  if (param_2 != (byte *)0x0) {
    while( true ) {
      bVar1 = *local_28;
      local_28 = local_28 + 1;
      if (bVar1 == 0) break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)(char)bVar1;
    }
    local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + 0x3a;
  }
  local_30 = param_3;
  if (param_3 != (byte *)0x0) {
    while( true ) {
      bVar1 = *local_30;
      local_30 = local_30 + 1;
      if (bVar1 == 0) break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)(char)bVar1;
    }
  }
  local_38 = param_4;
  if (param_4 != (char *)0x0) {
    while( true ) {
      cVar2 = *local_38;
      local_38 = local_38 + 1;
      if (cVar2 == '\0') break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)cVar2;
    }
    local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + 0x3a;
  }
  local_40 = param_5;
  if (param_5 != (char *)0x0) {
    while( true ) {
      cVar2 = *local_40;
      local_40 = local_40 + 1;
      if (cVar2 == '\0') break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)cVar2;
    }
  }
  local_48 = param_6;
  if (param_6 != (char *)0x0) {
    while( true ) {
      cVar2 = *local_48;
      local_48 = local_48 + 1;
      if (cVar2 == '\0') break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)cVar2;
    }
    local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + 0x3a;
  }
  if (param_7 != (char *)0x0) {
    while( true ) {
      cVar2 = *param_7;
      param_7 = param_7 + 1;
      if (cVar2 == '\0') break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)cVar2;
    }
  }
  return local_18 % (ulong)(long)*(int *)(param_1 + 8);
}

