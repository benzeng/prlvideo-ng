
int FUN_10071fd10(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  char *local_30;
  
  iVar1 = _strncasecmp(param_2,"unlimited",(long)param_3);
  if (iVar1 == 0) {
    *param_1 = 0xffff;
    iVar1 = 0xffff;
  }
  else {
    uVar2 = _strtoul(param_2,&local_30,10);
    iVar1 = (int)uVar2;
    *param_1 = iVar1;
    if (param_2 + param_3 != local_30) {
      return -2;
    }
  }
  if ((param_3 == 0) && (param_3 = 0, iVar1 != 0xffff)) {
    *param_1 = iVar1 / 100;
  }
  return param_3;
}

