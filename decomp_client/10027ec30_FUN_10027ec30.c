
undefined8 FUN_10027ec30(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  int *local_48;
  int *local_40;
  long *local_38;
  long *local_30;
  int local_28;
  undefined1 local_19;
  
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_48);
  FUN_100033e80(&local_40,&local_48);
  local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
  local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
  local_28 = 1;
  if (*local_48 == -1) {
LAB_10027ece3:
    for (; local_38 != local_30; local_38 = local_38 + 1) {
      lVar1 = *(long *)*local_38;
      plVar3 = (long *)0x0;
      if ((lVar1 != 0) && (plVar3 = (long *)0x0, *(int *)(lVar1 + 4) != 0)) {
        plVar3 = (long *)((long *)*local_38)[1];
      }
      cVar2 = CAbstractTask::canBeTerminated();
      if (cVar2 != '\0') {
        (**(code **)(*plVar3 + 0x78))(plVar3,0x80000275);
      }
      local_28 = 1;
    }
  }
  else {
    if (*local_48 == 0) {
LAB_10027eca9:
      FUN_100034010(&local_48,local_48);
    }
    else {
      LOCK();
      *local_48 = *local_48 + -1;
      local_19 = *local_48 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_10027eca9;
    }
    if (local_28 != 0) goto LAB_10027ece3;
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_19 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027ed88;
    }
    FUN_100034010(&local_40,local_40);
  }
LAB_10027ed88:
  cVar2 = FUN_10027edf0(param_1);
  if (cVar2 != '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return 0;
}

