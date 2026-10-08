
void FUN_100662480(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  undefined8 local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  undefined1 local_d0 [72];
  QString local_88 [2];
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  if (1 < DAT_10230ffd0) {
    local_50 = (QArrayData *)QString::fromAscii_helper("PURCHASEID",10);
    FUN_1005ea4a0(&local_48,param_3,&local_50);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Purchase completed. Status: %d. OrderID: %s",param_2,
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100662538;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100662538:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100662568;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100662568:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100662598;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100662598:
  CAbstractWizardPage::wizardModel();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_1006760f0(uVar2,0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  CAbstractWizardPage::wizardModel();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_100676150(local_d0,uVar2);
  iVar1 = QDateTime::currentMSecsSinceEpoch();
  QString::number((longlong)&local_d8,iVar1);
  QString::operator=(&local_78,&local_d8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662655;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100662655:
  QString::fromUtf8_helper((char *)&local_38,0x1e41978);
  QString::operator=(&local_60,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006626a4;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006626a4:
  local_f8 = (QArrayData *)QString::fromAscii_helper("CURRENCY",8);
  FUN_1005ea4a0(&local_f0,param_3,&local_f8);
  FUN_100df0d70(&local_e8,&local_f0);
  local_108 = (QArrayData *)QString::fromAscii_helper("ORDERTOTAL",10);
  FUN_1005ea4a0(&local_100,param_3,&local_108);
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e8;
  if (1 < *(int *)local_e8 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_29 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  QString::append(&local_e0);
  QString::operator=(&local_68,&local_e0);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_29 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066278b;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_10066278b:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006627c1;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1006627c1:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006627f7;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006627f7:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066282d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10066282d:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662863;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100662863:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662899;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100662899:
  local_118 = QDate::currentDate();
  QDate::toString(&local_110,&local_118,3);
  QString::operator=(&local_70,&local_110);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_29 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662903;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100662903:
  local_128 = (QArrayData *)QString::fromAscii_helper("PURCHASEID",10);
  FUN_1005ea4a0(&local_120,param_3,&local_128);
  QString::operator=(&local_58,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_29 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662977;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100662977:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006629ad;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1006629ad:
  local_138 = (QArrayData *)QString::fromAscii_helper("LICENSEKEY",10);
  FUN_1005ea4a0(&local_130,param_3,&local_138);
  QString::operator=(local_88,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_29 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662a21;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_100662a21:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100662a57;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100662a57:
  FUN_100675fb0(uVar2,local_d0);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::goNext();
  FUN_100252c80(&local_78);
  FUN_100252e70(local_d0);
  return;
}

