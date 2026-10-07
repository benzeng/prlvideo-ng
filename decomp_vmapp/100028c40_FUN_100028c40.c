
QString * FUN_100028c40(QString *param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  QArrayData *local_a8;
  QString local_a0;
  undefined8 local_98;
  undefined4 local_90;
  QArrayData *local_88;
  QString local_80 [2];
  QArrayData *local_70;
  QSettings local_68 [16];
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_3 != 1) {
    return param_1;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("SystemDrive",0xb);
  FUN_1007d7c60(&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100028cb8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100028cb8:
  if (*(uint *)(local_40 + 4) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"SystemDrive not set");
    }
    goto LAB_1000290da;
  }
  uVar1 = QDir::separator();
  local_58 = local_40;
  if (1 < *(uint *)local_40 + 1) {
    LOCK();
    *(uint *)local_40 = *(uint *)local_40 + 1;
    local_21 = *(uint *)local_40 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_40 + 4);
  if ((1 < *(uint *)local_40) || ((*(uint *)(local_40 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_58,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_58 + 4);
  }
  *(uint *)(local_58 + 4) = uVar2 + 1;
  *(undefined2 *)(local_58 + (long)(int)uVar2 * 2 + *(long *)(local_58 + 0x10)) = uVar1;
  *(undefined2 *)(local_58 + (long)(int)*(uint *)(local_58 + 4) * 2 + *(long *)(local_58 + 0x10)) =
       0;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(uint *)local_58 + 1) {
    LOCK();
    *(uint *)local_58 = *(uint *)local_58 + 1;
    local_21 = *(uint *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x9e1350);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100028da9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100028da9:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100028dd9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100028dd9:
  QSettings::QSettings(local_68,&local_50,1,0);
  local_88 = (QArrayData *)QString::fromAscii_helper("BaseVmPath",10);
  local_90 = 0x80000000;
  local_98 = 0;
  QSettings::value(local_80,(QVariant *)local_68);
  QVariant::toString();
  QVariant::~QVariant((QVariant *)local_80);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100028e81;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100028e81:
  if (*(uint *)(local_70 + 4) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"BaseVmPath not defined");
    }
  }
  else {
    uVar1 = QDir::separator();
    local_a8 = local_70;
    if (1 < *(uint *)local_70 + 1) {
      LOCK();
      *(uint *)local_70 = *(uint *)local_70 + 1;
      local_21 = *(uint *)local_70 != 0;
      UNLOCK();
    }
    uVar2 = *(uint *)(local_70 + 4);
    if ((1 < *(uint *)local_70) || ((*(uint *)(local_70 + 8) & 0x7fffffff) < uVar2 + 2)) {
      QString::reallocData((uint)&local_a8,SUB41(uVar2 + 2,0));
      uVar2 = *(uint *)(local_a8 + 4);
    }
    *(uint *)(local_a8 + 4) = uVar2 + 1;
    *(undefined2 *)(local_a8 + (long)(int)uVar2 * 2 + *(long *)(local_a8 + 0x10)) = uVar1;
    *(undefined2 *)(local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 2 + *(long *)(local_a8 + 0x10))
         = 0;
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
    if (1 < *(uint *)local_a8 + 1) {
      LOCK();
      *(uint *)local_a8 = *(uint *)local_a8 + 1;
      local_21 = *(uint *)local_a8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0x9e137d);
    QString::append(&local_a0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100028f8d;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100028f8d:
    QString::operator=(param_1,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_21 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100028fd2;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_100028fd2:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100029071;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
LAB_100029071:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000290a1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000290a1:
  QSettings::~QSettings(local_68);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000290da;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000290da:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

