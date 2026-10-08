
undefined4 FUN_10097dc62(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int local_18;
  int local_14;
  
  if ((0 < *(int *)(param_1 + 0x24)) && (**(int **)(param_1 + 0x30) == 6)) {
    local_18 = 0;
    for (local_14 = 1; local_14 < *(int *)(param_1 + 0x24); local_14 = local_14 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18 + 8);
      *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10) =
           *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18 + 0x10);
      *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18) =
           *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18);
      local_18 = local_18 + 1;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x24)) {
    lVar4 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x30),(long)*(int *)(param_1 + 0x28) * 0x30);
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    *(long *)(param_1 + 0x30) = lVar4;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) * 2;
  }
  local_18 = 0;
  local_14 = *(int *)(param_1 + 0x24);
  for (; local_14 = local_14 + -1, local_18 < local_14; local_18 = local_18 + 1) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18 + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18 + 8) = uVar3;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10) =
         *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18 + 0x10) = uVar3;
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18);
    *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18) =
         *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18);
    *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_14 * 0x18) = uVar1;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x24) * 0x18 + 8) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x24) * 0x18 + 0x10) = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 0x18) = 0;
  *(int *)(param_1 + 0x24) = iVar2 + 1;
  return 0;
}

