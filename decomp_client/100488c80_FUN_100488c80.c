
void FUN_100488c80(long param_1)

{
  QObject *pQVar1;
  QString *pQVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 extraout_RDX;
  QArrayData *local_168;
  QArrayData *local_160;
  QVariant local_158;
  QArrayData *local_148;
  undefined8 local_140;
  QArrayData *local_138;
  undefined4 local_130 [2];
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  undefined8 local_108;
  QArrayData *local_100;
  undefined4 local_f8 [2];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QDateTime local_d0;
  QDateTime local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QDateTime local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar10 = FUN_10044e580();
  if (lVar10 != 0) {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x128);
    iVar8 = FUN_10044b4d0(param_1);
    uVar11 = FUN_10044e580(param_1);
    iVar9 = FUN_10015aae0(uVar11);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar1,iVar8,iVar9);
  }
  lVar10 = FUN_10044e460(param_1);
  if (lVar10 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar11 = FUN_10044e560(param_1);
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.VmEncryptionInfo.Enabled",0x21);
  FUN_1003e1800(&local_48,uVar11,&local_50,0);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100488d5a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100488d5a:
  uVar11 = FUN_10044e460(param_1);
  uVar11 = FUN_10018c2b0(uVar11);
  cVar5 = FUN_100112cc0(uVar11);
  uVar11 = FUN_10044e460(param_1);
  iVar8 = FUN_10018a9d0(uVar11);
  if (iVar8 == 0x30000001) {
LAB_100488da3:
    uVar11 = FUN_10044e460(param_1);
    iVar8 = FUN_10018d470(uVar11);
    if (iVar8 == 1 && cVar5 == '\0') {
      uVar11 = FUN_10044e460(param_1);
      FUN_10018ed10(uVar11);
    }
  }
  else {
    uVar11 = FUN_10044e460(param_1);
    iVar8 = FUN_10018a9d0(uVar11);
    if (iVar8 == 0x30000009) goto LAB_100488da3;
  }
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x38) + 0x70);
  if (cVar4 == '\0') {
    iVar8 = 0x1df7017;
  }
  else {
    iVar8 = 0x1df700b;
  }
  QMetaObject::tr((char *)&local_58,(char *)&PTR_PTR_102214ef0,iVar8);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100488e7f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100488e7f:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf8),0));
  uVar11 = FUN_10044e660(param_1);
  cVar5 = FUN_1003beed0(uVar11);
  if (cVar5 != '\0') {
    uVar11 = FUN_10044e560(param_1);
    local_70 = (QArrayData *)QString::fromAscii_helper("Settings.VmProtectionInfo.Enabled",0x21);
    FUN_1003e1800(&local_68,uVar11,&local_70,0);
    bVar6 = QVariant::toBool();
    QVariant::~QVariant(&local_68);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100488f4b;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100488f4b:
    uVar11 = FUN_10044e560(param_1);
    local_88 = (QArrayData *)
               QString::fromAscii_helper("Settings.VmProtectionInfo.ExpirationInfo.Enabled",0x30);
    FUN_1003e1800(&local_80,uVar11,&local_88,0);
    bVar7 = QVariant::toBool();
    QVariant::~QVariant(&local_80);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100488fc2;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100488fc2:
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0));
    pQVar2 = *(QString **)(*(long *)(param_1 + 0x38) + 0x18);
    if (((cVar4 == '\x01') && ((bVar7 ^ 1) == 0)) && ((bVar6 ^ 1) == 0)) {
      iVar8 = 0x1df7075;
    }
    else {
      iVar8 = 0x1df7084;
    }
    QMetaObject::tr((char *)&local_90,(char *)&PTR_PTR_102214ef0,iVar8);
    QAbstractButton::setText(pQVar2);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048907b;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10048907b:
    local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (cVar4 == '\0') {
      QMetaObject::tr((char *)&local_a0,(char *)&PTR_PTR_102214ef0,0x1df7090);
      QString::operator=(&local_98,&local_a0);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004895d1;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
    }
    else if ((bVar6 ^ 1) == 0 && (bVar7 ^ 1) == 0) {
      uVar11 = FUN_10044e560(param_1);
      local_c0 = (QArrayData *)
                 QString::fromAscii_helper
                           ("Settings.VmProtectionInfo.ExpirationInfo.ExpirationDate",0x37);
      FUN_1003e1800(&local_b8,uVar11,&local_c0,0);
      QVariant::toDateTime();
      QVariant::~QVariant(&local_b8);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10048912f;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_10048912f:
      QDateTime::currentDateTime();
      QDateTime::toTimeSpec(&local_c8,&local_d0,1);
      cVar4 = QDateTime::operator<(&local_a8,&local_c8);
      QDateTime::~QDateTime(&local_c8);
      QDateTime::~QDateTime(&local_d0);
      if (cVar4 == '\0') {
        QMetaObject::tr((char *)&local_120,(char *)&PTR_PTR_102214ef0,0x1df714f);
        local_130[0] = QDateTime::time();
        QTime::toString(&local_128,local_130,4);
        QString::arg(&local_118,&local_120,&local_128,0,0x20);
        local_140 = QDateTime::date();
        QDate::toString(&local_138,&local_140,4);
        QString::arg(&local_110,&local_118,&local_138,0,0x20);
        QString::operator=(&local_98,&local_110);
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_31 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004894ed;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
LAB_1004894ed:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100489523;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_100489523:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100489559;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100489559:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048958f;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_10048958f:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004895c5;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_e8,(char *)&PTR_PTR_102214ef0,0x1df7119);
        local_f8[0] = QDateTime::time();
        QTime::toString(&local_f0,local_f8,4);
        QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
        local_108 = QDateTime::date();
        QDate::toString(&local_100,&local_108,4);
        QString::arg(&local_d8,&local_e0,&local_100,0,0x20);
        QString::operator=(&local_98,&local_d8);
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048928c;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_10048928c:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004892c2;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_1004892c2:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004892f8;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1004892f8:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048932e;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_10048932e:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004895c5;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
      }
LAB_1004895c5:
      QDateTime::~QDateTime(&local_a8);
    }
LAB_1004895d1:
    QLabel::setText(*(QString **)(*(long *)(param_1 + 0x38) + 200));
    plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 200);
    (**(code **)(*plVar3 + 0x68))
              (plVar3,*(int *)(local_98.field0_0x0 + 4) != 0,extraout_RDX,
               *(int *)(local_98.field0_0x0 + 4) != 0);
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28),0));
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048965f;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
  }
LAB_10048965f:
  uVar11 = FUN_10044e560(param_1);
  local_160 = (QArrayData *)QString::fromAscii_helper("Settings.LockDown.Hash",0x16);
  FUN_1003e1800(&local_158,uVar11,&local_160,0);
  QVariant::toString();
  iVar8 = *(int *)(local_148 + 4);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004896ec;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004896ec:
  QVariant::~QVariant(&local_158);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048972e;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10048972e:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x38) + 0x48);
  if (iVar8 == 0) {
    iVar8 = 0x1df7017;
  }
  else {
    iVar8 = 0x1df700b;
  }
  QMetaObject::tr((char *)&local_168,(char *)&PTR_PTR_102214ef0,iVar8);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004897aa;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004897aa:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50),0));
  return;
}

