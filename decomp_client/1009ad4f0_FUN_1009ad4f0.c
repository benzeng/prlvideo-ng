
void FUN_1009ad4f0(long param_1,char param_2,int param_3)

{
  undefined8 uVar1;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    FUN_1009ac6c0(param_1,0);
    *(undefined1 *)(param_1 + 0x61) = 0;
    CAbstractWizardPage::pageRolledBack(SUB81(param_1,0));
    return;
  }
  if (param_3 == 0x8000000) goto LAB_1009ad925;
  local_48 = (QArrayData *)QString::fromAscii_helper("%1, %2, %3, %4",0xe);
  QString::arg(&local_40,&local_48,0x654,0,10,0x20);
  QString::arg(&local_38,&local_40,0x655,0,10,0x20);
  QString::arg(&local_30,&local_38,0x656,0,10,0x20);
  QString::arg(&local_28,&local_30,0x657,0,10,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad601;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009ad601:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad631;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009ad631:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad661;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009ad661:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad691;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009ad691:
  uVar1 = FUN_100998580(param_1);
  FUN_100998560(&local_50,param_1);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Unable_to_connect_to__1__10227e120);
  local_68 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Please_check_your_firewall_setti_10227e128);
  local_88 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
  QString::arg(&local_78,&local_80,&local_88,0,0x20);
  QString::arg(&local_70,&local_78,&local_28,0,0x20);
  FUN_100a08530(uVar1,&local_50,&local_58,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad7a5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1009ad7a5:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad7d5;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009ad7d5:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad805;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1009ad805:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad835;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1009ad835:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad865;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009ad865:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad895;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009ad895:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad8c5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009ad8c5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad8f5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009ad8f5:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ad925;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009ad925:
  FUN_1009ac6c0(param_1,0);
  return;
}

