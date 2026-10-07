
size_t FUN_10087ee80(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  *param_2 = '\0';
  pcVar1 = _fgets(param_2,param_3,*(FILE **)(param_1 + 0x30));
  sVar2 = 0;
  if ((pcVar1 != (char *)0x0) && (*param_2 != '\0')) {
    sVar2 = _strlen(param_2);
  }
  return sVar2;
}

