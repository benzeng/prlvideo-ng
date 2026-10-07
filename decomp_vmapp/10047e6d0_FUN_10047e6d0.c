
void FUN_10047e6d0(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int *local_38;
  int *local_30;
  int *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  *(undefined1 *)(param_1 + 0x22) = 0;
  FUN_1004963b0(&local_38,param_1 + 0x30);
  lVar4 = (long)local_38[2];
  local_30 = local_38 + lVar4 * 2 + 4;
  iVar1 = local_38[3];
  local_28 = local_38 + (long)iVar1 * 2 + 4;
  if (local_38[2] != iVar1) {
    lVar3 = (long)iVar1 * 8 + lVar4 * -8;
    piVar2 = local_38 + lVar4 * 2 + 6;
    do {
      local_30 = piVar2;
      *(undefined8 *)(*(long *)(**(long **)(local_30 + -2) + 0x10) + 0x70) = 0;
      lVar3 = lVar3 + -8;
      piVar2 = local_30 + 2;
    } while (lVar3 != 0);
  }
  local_20 = 1;
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      local_11 = *local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10047e782;
    }
    FUN_100069b10(&local_38,local_38);
  }
LAB_10047e782:
  FUN_100495c00(param_1 + 0x30);
  return;
}

