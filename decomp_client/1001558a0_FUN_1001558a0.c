
undefined1 FUN_1001558a0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  uint *local_38;
  uint *local_30;
  uint *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  FUN_100062ec0(&local_38,param_1 + 0x10);
  local_30 = local_38 + (long)(int)local_38[2] * 2 + 4;
  local_28 = local_38 + (long)(int)local_38[3] * 2 + 4;
  if (local_38[2] != local_38[3]) {
    do {
      local_20 = 1;
      lVar1 = **(long **)local_30;
      lVar4 = 0;
      if ((lVar1 != 0) && (lVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar4 = (*(long **)local_30)[1];
      }
      iVar2 = FUN_10015a6e0(lVar4);
      uVar3 = 1;
      if (iVar2 == 0) goto LAB_100155925;
      local_30 = local_30 + 2;
    } while (local_30 != local_28);
  }
  local_20 = 1;
  uVar3 = 0;
LAB_100155925:
  if (*local_38 != 0xffffffff) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 - 1;
      UNLOCK();
      if (*local_38 != 0) {
        return uVar3;
      }
      local_11 = 0;
    }
    FUN_100063050(&local_38,local_38);
  }
  return uVar3;
}

