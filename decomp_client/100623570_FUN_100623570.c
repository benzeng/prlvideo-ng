
QString * FUN_100623570(QString *param_1)

{
  char cVar1;
  char cVar2;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QLocale local_50 [8];
  QString local_48;
  QString local_40;
  QLocale local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QLocale::QLocale(local_38);
  QLocale::name();
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ja_JP",5);
  cVar1 = operator==(&local_30,&local_40);
  cVar2 = '\x01';
  if (cVar1 == '\0') {
    QLocale::QLocale(local_50);
    QLocale::name();
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("de_DE",5);
    cVar2 = operator==(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100623639;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100623639:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100623669;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100623669:
    QLocale::~QLocale(local_50);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006236a2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006236a2:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006236d2;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006236d2:
  QLocale::~QLocale(local_38);
  if (cVar2 == '\0') {
    local_98 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
    QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,0x1dd8705);
    QString::arg(&local_90,&local_98,&local_a0,0,0x20);
    FUN_1001c72b0(&local_a8);
    QString::arg(&local_88,&local_90,&local_a8,0,0x20);
    QString::operator=(param_1,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_21 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10062391e;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_10062391e:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100623954;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100623954:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10062398a;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10062398a:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006239c0;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1006239c0:
    if (*(int *)local_98 == -1) {
      return param_1;
    }
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
    return param_1;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  FUN_1001c72b0(&local_78);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1e08345);
  QString::arg(&local_60,&local_68,&local_80,0,0x20);
  QString::operator=(param_1,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062378e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10062378e:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006237be;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006237be:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006237ee;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006237ee:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062381e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10062381e:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return param_1;
}

