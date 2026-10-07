
char * FUN_100713550(char *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *local_40;
  char local_33 [2];
  undefined1 local_31;
  
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  else {
    pbVar4 = *(byte **)(param_2 + 0x10);
  }
  local_40 = param_2 + 1;
  while( true ) {
    if ((bVar1 & 1) == 0) {
      uVar2 = (ulong)(bVar1 >> 1);
      pbVar3 = local_40;
    }
    else {
      uVar2 = *(ulong *)(param_2 + 8);
      pbVar3 = *(byte **)(param_2 + 0x10);
    }
    if (pbVar4 == pbVar3 + uVar2) break;
    _snprintf(local_33,3,"%02x",(ulong)(uint)(int)(char)*pbVar4);
    local_31 = 0;
    std::string::append(param_1);
    pbVar4 = pbVar4 + 1;
    bVar1 = *param_2;
  }
  return param_1;
}

