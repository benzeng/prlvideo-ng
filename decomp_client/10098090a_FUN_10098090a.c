
int FUN_10098090a(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int local_14;
  
  for (local_14 = 0; local_14 < *(int *)(param_1 + 0x10); local_14 = local_14 + 1) {
    if (*(int *)(*(long *)(param_1 + 0x20) + (long)local_14 * 8) < 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)local_14 * 8) = param_2;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)local_14 * 8 + 4) = param_3;
      return local_14;
    }
  }
  if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x10)) {
    lVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x14) << 4);
    if (lVar2 == 0) {
      return -1;
    }
    *(long *)(param_1 + 0x20) = lVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) * 2;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x10) * 8) = param_2;
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8 + 4) = param_3;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  return *(int *)(param_1 + 0x10) + -1;
}

