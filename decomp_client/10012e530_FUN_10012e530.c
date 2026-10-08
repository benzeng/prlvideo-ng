
undefined4
FUN_10012e530(int param_1,undefined8 param_2,QString *param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  iVar2 = QComboBox::currentIndex();
  if ((iVar2 == -1) && (iVar2 = QComboBox::count(), iVar2 == 0)) {
    return 4;
  }
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_48,param_1);
  iVar2 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QComboBox::itemData((int)&local_60,param_1);
  QVariant::toString();
  QVariant::~QVariant(&local_60);
  QComboBox::itemData((int)&local_70,param_1);
  uVar3 = QVariant::toInt((bool *)&local_70);
  QVariant::~QVariant(&local_70);
  if ((param_4 != 0) && (*(int *)(local_50 + 4) != 0)) {
    uVar5 = CVmConfiguration::getVmHardwareList();
    lVar6 = FUN_10012cb20(&local_50,uVar5,param_5,0);
    if (lVar6 != 0) {
      QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_This_device_is_already_included_i_10226eaf8);
      uVar4 = CVmDevice::getIndex();
      FUN_10012e180(&local_88,uVar3,uVar4);
      QString::arg(&local_78,&local_80,&local_88,0,0x20);
      QString::operator=(param_3,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012e6ec;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_10012e6ec:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012e71c;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10012e71c:
      uVar3 = 3;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012e998;
        }
        QArrayData::deallocate(local_80,2,8);
      }
      goto LAB_10012e998;
    }
  }
  if (iVar2 != 1) {
    QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_This_device_is_not_reserved_for_v_10226eb08);
    QString::operator=(param_3,&local_b0);
    uVar3 = 1;
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10012e998;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
    goto LAB_10012e998;
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_4 != 0) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    QString::operator=(&local_90,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10012e7dc;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
  }
LAB_10012e7dc:
  cVar1 = FUN_10012dfb0(&local_50,param_2,&local_90);
  if (cVar1 == '\0') {
    QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Assigning_a_device_directly_to_t_10226ea28);
    QString::operator=(param_3,&local_a8);
    uVar3 = 0;
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10012e962;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      uVar3 = 0;
    }
  }
  else {
    QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Please_note_that_this_device_is_a_10226eb00);
    QString::operator=(param_3,&local_a0);
    uVar3 = 2;
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10012e962;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
  }
LAB_10012e962:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012e998;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10012e998:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return uVar3;
}

