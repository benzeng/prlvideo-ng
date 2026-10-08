
void FUN_1006edb30(QObject *param_1,undefined8 param_2,undefined8 *param_3,uint *param_4,
                  QObject *param_5)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  void *pvVar4;
  QTimer *pQVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  undefined *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_1021f58c0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar4 = operator_new(0x10);
  FUN_10073fe30(pvVar4,param_1);
  *(void **)(param_1 + 0x18) = pvVar4;
  auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar8._0_8_ = PTR_shared_null_1021e1288;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x78) = auVar8;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x88) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[1];
  *(int **)(param_1 + 0x90) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x98) = param_3[2];
  piVar1 = (int *)param_3[3];
  *(int **)(param_1 + 0xa0) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[4];
  *(int **)(param_1 + 0xa8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[5];
  *(int **)(param_1 + 0xb0) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[6];
  *(int **)(param_1 + 0xb8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[7];
  *(int **)(param_1 + 0xc0) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 200) = param_3[8];
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1 + 0xd0,&local_50);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006edcc6;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1006edcc6:
  *(undefined4 *)(param_1 + 0x150) = 0;
  param_1[0x154] = (QObject)0x0;
  pQVar5 = operator_new(0x20);
  QTimer::QTimer(pQVar5,param_1);
  *(QTimer **)(param_1 + 0x158) = pQVar5;
  pQVar5 = operator_new(0x20);
  QTimer::QTimer(pQVar5,param_1);
  *(QTimer **)(param_1 + 0x160) = pQVar5;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
  *(byte *)(*(long *)(param_1 + 0x158) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x158) + 0x1c) | 1;
  *(byte *)(*(long *)(param_1 + 0x160) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x160) + 0x1c) | 1;
  uVar7 = 0x302;
  if (0x301 < (int)*param_4) {
    uVar7 = (ulong)*param_4;
  }
  uVar6 = 0x21200000000;
  if (0x211 < (int)param_4[1]) {
    uVar6 = (ulong)param_4[1] << 0x20;
  }
  *(ulong *)(param_1 + 0x168) = uVar6 | uVar7;
  QDialog::setResult((int)param_2);
  QString::fromUtf8_helper((char *)&local_48,0x1ddf8a8);
  QString::operator=((QString *)(param_1 + 0xd0),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006eddce;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006eddce:
  QString::fromUtf8_helper((char *)&local_40,0x1de6d6a);
  QString::operator=((QString *)(param_1 + 0xe0),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ede23;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006ede23:
  QString::operator=((QString *)(param_1 + 0x100),(QString *)(param_1 + 0x90));
  QMetaObject::tr((char *)&local_60,"",0x1de6d76);
  CProductUpdateInfo::getMajorVersion();
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  QString::operator=((QString *)(param_1 + 0xd8),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006edebe;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006edebe:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006edeee;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006edeee:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006edf1e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006edf1e:
  QString::operator=((QString *)(param_1 + 0x108),(QString *)(param_1 + 0xb0));
  QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x18),
                   "2purchaseResultReceived(int, QString, QString, QString, QString)",param_1,
                   "1onPurchaseResultReceived(int, QString, QString, QString, QString)",0);
  if (local_70 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  QObject::connect(&local_78,param_1,"2stateChanged(State)",param_1,"1update()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_78 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,param_1,"2busyChanged(bool)",param_1,"1update()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_80 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x158),"2timeout()",param_1,
                   "1onConnectionTimeout()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_88 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  QObject::connect(&local_90,*(undefined8 *)(param_1 + 0x160),"2timeout()",param_1,
                   "1onPurchaseCompletionTimeout()",0);
  if ((cVar3 != '\0') && (local_90 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  return;
}

