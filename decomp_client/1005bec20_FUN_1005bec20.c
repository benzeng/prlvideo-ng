
bool FUN_1005bec20(void)

{
  uint uVar1;
  uint uVar2;
  uint *local_28;
  undefined1 local_19;
  
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_28);
  uVar1 = local_28[3];
  uVar2 = local_28[2];
  if (*local_28 != 0xffffffff) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 - 1;
      UNLOCK();
      if (*local_28 != 0) goto LAB_1005bec72;
      local_19 = 0;
    }
    FUN_100034010(&local_28,local_28);
  }
LAB_1005bec72:
  return uVar1 != uVar2;
}

