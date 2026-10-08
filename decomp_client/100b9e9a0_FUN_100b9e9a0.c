
int FUN_100b9e9a0(undefined4 *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  char *local_30;
  
  sVar3 = (size_t)param_3;
  iVar1 = _strncasecmp(param_2,"combined",sVar3);
  if (iVar1 == 0) {
    *param_1 = 0xfffffffe;
  }
  else {
    iVar1 = _strncasecmp(param_2,"unlimited",sVar3);
    if (iVar1 == 0) {
      *param_1 = 0xffff;
    }
    else {
      uVar2 = _strtoul(param_2,&local_30,10);
      *param_1 = (int)uVar2;
      if (param_2 + sVar3 != local_30) {
        param_3 = -2;
      }
    }
  }
  return param_3;
}

