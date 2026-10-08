
undefined1 FUN_100a37db0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long local_98;
  undefined **local_90 [3];
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("onApplicationStarted",0x14);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c6b0(local_60,&local_68,param_1,&local_78);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a37e31;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a37e31:
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_90,0x53);
  local_90[0] = &PTR_FUN_10226c710;
  uVar2 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar2,local_60,local_90,4);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_98,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"1onVmAdded(GUI::VmId)",0);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  puVar4 = operator_new(0x10,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = 0;
    FUN_100df99c0("SIATOOL","SIAToolClient",0,"Can\'t create an instance of CSIALogicImpl");
  }
  else {
    FUN_100a43190(puVar4);
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    pvVar5 = operator_new(0x20,(nothrow_t *)PTR_nothrow_1021e1620);
    pvVar3 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      FUN_100a344e0(pvVar5);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      pvVar3 = pvVar5;
    }
    lVar6 = (long)pvVar3 + 0x10;
    if (pvVar3 == (void *)0x0) {
      lVar6 = 0;
    }
    *(long *)(param_1 + 0x18) = lVar6;
    if (puVar4 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)*puVar4)(puVar4);
    }
  }
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_90);
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_21 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  return uVar1;
}

