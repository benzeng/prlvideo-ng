
bool FUN_100030d30(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  int *local_48;
  long *local_40;
  long *local_38;
  undefined4 local_30;
  uint *local_28;
  undefined1 local_19;
  
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_28);
  if (local_28[3] == local_28[2]) {
    bVar5 = false;
    goto LAB_100030e2d;
  }
  FUN_100033e80(&local_48,&local_28);
  local_40 = (long *)(local_48 + (long)local_48[2] * 2 + 4);
  local_38 = (long *)(local_48 + (long)local_48[3] * 2 + 4);
  if (local_48[2] != local_48[3]) {
    iVar4 = 1;
    do {
      local_30 = 1;
      lVar1 = *(long *)*local_40;
      lVar3 = 0;
      if ((lVar1 != 0) && (lVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar3 = ((long *)*local_40)[1];
      }
      iVar2 = FUN_1002308e0(lVar3);
      if ((iVar2 == 2) || (iVar2 = FUN_1002308f0(lVar3), iVar2 == 2)) goto LAB_100030df8;
      local_40 = local_40 + 1;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  iVar4 = 2;
LAB_100030df8:
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_19 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100030e22;
    }
    FUN_100034010(&local_48,local_48);
  }
LAB_100030e22:
  bVar5 = iVar4 != 2;
LAB_100030e2d:
  if (*local_28 != 0xffffffff) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 - 1;
      UNLOCK();
      if (*local_28 != 0) {
        return bVar5;
      }
      local_19 = 0;
    }
    FUN_100034010(&local_28,local_28);
  }
  return bVar5;
}

