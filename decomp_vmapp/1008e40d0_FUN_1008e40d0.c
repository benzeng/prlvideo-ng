
void FUN_1008e40d0(char *param_1,undefined8 param_2)

{
  int iVar1;
  
  _strncpy(&DAT_1011b562c,param_1,0x400);
  DAT_1011b5a2b = 0;
  _snprintf(&DAT_1011b5a2c,0x400,"%s/%s",param_1,param_2);
  iVar1 = DAT_1011b5610;
  DAT_1011b5e2b = 0;
  DAT_1011b5610 = 0xffffffff;
  if (iVar1 != -1) {
    _close(iVar1);
    return;
  }
  return;
}

