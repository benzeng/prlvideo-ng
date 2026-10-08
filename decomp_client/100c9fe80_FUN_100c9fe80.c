
int FUN_100c9fe80(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = _strlen(param_2);
  iVar1 = _strncmp(param_1,param_2,(long)(int)sVar2);
  if (iVar1 == 0) {
    iVar1 = 0;
    if ((param_1[(int)sVar2] != '\0') && (param_1[(int)sVar2] != '.')) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

