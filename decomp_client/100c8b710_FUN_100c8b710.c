
ulong FUN_100c8b710(int *param_1,long *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *local_38;
  
  uVar3 = 0;
  if (param_1 != (int *)0x0) {
    if (param_3 == 3) {
      uVar3 = FUN_100c83860(param_1,param_2);
      return uVar3;
    }
    iVar1 = *param_1;
    uVar2 = FUN_100c8aea0(0,iVar1,param_3);
    uVar3 = (ulong)uVar2;
    if (param_2 != (long *)0x0) {
      local_38 = (void *)*param_2;
      FUN_100c8ad50(&local_38,(param_3 & 0xfffffffe) == 0x10,iVar1,param_3,param_4);
      _memcpy(local_38,*(void **)(param_1 + 2),(long)*param_1);
      *param_2 = (long)*param_1 + (long)local_38;
    }
  }
  return uVar3;
}

