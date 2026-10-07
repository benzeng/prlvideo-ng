
ulong FUN_100174b7b(long param_1,byte *param_2,char *param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char *local_38;
  char *local_30;
  byte *local_28;
  ulong local_18;
  
  local_18 = 0;
  if (param_2 != (byte *)0x0) {
    local_18 = (ulong)(int)(((uint)*param_2 + (uint)*param_2) * 0xf);
    local_28 = param_2;
    while( true ) {
      bVar1 = *local_28;
      local_28 = local_28 + 1;
      if (bVar1 == 0) break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)(char)bVar1;
    }
  }
  local_30 = param_3;
  if (param_3 != (char *)0x0) {
    while( true ) {
      cVar2 = *local_30;
      local_30 = local_30 + 1;
      if (cVar2 == '\0') break;
      local_18 = local_18 ^ local_18 * 0x20 + (local_18 >> 3) + (long)cVar2;
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
  }
  return local_18 % (ulong)(long)*(int *)(param_1 + 8);
}

