
void FUN_1007cf850(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  QString local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QVariant local_e0;
  QString local_d0;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QString local_a8;
  QVariant local_a0;
  QString local_90;
  QString local_88;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_58 = (QArrayData *)QString::fromAscii_helper("%1/%2/",6);
  FUN_1007d2760(&local_60);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  local_68 = (QArrayData *)QString::fromAscii_helper("HID Host Hook",0xd);
  QString::arg(&local_48,&local_50,&local_68,0,0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf900;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007cf900:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf930;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007cf930:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf960;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007cf960:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf990;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007cf990:
  FUN_100a04400(&local_80);
  FUN_1007caa20(&local_88);
  QSettings::QSettings((QSettings *)&local_78,&local_80,&local_88,(QObject *)0x0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf9e5;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1007cf9e5:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cfa15;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1007cfa15:
  local_40 = PTR_shared_null_1021e15e8;
  FUN_1000e5fc0(param_2,&local_40);
  FUN_100039a80(&local_40);
  local_b0 = (QArrayData *)QString::fromAscii_helper("total",5);
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_a8);
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  QVariant::QVariant(&local_c0,&local_c8);
  QSettings::value((QString *)&local_a0,&local_78);
  QVariant::toString();
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cfb27;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1007cfb27:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cfb5d;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1007cfb5d:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cfb93;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1007cfb93:
  if (*(int *)(local_90.field0_0x0 + 4) != 0) {
    FUN_1000341d0(param_2,&local_90);
  }
  lVar1 = 0;
  do {
    local_f8 = (QArrayData *)QString::fromAscii_helper("last%1",6);
    QString::arg(&local_f0,&local_f8,lVar1,0,10,0x20);
    local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::append(&local_e8);
    local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    QVariant::QVariant(&local_108,&local_110);
    QSettings::value((QString *)&local_e0,&local_78);
    QVariant::toString();
    QString::operator=(&local_90,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007cfccd;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1007cfccd:
    QVariant::~QVariant(&local_e0);
    QVariant::~QVariant(&local_108);
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007cfd13;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
LAB_1007cfd13:
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_31 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007cfd49;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_1007cfd49:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007cfd7f;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1007cfd7f:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007cfdb5;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1007cfdb5:
    if (*(int *)(local_90.field0_0x0 + 4) != 0) {
      FUN_1000341d0(param_2,&local_90);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 < 0x14);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cfe18;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1007cfe18:
  QSettings::~QSettings((QSettings *)&local_78);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

