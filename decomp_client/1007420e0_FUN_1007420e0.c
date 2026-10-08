
undefined8 FUN_1007420e0(long param_1,long *param_2)

{
  QArrayData *local_158;
  QString local_150;
  QVariant local_148;
  Data_conflict local_138;
  QVariant local_130;
  Data_conflict local_120;
  QVariant local_118;
  Data_conflict local_108;
  QVariant local_100;
  Data_conflict local_f0;
  QVariant local_e8;
  Data_conflict local_d8;
  QVariant local_d0;
  Data_conflict local_c0;
  QVariant local_b8;
  Data_conflict local_a8;
  QVariant local_a0;
  Data_conflict local_90;
  QVariant local_88;
  Data_conflict local_78;
  QVariant local_70;
  Data_conflict local_60;
  QArrayData *local_58;
  QSettings local_50 [16];
  QString local_40;
  QString local_38 [2];
  undefined1 local_21;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return 0;
  }
  QSettings::QSettings(local_50,(QObject *)0x0);
  QSettings::organizationName();
  QSettings::QSettings((QSettings *)local_38,&local_40,(QString *)(param_1 + 0x10),(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742163;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100742163:
  QSettings::~QSettings(local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("PurchaseOrders",0xe);
  QSettings::beginGroup(local_38);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007421be;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007421be:
  QSettings::beginGroup(local_38);
  local_60.field7 = QString::fromAscii_helper("OrderTotal",10);
  QVariant::QVariant(&local_70,(QString *)(param_2 + 0xd));
  QSettings::setValue(local_38,(QVariant *)&local_60);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_21 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742237;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_100742237:
  local_78.field7 = QString::fromAscii_helper("OrderDate",9);
  QVariant::QVariant(&local_88,(QString *)(param_2 + 0xc));
  QSettings::setValue(local_38,(QVariant *)&local_78);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78.field15 != -1) {
    if (*(int *)local_78.field15 != 0) {
      LOCK();
      *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
      local_21 = *(int *)local_78.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007422a3;
    }
    QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
  }
LAB_1007422a3:
  local_90.field7 = QString::fromAscii_helper("OrderDownloaderUrl",0x12);
  QVariant::QVariant(&local_a0,(QString *)(param_2 + 0xe));
  QSettings::setValue(local_38,(QVariant *)&local_90);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_90.field15 != -1) {
    if (*(int *)local_90.field15 != 0) {
      LOCK();
      *(int *)local_90.field15 = *(int *)local_90.field15 + -1;
      local_21 = *(int *)local_90.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742324;
    }
    QArrayData::deallocate((QArrayData *)local_90.field15,2,8);
  }
LAB_100742324:
  local_a8.field7 = QString::fromAscii_helper("OrderReferenceId",0x10);
  QVariant::QVariant(&local_b8,(QString *)(param_2 + 0xf));
  QSettings::setValue(local_38,(QVariant *)&local_a8);
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_a8.field15 != -1) {
    if (*(int *)local_a8.field15 != 0) {
      LOCK();
      *(int *)local_a8.field15 = *(int *)local_a8.field15 + -1;
      local_21 = *(int *)local_a8.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007423a5;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field15,2,8);
  }
LAB_1007423a5:
  QSettings::beginGroup(local_38);
  local_c0.field7 = QString::fromAscii_helper("ProductName",0xb);
  QVariant::QVariant(&local_d0,(QString *)(param_2 + 1));
  QSettings::setValue(local_38,(QVariant *)&local_c0);
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_c0.field15 != -1) {
    if (*(int *)local_c0.field15 != 0) {
      LOCK();
      *(int *)local_c0.field15 = *(int *)local_c0.field15 + -1;
      local_21 = *(int *)local_c0.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742432;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field15,2,8);
  }
LAB_100742432:
  local_d8.field7 = QString::fromAscii_helper("ProductCategory",0xf);
  QVariant::QVariant(&local_e8,(QString *)(param_2 + 2));
  QSettings::setValue(local_38,(QVariant *)&local_d8);
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_d8.field15 != -1) {
    if (*(int *)local_d8.field15 != 0) {
      LOCK();
      *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
      local_21 = *(int *)local_d8.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007424b3;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
  }
LAB_1007424b3:
  local_f0.field7 = QString::fromAscii_helper("ProductShoppingCartUrl",0x16);
  QVariant::QVariant(&local_100,(QString *)(param_2 + 6));
  QSettings::setValue(local_38,(QVariant *)&local_f0);
  QVariant::~QVariant(&local_100);
  if (*(int *)local_f0.field15 != -1) {
    if (*(int *)local_f0.field15 != 0) {
      LOCK();
      *(int *)local_f0.field15 = *(int *)local_f0.field15 + -1;
      local_21 = *(int *)local_f0.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742534;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field15,2,8);
  }
LAB_100742534:
  local_108.field7 = QString::fromAscii_helper("ProductDownloadDescrUrl",0x17);
  QVariant::QVariant(&local_118,(QString *)(param_2 + 7));
  QSettings::setValue(local_38,(QVariant *)&local_108);
  QVariant::~QVariant(&local_118);
  if (*(int *)local_108.field15 != -1) {
    if (*(int *)local_108.field15 != 0) {
      LOCK();
      *(int *)local_108.field15 = *(int *)local_108.field15 + -1;
      local_21 = *(int *)local_108.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007425b5;
    }
    QArrayData::deallocate((QArrayData *)local_108.field15,2,8);
  }
LAB_1007425b5:
  local_120.field7 = QString::fromAscii_helper("ProductDownloadToken",0x14);
  QVariant::QVariant(&local_130,(QString *)(param_2 + 8));
  QSettings::setValue(local_38,(QVariant *)&local_120);
  QVariant::~QVariant(&local_130);
  if (*(int *)local_120.field15 != -1) {
    if (*(int *)local_120.field15 != 0) {
      LOCK();
      *(int *)local_120.field15 = *(int *)local_120.field15 + -1;
      local_21 = *(int *)local_120.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742636;
    }
    QArrayData::deallocate((QArrayData *)local_120.field15,2,8);
  }
LAB_100742636:
  local_138.field7 = QString::fromAscii_helper("ProductActivationKey",0x14);
  local_158 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1009dfc00(&local_150,&local_158,param_2 + 9);
  QVariant::QVariant(&local_148,&local_150);
  QSettings::setValue(local_38,(QVariant *)&local_138);
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_21 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007426e9;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_1007426e9:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10074271f;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10074271f:
  if (*(int *)local_138.field15 != -1) {
    if (*(int *)local_138.field15 != 0) {
      LOCK();
      *(int *)local_138.field15 = *(int *)local_138.field15 + -1;
      local_21 = *(int *)local_138.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100742755;
    }
    QArrayData::deallocate((QArrayData *)local_138.field15,2,8);
  }
LAB_100742755:
  QSettings::endGroup();
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_38);
  return 1;
}

