
undefined8 FUN_1002cceb0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
  }
  lVar4 = FUN_10015a340(uVar8);
  plVar5 = (long *)FUN_1002ccce0(*(undefined8 *)(lVar4 + 0x180),param_1 + 0x18);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  lVar4 = param_1 + 0x20;
  lVar6 = param_1 + 0x28;
  if (iVar2 != 1) {
    lVar6 = lVar4;
  }
  lVar6 = FUN_10015cb20(uVar8,lVar6);
  if (lVar6 == 0) {
    return 0x80000009;
  }
  lVar6 = FUN_10018f120(lVar6,0xf,0);
  if (plVar5 == (long *)0x0) {
    return 0x80000009;
  }
  if (lVar6 == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
  }
  lVar7 = FUN_10015cb20(uVar8,lVar4);
  if (lVar7 != 0) {
    (**(code **)(*plVar5 + 0xb8))(&local_40,plVar5);
    (**(code **)(*plVar5 + 0xa8))(&local_48,plVar5);
    FUN_1001b3d20(lVar7,&local_40,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002ccff1;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002ccff1:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002cd021;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1002cd021:
  (**(code **)(*plVar5 + 0xb8))(&local_50,plVar5);
  (**(code **)(*plVar5 + 0xa8))(&local_58,plVar5);
  uVar1 = FUN_1001b3b80(plVar5,lVar4);
  uVar3 = CHwUsbDevice::getUsbType();
  FUN_100147a20(lVar6,&local_50,&local_58,0,0,uVar1,uVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cd0a5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002cd0a5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002cd0d5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002cd0d5:
  QTimer::start();
  return 0;
}

