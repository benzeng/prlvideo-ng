
ulong FUN_100c021f0(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int local_30 [2];
  
  uVar3 = 0;
  if (param_3 != 0) {
    iVar1 = _strcmp(param_2,"key");
    if (iVar1 == 0) {
      iVar1 = FUN_100c76bc0(*(long *)(param_1 + 0x28) + 8,param_3,0xffffffff);
      uVar3 = (ulong)(iVar1 != 0);
    }
    else {
      iVar1 = _strcmp(param_2,"hexkey");
      uVar3 = 0xfffffffe;
      if (iVar1 == 0) {
        lVar2 = FUN_100c9fc70(param_3,local_30);
        uVar3 = 0;
        if (lVar2 != 0) {
          uVar3 = 0;
          if (-2 < local_30[0]) {
            iVar1 = FUN_100c76bc0(*(long *)(param_1 + 0x28) + 8,lVar2);
            uVar3 = (ulong)(iVar1 != 0);
          }
          FUN_100bf3910(lVar2);
        }
      }
    }
  }
  return uVar3;
}

