
void FUN_1003303a0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  QArrayData *local_c0;
  CTaskGenericId local_b8 [24];
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  FUN_1003332c0("ProcessSerialNumber",0,0);
  FUN_100333390("UIEMU_DICTIONARY_INFO",0,0);
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x20),
                   "2coherenceToolAvailabilityChanged( bool )",param_1,
                   "1onCoherenceToolAvailabilityChanged( bool )",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(param_1 + 0x20),"2coherenceStarted()",
                     param_1,"1onCoherenceStarted()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_10033051e:
    cVar1 = '\0';
    QObject::connect(&local_40,uVar3,"2coherenceStopped( bool, unsigned int )",param_1,
                     "1onCoherenceStopped( bool, unsigned int )",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x20),"2coherenceStarted()",param_1,
                     "1onCoherenceStarted()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10033051e;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar1 = '\0';
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x20),
                     "2coherenceStopped( bool, unsigned int )",param_1,
                     "1onCoherenceStopped( bool, unsigned int )",0);
    if (cVar2 != '\0') {
      if (local_40 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319cd0(uVar3);
  QObject::connect(&local_48,uVar3,"2textInputAvailabilityChanged( bool )",param_1,
                   "1onTextInputAvailabilityChanged( bool )",0);
  if ((cVar1 == '\0') || (local_48 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,uVar3,
                     "2sigDictionaryInfoRecieved(ProcessSerialNumber, UIEMU_DICTIONARY_INFO)",
                     param_1,"1onDictionaryInfoRecieved(ProcessSerialNumber, UIEMU_DICTIONARY_INFO)"
                     ,0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,uVar3,
                     "2sigDictionaryInfoRecieved(ProcessSerialNumber, UIEMU_DICTIONARY_INFO)",
                     param_1,"1onDictionaryInfoRecieved(ProcessSerialNumber, UIEMU_DICTIONARY_INFO)"
                     ,0);
    if ((cVar1 != '\0') && (local_50 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  local_90 = (QArrayData *)QString::fromAscii_helper("onSwitchTaskFinished",0x14);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c6b0(local_88,&local_90,param_1,&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100330695;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100330695:
  uVar4 = CTaskManager::instance();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319390(uVar3);
  FUN_100188480(&local_c0,uVar3);
  FUN_100033dd0(local_b8,&local_c0);
  CTaskManager::addTaskWatcher(uVar4,local_88,local_b8,0x24);
  CTaskGenericId::~CTaskGenericId(local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100330735;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100330735:
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2switchToCoherenceComplete(const GUI::VmId&)",
                "2switchToCoherenceComplete(const GUI::VmId&)",0);
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_21 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  return;
}

