
uint FUN_1004d4380(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int *local_40;
  int *local_38;
  int *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  QMutex::lock();
  FUN_1004d6ff0(&local_40,param_1 + 8);
  lVar3 = (long)local_40[2];
  local_38 = local_40 + lVar3 * 2 + 4;
  iVar1 = local_40[3];
  local_30 = local_40 + (long)iVar1 * 2 + 4;
  uVar5 = 0;
  if (local_40[2] != iVar1) {
    lVar4 = (long)iVar1 * 8 + lVar3 * -8;
    uVar5 = 0;
    piVar2 = local_40 + lVar3 * 2 + 6;
    do {
      local_38 = piVar2;
      if (uVar5 < *(uint *)(**(long **)(local_38 + -2) + 0x58)) {
        uVar5 = *(uint *)(**(long **)(local_38 + -2) + 0x58);
      }
      lVar4 = lVar4 + -8;
      piVar2 = local_38 + 2;
    } while (lVar4 != 0);
  }
  local_28 = 1;
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_19 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004d443a;
    }
    FUN_1004d6ab0(&local_40,local_40);
  }
LAB_1004d443a:
  QMutex::unlock();
  return uVar5;
}

