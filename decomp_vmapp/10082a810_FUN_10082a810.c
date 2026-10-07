
ulong FUN_10082a810(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int local_30 [2];
  
  uVar3 = 0;
  if (param_3 != 0) {
    iVar1 = _strcmp(param_2,"key");
    if (iVar1 == 0) {
      iVar1 = FUN_10089b640(*(long *)(param_1 + 0x28) + 8,param_3,0xffffffff);
      uVar3 = (ulong)(iVar1 != 0);
    }
    else {
      iVar1 = _strcmp(param_2,"hexkey");
      uVar3 = 0xfffffffe;
      if (iVar1 == 0) {
        lVar2 = FUN_1008c46f0(param_3,local_30);
        uVar3 = 0;
        if (lVar2 != 0) {
          uVar3 = 0;
          if (-2 < local_30[0]) {
            iVar1 = FUN_10089b640(*(long *)(param_1 + 0x28) + 8,lVar2);
            uVar3 = (ulong)(iVar1 != 0);
          }
          FUN_10081e1a0(lVar2);
        }
      }
    }
  }
  return uVar3;
}

