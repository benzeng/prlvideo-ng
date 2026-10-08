
undefined8 FUN_1002c0120(QObject *param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  QStringList *pQVar5;
  QArrayData *local_58;
  ExternalRefCountData *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40 [2];
  
  if (((byte)param_1[0xc0] & 2) != 0) {
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  QTimer::singleShot(60000,param_1,"1onNotificationTimeout()");
  puVar4 = operator_new(0x38);
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 5) = 0x80000000;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 6) = 1;
  iVar3 = CMessageManager::instance();
  pQVar5 = (QStringList *)0x0;
  if (((*(long *)(param_1 + 0xb0) != 0) &&
      (pQVar5 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0xb0) + 4) != 0)) &&
     (pQVar5 = (QStringList *)0x0, *(long *)(param_1 + 0xb8) != 0)) {
    pQVar5 = (QStringList *)CContentArea::window();
  }
  puVar2 = PTR_shared_null_1021e15e8;
  local_40[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  EnumUtils::OsVerToString((uint)&local_48);
  FUN_1000341d0(local_40,&local_48);
  local_50 = (ExternalRefCountData *)puVar2;
  EnumUtils::OsVerToString((uint)&local_58);
  FUN_1000341d0(&local_50,&local_58);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3c5e,pQVar5,(QStringList *)&local_40[0].field0,
             (CSlotInfo *)&local_50,SUB81(puVar4,0));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_40[1]._7_1_ = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002c027d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002c027d:
  FUN_100039a80(&local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_40[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002c02b6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c02b6:
  FUN_100039a80(local_40);
  QVariant::~QVariant((QVariant *)(puVar4 + 4));
  piVar1 = (int *)*puVar4;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_40[1]._7_1_ = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && ((void *)*puVar4 != (void *)0x0)) {
      operator_delete((void *)*puVar4);
    }
  }
  operator_delete(puVar4);
  return 0;
}

