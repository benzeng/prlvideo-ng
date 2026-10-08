
void FUN_100773750(QObject *param_1,undefined8 *param_2,QObject *param_3)

{
  QObject *pQVar1;
  int *piVar2;
  QArrayData *pQVar3;
  char cVar4;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QString local_f8 [2];
  QArrayData *local_e8;
  QDateTime local_e0;
  QString local_d8;
  QVariant local_d0;
  QString local_c0;
  QString local_b8;
  Data_conflict local_b0;
  QString local_a8 [2];
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70 [2];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f6b10;
  piVar2 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_29 = *piVar2 != 0;
    UNLOCK();
  }
  pQVar1 = param_1 + 0x10;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  QSettings::QSettings((QSettings *)local_70,(QObject *)0x0);
  local_88.field0_0x0 = *(QTypedArrayData<unsigned_short> **)pQVar1;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1e2468c);
  QString::append(&local_88);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773816;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100773816:
  local_80.field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  local_78.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_29 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e16082);
  QString::append(&local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007738a6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007738a6:
  cVar4 = QSettings::contains(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007738e5;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1007738e5:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773915;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100773915:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773945;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100773945:
  QSettings::~QSettings((QSettings *)local_70);
  if (cVar4 == '\0') {
    local_98 = *(QArrayData **)(param_1 + 0x10);
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
    }
    QString::toUtf8();
    if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Initialize promo %s",
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773a12;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_100773a12:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773a48;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100773a48:
    QSettings::QSettings((QSettings *)local_a8,(QObject *)0x0);
    local_c0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)pQVar1;
    if (1 < *(int *)local_c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1e2468c);
    QString::append(&local_c0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773ac6;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100773ac6:
    local_b8.field0_0x0 = local_c0.field0_0x0;
    if (1 < *(int *)local_c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_b8);
    local_b0.field15 = (QObject *)local_b8.field0_0x0;
    if (1 < *(int *)local_b8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
      local_29 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e16082);
    QString::append((QString *)&local_b0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773b68;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100773b68:
    QDateTime::currentDateTime();
    local_e8 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_d8);
    QVariant::QVariant(&local_d0,&local_d8);
    QSettings::setValue(local_a8,(QVariant *)&local_b0);
    QVariant::~QVariant(&local_d0);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_29 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773c15;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100773c15:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773c4b;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100773c4b:
    QDateTime::~QDateTime(&local_e0);
    if (*(int *)local_b0.field15 != -1) {
      if (*(int *)local_b0.field15 != 0) {
        LOCK();
        *(int *)local_b0.field15 = *(int *)local_b0.field15 + -1;
        local_29 = *(int *)local_b0.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773c8d;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field15,2,8);
    }
LAB_100773c8d:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773cc3;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_100773cc3:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100773cf9;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100773cf9:
    QSettings::~QSettings((QSettings *)local_a8);
  }
  QSettings::QSettings((QSettings *)local_f8,(QObject *)0x0);
  local_110.field0_0x0 = *(QTypedArrayData<unsigned_short> **)pQVar1;
  if (1 < *(int *)local_110.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
    local_29 = *(int *)local_110.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_110);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773d83;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100773d83:
  local_108.field0_0x0 = local_110.field0_0x0;
  if (1 < *(int *)local_110.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
    local_29 = *(int *)local_110.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_108);
  local_100.field0_0x0 = local_108.field0_0x0;
  if (1 < *(int *)local_108.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
    local_29 = *(int *)local_108.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e160b4);
  QString::append(&local_100);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773e25;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100773e25:
  cVar4 = QSettings::contains(local_f8);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_29 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773e70;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100773e70:
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_29 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773ea6;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100773ea6:
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_29 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773edc;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100773edc:
  QSettings::~QSettings((QSettings *)local_f8);
  if (cVar4 != '\0') {
    return;
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_118) || (*(long *)(local_118 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_118,*(uint *)(local_118 + 4) + 1,*(uint *)(local_118 + 8) >> 0x1f);
  }
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Initialize last show time for promo %s",
                local_118 + *(long *)(local_118 + 0x10));
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773fac;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100773fac:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100773fe2;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100773fe2:
  FUN_100774880(param_1);
  return;
}

