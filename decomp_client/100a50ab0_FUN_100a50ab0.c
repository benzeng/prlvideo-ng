
char * FUN_100a50ab0(char *param_1,byte *param_2,char *param_3)

{
  ulong uVar1;
  
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
  if ((*param_2 & 1) == 0) {
    uVar1 = (ulong)(*param_2 >> 1);
    _strlen(param_3);
    param_2 = param_2 + 1;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    _strlen(param_3);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  std::string::__init(param_1,(ulong)param_2,uVar1);
  std::string::append(param_1,(ulong)param_3);
  return param_1;
}

