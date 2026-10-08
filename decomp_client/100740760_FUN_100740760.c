
QString * FUN_100740760(QString *param_1,undefined8 param_2,QVariant *param_3,QString *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  QArrayData *local_158;
  QString local_150;
  Data_conflict local_148;
  undefined4 local_140;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QVariant local_100;
  QString local_f0;
  Data_conflict local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QString local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QString local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QVariant local_70;
  QString local_60;
  Data_conflict local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = *(int *)puVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_21 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar2 = *(int *)puVar1;
  }
  auVar3._8_4_ = (int)puVar1;
  auVar3._0_8_ = puVar1;
  auVar3._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 1) = auVar3;
  *(undefined1 (*) [16])(param_1 + 3) = auVar3;
  *(undefined1 (*) [16])(param_1 + 5) = auVar3;
  *(undefined1 (*) [16])(param_1 + 7) = auVar3;
  param_1[9].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  param_1[10].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e15d0;
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007407f5;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1007407f5:
  QString::operator=(param_1,param_4);
  local_48 = (QArrayData *)QString::fromAscii_helper("ProductName",0xb);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  QSettings::value((QString *)&local_40,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740882;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100740882:
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant((QVariant *)&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007408c4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007408c4:
  local_78 = (QArrayData *)QString::fromAscii_helper("ProductCategory",0xf);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  QSettings::value((QString *)&local_70,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 2,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740946;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100740946:
  QVariant::~QVariant(&local_70);
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740988;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100740988:
  local_a8 = (QArrayData *)QString::fromAscii_helper("ProductShoppingCartUrl",0x16);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  QSettings::value((QString *)&local_a0,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 6,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740a2b;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100740a2b:
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740a79;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100740a79:
  local_d8 = (QArrayData *)QString::fromAscii_helper("ProductDownloadDescrUrl",0x17);
  local_e0 = 0x80000000;
  local_e8.field7 = 0;
  QSettings::value((QString *)&local_d0,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 7,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_21 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740b1c;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100740b1c:
  QVariant::~QVariant(&local_d0);
  QVariant::~QVariant((QVariant *)&local_e8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740b6a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100740b6a:
  local_108 = (QArrayData *)QString::fromAscii_helper("ProductDownloadToken",0x14);
  local_110 = 0x80000000;
  local_118.field7 = 0;
  QSettings::value((QString *)&local_100,param_3);
  QVariant::toString();
  QString::operator=(param_1 + 8,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_21 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740c0d;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100740c0d:
  QVariant::~QVariant(&local_100);
  QVariant::~QVariant((QVariant *)&local_118);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740c5b;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100740c5b:
  local_138 = (QArrayData *)QString::fromAscii_helper("ProductActivationKey",0x14);
  local_140 = 0x80000000;
  local_148.field7 = 0;
  QSettings::value((QString *)&local_130,param_3);
  QVariant::toString();
  QVariant::~QVariant(&local_130);
  QVariant::~QVariant((QVariant *)&local_148);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740d06;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100740d06:
  local_158 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1009e01f0(&local_150,&local_158,&local_120);
  QString::operator=(param_1 + 9,&local_150);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_21 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740d7b;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_100740d7b:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100740db1;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100740db1:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      UNLOCK();
      if (*(int *)local_120 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_120,2,8);
  }
  return param_1;
}

