
undefined8
FUN_1002db340(undefined8 param_1,char param_2,int param_3,short param_4,short param_5,void *param_6,
             uint *param_7)

{
  uint uVar1;
  
  if ((char)param_3 == '\0') {
    if (-1 < param_2) {
      return 0x20;
    }
    uVar1 = 4;
    if (*param_7 < 4) {
      uVar1 = *param_7;
    }
    *param_7 = uVar1;
    ___bzero(param_6,uVar1);
  }
  else if (param_3 == 1) {
    if (param_2 < '\0') {
      return 0x20;
    }
  }
  else {
    if (param_3 != 6) {
      return 0x20;
    }
    if (-1 < param_2) {
      return 0x20;
    }
    if (param_5 != 0) {
      return 0x20;
    }
    if ((param_4 != 0) && (param_4 != 0x2900)) {
      return 0x20;
    }
    uVar1 = 0xf;
    if (*param_7 < 0xf) {
      uVar1 = *param_7;
    }
    *param_7 = uVar1;
    _memcpy(param_6,&DAT_101116bc8,(ulong)uVar1);
  }
  return 0;
}

