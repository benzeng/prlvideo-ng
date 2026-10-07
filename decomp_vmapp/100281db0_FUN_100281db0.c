
void FUN_100281db0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x38);
  param_1 = param_1 + 0x148;
  FUN_100402390(param_1);
  if (*(int *)(lVar1 + 0x10) != 0) {
    lVar2 = 0;
    do {
      FUN_100402710(param_1,param_2,*(undefined4 *)(*(long *)(lVar1 + 8) + 4 + lVar2 * 8),
                    *(undefined4 *)(*(long *)(lVar1 + 8) + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(lVar1 + 0x10));
  }
  FUN_100402b80(param_1,param_2);
  FUN_100402d70(param_1);
  FUN_100402c40(param_1,param_2);
  return;
}

