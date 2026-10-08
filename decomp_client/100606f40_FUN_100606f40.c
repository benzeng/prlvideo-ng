
void FUN_100606f40(QObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auVar7 [16];
  QArrayData *local_c0;
  QUrl local_b8 [8];
  QString local_b0;
  undefined **local_a8 [3];
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f5090;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  puVar1 = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x20) = puVar1;
  *(undefined **)(param_1 + 0x28) = puVar1;
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined **)(param_1 + 0x38) = puVar1;
  *(undefined **)(param_1 + 0x40) = puVar1;
  auVar7._8_4_ = (int)puVar1;
  auVar7._0_8_ = puVar1;
  auVar7._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar7;
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar7;
  *(undefined **)(param_1 + 0x68) = puVar1;
  *(undefined2 *)(param_1 + 0x70) = 0;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_38,DAT_1023108e0,"2serverStateChanged(const QString&, GUI::ServerState)",
                   param_1,"1onAfterServerStateChanged(const QString&, GUI::ServerState)",0);
  if (local_38 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar4 = FUN_100152280();
  QObject::connect(&local_40,uVar4,"2beforeServerRemoved(CServerWrap&)",param_1,
                   "1onBeforeServerRemoved(CServerWrap&)",0);
  if ((cVar2 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  local_80 = (QArrayData *)QString::fromAscii_helper("1onApplicationStartFinished()",0x1d);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006070f3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006070f3:
  uVar4 = CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_a8,0x53);
  local_a8[0] = &PTR_FUN_10226c710;
  CTaskManager::addTaskWatcher(uVar4,local_78,local_a8,4);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_a8);
  puVar1 = PTR_s_buyproduct__102274830;
  iVar6 = -1;
  if (PTR_s_buyproduct__102274830 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_buyproduct__102274830);
    iVar6 = (int)sVar5;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QUrl::QUrl(local_b8,&local_c0,0);
  QUrl::scheme();
  QDesktopServices::setUrlHandler(&local_b0,param_1,"onBuyProduct");
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006071dd;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1006071dd:
  QUrl::~QUrl(local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060721f;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10060721f:
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  return;
}

