
undefined8 FUN_100804350(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((((*(int *)(param_1 + 0x1ec) == -1) || (*(long *)(param_1 + 0x170) == 0)) ||
      (*(long *)(*(long *)(param_1 + 0x170) + 0x1e8) == 0)) ||
     (lVar2 = FUN_100810960(param_1), lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    return 1;
  }
  **(long **)(param_1 + 0x100) = lVar2;
  iVar1 = (**(code **)(*(long *)(param_1 + 0x170) + 0x1e8))
                    (param_1,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x1f0));
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x208) != 0) {
      *(undefined4 *)(param_1 + 0x1f0) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    return 1;
  }
  if (iVar1 == 2) {
    FUN_1007fd650(param_1,2,0x50);
    return 0xffffffff;
  }
  if (iVar1 != 3) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  return 1;
}

