
void FUN_1007ac340(long *param_1)

{
  char cVar1;
  undefined8 local_128;
  QVariant local_120;
  QArrayData *local_110;
  QString local_108;
  Data_conflict local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QString local_e0;
  Data_conflict local_d8;
  undefined1 local_d0 [48];
  undefined1 local_a0 [32];
  QArrayData *local_80;
  QString local_58;
  undefined4 local_50;
  undefined4 local_4c;
  QString local_48 [2];
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
  local_4c = 0;
  local_50 = 0;
  cVar1 = FUN_1007a7bb0(param_1[0x20],&local_4c,&local_50);
  if (cVar1 == '\0') goto LAB_1007ac7ae;
  FUN_1007a7870(local_d0,param_1[0x20],local_4c,local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_11 = *(int *)local_80 != 0;
    UNLOCK();
  }
  FUN_1007a1cf0(local_a0);
  (**(code **)(*param_1 + 0x1e0))(&local_e8,param_1);
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e8;
  if (1 < *(int *)local_e8 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_11 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_e0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac44c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007ac44c:
  local_d8.field15 = (QObject *)local_e0.field0_0x0;
  if (1 < *(int *)local_e0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
    local_11 = *(int *)local_e0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e17bde);
  QString::append((QString *)&local_d8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac4c0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007ac4c0:
  QVariant::QVariant(&local_f8,&local_58);
  QSettings::setValue(local_48,(QVariant *)&local_d8);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_d8.field15 != -1) {
    if (*(int *)local_d8.field15 != 0) {
      LOCK();
      *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
      local_11 = *(int *)local_d8.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac529;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
  }
LAB_1007ac529:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_11 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac55f;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1007ac55f:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_11 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac595;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1007ac595:
  (**(code **)(*param_1 + 0x1e0))(&local_110,param_1);
  local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_110;
  if (1 < *(int *)local_110 + 1U) {
    LOCK();
    *(int *)local_110 = *(int *)local_110 + 1;
    local_11 = *(int *)local_110 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1e2468c);
  QString::append(&local_108);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac61f;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007ac61f:
  local_100.field15 = (QObject *)local_108.field0_0x0;
  if (1 < *(int *)local_108.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
    local_11 = *(int *)local_108.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1e17beb);
  QString::append((QString *)&local_100);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac693;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1007ac693:
  local_128 = CMacScrollArea::scrollPosition();
  QVariant::QVariant(&local_120,(QPoint *)&local_128);
  QSettings::setValue(local_48,(QVariant *)&local_100);
  QVariant::~QVariant(&local_120);
  if (*(int *)local_100.field15 != -1) {
    if (*(int *)local_100.field15 != 0) {
      LOCK();
      *(int *)local_100.field15 = *(int *)local_100.field15 + -1;
      local_11 = *(int *)local_100.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac712;
    }
    QArrayData::deallocate((QArrayData *)local_100.field15,2,8);
  }
LAB_1007ac712:
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_11 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac748;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_1007ac748:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_11 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac77e;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1007ac77e:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_11 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac7ae;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007ac7ae:
  QSettings::~QSettings((QSettings *)local_48);
  return;
}

