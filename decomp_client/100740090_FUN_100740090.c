
QString * FUN_100740090(QString *param_1,undefined8 param_2,QVariant *param_3,QString *param_4)

{
  undefined *puVar1;
  Data_conflict local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QString local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QString local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  QVariant local_80;
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QString local_40;
  undefined *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_38 = PTR_shared_null_1021e1288;
  FUN_1002f6180(param_1,&local_38);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007400f2;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1007400f2:
  QString::operator=(param_1,param_4);
  local_58 = (QArrayData *)QString::fromAscii_helper("OrderTotal",10);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_50,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10074017f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10074017f:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007401c1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007401c1:
  local_88 = (QArrayData *)QString::fromAscii_helper("OrderDate",9);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  QSettings::value((QString *)&local_80,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 1,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10074024c;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10074024c:
  QVariant::~QVariant(&local_80);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100740291;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100740291:
  local_b8 = (QArrayData *)QString::fromAscii_helper("OrderDownloaderUrl",0x12);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  QSettings::value((QString *)&local_b0,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 3,&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_29 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100740334;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100740334:
  QVariant::~QVariant(&local_b0);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100740382;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100740382:
  local_e8 = (QArrayData *)QString::fromAscii_helper("OrderReferenceId",0x10);
  local_f0 = 0x80000000;
  local_f8.field7 = 0;
  QSettings::value((QString *)&local_e0,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 4,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_29 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100740425;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100740425:
  QVariant::~QVariant(&local_e0);
  QVariant::~QVariant((QVariant *)&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return param_1;
}

