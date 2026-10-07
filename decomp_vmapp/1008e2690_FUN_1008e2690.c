
undefined8 FUN_1008e2690(long param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 0x128) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_100894600(param_1);
    uVar5 = (ulong)iVar1;
    lVar3 = (long)*(int *)(param_1 + 0x128);
    if (0 < lVar3) {
      uVar4 = uVar5 - lVar3;
      uVar6 = uVar4;
      if (param_3 < uVar4) {
        uVar6 = param_3;
      }
      iVar2 = (int)param_3;
      if (uVar4 <= param_3) {
        iVar2 = (int)uVar4;
      }
      _memcpy((void *)(param_1 + 0x108 + lVar3),param_2,uVar6);
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + iVar2;
      if (uVar6 == param_3) {
        return 1;
      }
      iVar2 = FUN_100894610(param_1,param_1 + 0xe8,param_1 + 0x108,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 - uVar6;
      param_2 = (void *)((long)param_2 + uVar6);
    }
    if (uVar5 < param_3) {
      do {
        iVar2 = FUN_100894610(param_1,param_1 + 0xe8,param_2,iVar1);
        if (iVar2 == 0) {
          return 0;
        }
        param_3 = param_3 - uVar5;
        param_2 = (void *)((long)param_2 + uVar5);
      } while (uVar5 < param_3);
    }
    _memcpy((void *)(param_1 + 0x108),param_2,param_3);
    *(int *)(param_1 + 0x128) = (int)param_3;
    return 1;
  }
  return 1;
}

