
void FUN_100350b10(long param_1,undefined4 param_2)

{
  QArrayData *pQVar1;
  CVmConfiguration *pCVar2;
  void *pvVar3;
  long local_188;
  undefined4 local_180;
  undefined4 local_17c;
  Data *local_178;
  CVmConfiguration local_170 [248];
  QVariant local_78;
  QString local_68;
  QString local_60;
  Data_conflict local_58;
  QString local_50 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Travel",6);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350bb7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100350bb7:
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_21 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1dec7b6);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350c22;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100350c22:
  local_58.field15 = (QObject *)local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1dec7bd);
  QString::append((QString *)&local_58);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350c8d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100350c8d:
  QVariant::QVariant(&local_78,1);
  QSettings::setValue(local_50,(QVariant *)&local_58);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_21 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350ce5;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_100350ce5:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350d15;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100350d15:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350d45;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100350d45:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350d72;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100350d72:
  QSettings::~QSettings((QSettings *)local_50);
  pCVar2 = (CVmConfiguration *)FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::CVmConfiguration(local_170,pCVar2);
  local_178 = (Data *)PTR_shared_null_1021e15e8;
  local_17c = 4;
  FUN_100129840(&local_178,&local_17c);
  local_180 = 5;
  FUN_100129840(&local_178,&local_180);
  FUN_10034f670(param_1,local_170);
  pvVar3 = operator_new(600);
  FUN_100210650(pvVar3,local_170,*(undefined8 *)(param_1 + 0x10),&local_178,0);
  QObject::connect(&local_188,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onConfigApplyEnable(PRL_RESULT)",0);
  if (local_188 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_188);
  CAbstractTask::execute();
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_21 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100350e8d;
    }
    QListData::dispose(local_178);
  }
LAB_100350e8d:
  CVmConfiguration::~CVmConfiguration(local_170);
  return;
}

