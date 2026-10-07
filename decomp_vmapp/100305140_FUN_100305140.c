
int FUN_100305140(char *param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  
  pcVar1 = _strstr(param_1,param_2);
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(param_2);
    if ((byte)(pcVar1[sVar2] | 0x20U) == 0x20) {
      iVar3 = (int)pcVar1 - (int)param_1;
    }
  }
  return iVar3;
}

