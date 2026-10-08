
void FUN_10043e9e0(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  QString *pQVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  cVar5 = CVmAutoprotect::isEnabled();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  iVar6 = CVmAutoprotect::getSchema();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  uVar7 = CVmAutoprotect::getTotalSnapshots();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  uVar8 = CVmAutoprotect::getPeriod();
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0));
  QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78),0));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoprotect();
  CVmAutoprotect::isNotifyBeforeCreation();
  QAbstractButton::setChecked(SUB81(uVar1,0));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78),0));
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  bVar4 = true;
  if (iVar6 == 1) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Auto_10226ec58);
    QString::operator=(&local_40,&local_48);
    bVar4 = false;
    if (*(int *)local_48.field0_0x0 != -1) {
      bVar4 = false;
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043eb97;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10043eb97:
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0));
  QAbstractSpinBox::setSpecialValueText(*(QString **)(*(long *)(param_1 + 0x60) + 0x28));
  QSpinBox::setMinimum((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28));
  iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
  if (bVar4) {
    QSpinBox::setValue(iVar6);
  }
  else {
    QSpinBox::setValue(iVar6);
  }
  pcVar2 = *(char **)(*(long *)(param_1 + 0x60) + 0x28);
  QVariant::QVariant(&local_58,uVar8 / 0xe10);
  QObject::setProperty(pcVar2,(QVariant *)"RealValue");
  QVariant::~QVariant(&local_58);
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),0));
  QAbstractSpinBox::setSpecialValueText(*(QString **)(*(long *)(param_1 + 0x60) + 0x38));
  QSpinBox::setMinimum((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38));
  iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38);
  if (bVar4) {
    QSpinBox::setValue(iVar6);
  }
  else {
    QSpinBox::setValue(iVar6);
  }
  pcVar2 = *(char **)(*(long *)(param_1 + 0x60) + 0x38);
  QVariant::QVariant(&local_68,uVar7);
  QObject::setProperty(pcVar2,(QVariant *)"RealValue");
  QVariant::~QVariant(&local_68);
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),0));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),0));
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x28);
  if (uVar8 - 0xe10 < 0xe10) {
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1df483c);
  }
  else {
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1df4842);
  }
  QSpinBox::setSuffix(pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043edaa;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10043edaa:
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  uVar9 = CVmMemory::getRamSize();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  uVar10 = CVmVideo::getMemorySize();
  if (cVar5 == '\0') {
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_At_least__1_of_free_space_is_nee_10226eb30);
  }
  else {
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_You_need_to_have_at_least__1_of_f_10226eb28);
  }
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x40);
  FUN_100def650(&local_88,((ulong)uVar10 + (ulong)uVar9) * (ulong)uVar7 * 0x100000,1);
  QString::arg(&local_80,&local_78,&local_88,0,0x20);
  QLabel::setText(pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043eeb6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10043eeb6:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043eee6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10043eee6:
  uVar9 = uVar7 / 3;
  if (uVar7 % 3 != 0) {
    if (uVar7 % 3 == 1) {
      uVar9 = uVar7 / 3 + 1;
    }
    else {
      uVar9 = uVar7 / 3 + 2;
    }
  }
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x58);
  uVar7 = uVar7 / 3;
  if (uVar8 < 0x15180) {
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_latest_hourly_snapshots_10226eb40);
    QString::arg(&local_90,&local_98,(long)(int)uVar9,0,10,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043efbc;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10043efbc:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043eff2;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10043eff2:
    pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x60);
    QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_latest_daily_snapshots_10226eb48);
    QString::arg(&local_a0,&local_a8,uVar7,0,10,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f08b;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10043f08b:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f0c1;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_10043f0c1:
    pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x68);
    QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_latest_weekly_snapshots_10226eb50);
    QString::arg(&local_b0,&local_b8,uVar7,0,10,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f157;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10043f157:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f3f9;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_latest_daily_snapshots_10226eb48);
    QString::arg(&local_c0,&local_c8,(long)(int)uVar9,0,10,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f228;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_10043f228:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f25e;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10043f25e:
    pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x60);
    QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_latest_weekly_snapshots_10226eb50);
    QString::arg(&local_d0,&local_d8,uVar7,0,10,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f2f7;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_10043f2f7:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f32d;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10043f32d:
    pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x68);
    QMetaObject::tr((char *)&local_e8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_latest_monthly_snapshots_10226eb58);
    QString::arg(&local_e0,&local_e8,uVar7,0,10,0x20);
    QLabel::setText(pQVar3);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f3c3;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_10043f3c3:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043f3f9;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
  }
LAB_10043f3f9:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043f429;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10043f429:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

