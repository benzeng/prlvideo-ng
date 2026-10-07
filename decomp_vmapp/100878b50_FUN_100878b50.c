
int FUN_100878b50(code *param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  int iVar4;
  char *local_40 [4];
  
  if (param_1 == (code *)0x0) {
    param_1 = FUN_100878b50;
  }
  iVar1 = _dladdr(param_1,local_40);
  if (iVar1 == 0) {
    uVar3 = _dlerror();
    FUN_1008890a0(2,"dlfcn_pathbyaddr(): ",uVar3);
    iVar1 = -1;
  }
  else {
    sVar2 = _strlen(local_40[0]);
    iVar1 = (int)sVar2;
    if (param_3 < 1) {
      iVar1 = iVar1 + 1;
    }
    else {
      iVar4 = param_3 + -1;
      if (iVar1 < param_3) {
        iVar4 = iVar1;
      }
      _memcpy(param_2,local_40[0],(long)iVar4);
      iVar1 = iVar4 + 1;
      *(undefined1 *)((long)param_2 + (long)iVar4) = 0;
    }
  }
  return iVar1;
}

