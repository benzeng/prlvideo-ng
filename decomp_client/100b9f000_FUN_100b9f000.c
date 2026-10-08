
int FUN_100b9f000(long param_1,char *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  char *local_28;
  
  local_28 = (char *)0x0;
  uVar2 = _strtoul(param_2,&local_28,10);
  *(int *)(param_1 + 0x20) = (int)uVar2;
  iVar1 = -2;
  if (param_2 + param_3 == local_28) {
    FUN_100b9a0a0(param_1,0,param_1,0x11);
    iVar1 = param_3;
  }
  return iVar1;
}

