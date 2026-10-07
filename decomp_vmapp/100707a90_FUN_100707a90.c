
long FUN_100707a90(long param_1,long param_2,int param_3,long param_4,code *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  lVar3 = (long)param_3;
  local_38 = 0;
  while( true ) {
    while( true ) {
      lVar2 = (*param_5)(*(undefined4 *)(param_1 + 8),param_2,lVar3,param_4);
      if (-1 < lVar2) break;
      iVar1 = FUN_100768f60();
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 != 4) {
        return 0;
      }
    }
    if (lVar2 == 0) break;
    local_38 = local_38 + lVar2;
    lVar3 = lVar3 - lVar2;
    if (lVar3 == 0) break;
    param_2 = param_2 + lVar2;
    param_4 = param_4 + lVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return local_38;
}

