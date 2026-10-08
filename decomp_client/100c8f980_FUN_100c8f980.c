
int FUN_100c8f980(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  
  sVar2 = _strlen(param_1);
  sVar3 = _strlen(param_2);
  iVar4 = 0;
  if ((int)sVar3 + 1 < (int)sVar2) {
    lVar5 = (long)(int)sVar2 - (long)(int)sVar3;
    iVar1 = _strcmp(param_1 + lVar5,param_2);
    iVar4 = 0;
    if ((iVar1 == 0) && (param_1[lVar5 + -1] == ' ')) {
      iVar4 = (int)lVar5 + -1;
    }
  }
  return iVar4;
}

