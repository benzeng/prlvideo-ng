
undefined8 FUN_1002191c0(long param_1)

{
  QString *pQVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined1 local_e8 [48];
  undefined1 local_b8 [16];
  CTaskGenericId local_a8 [24];
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pvVar2 = operator_new(0x48);
  FUN_1001ee780(pvVar2,param_1);
  *(void **)(param_1 + 0x170) = pvVar2;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001ee7c0(pvVar2,uVar3);
  pQVar1 = *(QString **)(param_1 + 0x170);
  uVar3 = 0;
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1ddc4bc);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(&local_40,uVar3);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  CAbstractProgressOperation::setName(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002192af;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002192af:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002192df;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002192df:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10021930f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10021930f:
  local_80 = (QArrayData *)QString::fromAscii_helper("1onOsImageDownloadFinished()",0x1c);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100219389;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100219389:
  uVar3 = CTaskManager::instance();
  COsInstallationInfo::osImageDownloadInfo();
  FUN_1001b8b80(local_a8,local_b8,1);
  CTaskManager::addTaskWatcher(uVar3,local_78,local_a8,0x24);
  CTaskGenericId::~CTaskGenericId(local_a8);
  FUN_1001b8c60(local_e8);
  CAbstractTask::setWaitForSubTaskCompletion();
  if (*(char *)(param_1 + 0x168) == '\0') {
    FUN_100810df0(param_1);
    QTimer::singleShot(1000,*(QObject **)(param_1 + 0x170),"1start()");
  }
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_21 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  return 0;
}

