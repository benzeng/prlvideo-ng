
void FUN_100dfa120(char *param_1,undefined8 param_2)

{
  int iVar1;
  
  _strncpy(&DAT_102310004,param_1,0x400);
  DAT_102310403 = 0;
  _snprintf(&DAT_102310404,0x400,"%s/%s",param_1,param_2);
  iVar1 = DAT_10230ffe8;
  DAT_102310803 = 0;
  DAT_10230ffe8 = 0xffffffff;
  if (iVar1 != -1) {
    _close(iVar1);
    return;
  }
  return;
}

