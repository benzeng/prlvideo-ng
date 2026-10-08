
undefined8 FUN_1002ccaf0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  lVar2 = FUN_10015a340(uVar4);
  plVar3 = (long *)FUN_1002ccce0(*(undefined8 *)(lVar2 + 0x180),param_1 + 0x18);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  iVar1 = CAbstractTask::getCurrentSubTask();
  lVar2 = param_1 + 0x20;
  if (iVar1 == 1) {
    lVar2 = param_1 + 0x28;
  }
  lVar2 = FUN_10015cb20(uVar4,lVar2);
  if (lVar2 == 0) {
    return 0x80000009;
  }
  lVar2 = FUN_10018f120(lVar2,0xf,0);
  if (plVar3 == (long *)0x0) {
    return 0x80000009;
  }
  if (lVar2 == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  (**(code **)(*plVar3 + 0xb8))(&local_38,plVar3);
  (**(code **)(*plVar3 + 0xa8))(&local_40,plVar3);
  FUN_100147a20(lVar2,&local_38,&local_40,0,0,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ccc1d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002ccc1d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ccc4d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ccc4d:
  QTimer::start();
  return 0;
}

