
void FUN_1004ca3c0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **local_a0 [3];
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  long local_38;
  long local_30;
  undefined1 local_21;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
  uVar2 = FUN_10044b340();
  uVar2 = FUN_1003b0b00(uVar2);
  QObject::connect(&local_30,uVar3,"2clicked()",uVar2,"1editSmartGuardSettings()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_38,uVar3,"2clicked()",uVar2,"1manageAcronisTrueImage()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_38,uVar3,"2clicked()",uVar2,"1manageAcronisTrueImage()",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  local_78 = (QArrayData *)QString::fromAscii_helper("updatePageUI",0xc);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  FUN_100a1c6b0(local_70,&local_78,param_1,&local_88);
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004ca53f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004ca53f:
  uVar3 = CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_a0,0x86);
  local_a0[0] = &PTR_FUN_102272dc0;
  CTaskManager::addTaskWatcher(uVar3,local_70,local_a0,0x24);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_a0);
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_21 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  return;
}

