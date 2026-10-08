
undefined8 FUN_100476b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QVariant *pQVar2;
  Data_conflict local_208;
  undefined4 local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QArrayData *local_1e8;
  Data_conflict local_1e0;
  undefined4 local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QArrayData *local_1c0;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  Data_conflict local_190;
  undefined4 local_188;
  QArrayData *local_180;
  QString local_178;
  QArrayData *local_170;
  Data_conflict local_168;
  undefined4 local_160;
  QArrayData *local_158;
  QString local_150;
  QArrayData *local_148;
  Data_conflict local_140;
  undefined4 local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  Data_conflict local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  QString local_88;
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
  undefined1 local_21;
  
  FUN_10044b130();
  local_80 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_80);
  FUN_100459010(&local_90,param_2);
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_21 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0x1df2779);
  QString::append(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476c3c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100476c3c:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_88);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476ca8;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100476ca8:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476cde;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100476cde:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476d0e;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100476d0e:
  local_a8 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_a8);
  FUN_100459010(&local_b8,param_2);
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
  if (1 < *(int *)local_b8 + 1U) {
    LOCK();
    *(int *)local_b8 = *(int *)local_b8 + 1;
    local_21 = *(int *)local_b8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1df278a);
  QString::append(&local_b0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476dbb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100476dbb:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_b0);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_c8);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_21 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476e30;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100476e30:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476e66;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100476e66:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476e9c;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100476e9c:
  local_d0 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_d0);
  FUN_100459010(&local_e0,param_2);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
  if (1 < *(int *)local_e0 + 1U) {
    LOCK();
    *(int *)local_e0 = *(int *)local_e0 + 1;
    local_21 = *(int *)local_e0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x1df6439);
  QString::append(&local_d8);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476f49;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100476f49:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_d8);
  local_e8 = 0x80000000;
  local_f0.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_f0);
  QVariant::~QVariant((QVariant *)&local_f0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_21 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476fbe;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100476fbe:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_21 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100476ff4;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100476ff4:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047702a;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10047702a:
  local_f8 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_f8);
  FUN_100459010(&local_108,param_2);
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_108;
  if (1 < *(int *)local_108 + 1U) {
    LOCK();
    *(int *)local_108 = *(int *)local_108 + 1;
    local_21 = *(int *)local_108 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1df644e);
  QString::append(&local_100);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004770d7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004770d7:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_100);
  local_110 = 0x80000000;
  local_118.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_118);
  QVariant::~QVariant((QVariant *)&local_118);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_21 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047714c;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_10047714c:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477182;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100477182:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004771b8;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004771b8:
  local_120 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_120);
  FUN_100459010(&local_130,param_2);
  local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_130;
  if (1 < *(int *)local_130 + 1U) {
    LOCK();
    *(int *)local_130 = *(int *)local_130 + 1;
    local_21 = *(int *)local_130 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1df63d8);
  QString::append(&local_128);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477265;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100477265:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_128);
  local_138 = 0x80000000;
  local_140.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_140);
  QVariant::~QVariant((QVariant *)&local_140);
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_21 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004772da;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_1004772da:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477310;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100477310:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_21 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477346;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100477346:
  local_148 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_148);
  FUN_100459010(&local_158,param_2);
  local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_158;
  if (1 < *(int *)local_158 + 1U) {
    LOCK();
    *(int *)local_158 = *(int *)local_158 + 1;
    local_21 = *(int *)local_158 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1df63ed);
  QString::append(&local_150);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004773f3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004773f3:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_150);
  local_160 = 0x80000000;
  local_168.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_168);
  QVariant::~QVariant((QVariant *)&local_168);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_21 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477468;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_100477468:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047749e;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10047749e:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004774d4;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004774d4:
  local_170 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_170);
  FUN_100459010(&local_180,param_2);
  local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_180;
  if (1 < *(int *)local_180 + 1U) {
    LOCK();
    *(int *)local_180 = *(int *)local_180 + 1;
    local_21 = *(int *)local_180 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1df6468);
  QString::append(&local_178);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477581;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100477581:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_178);
  local_188 = 0x80000000;
  local_190.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_190);
  QVariant::~QVariant((QVariant *)&local_190);
  if (*(int *)local_178.field0_0x0 != -1) {
    if (*(int *)local_178.field0_0x0 != 0) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
      local_21 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004775f6;
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
LAB_1004775f6:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_21 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047762c;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10047762c:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_21 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477662;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100477662:
  local_198 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_198);
  FUN_100459010(&local_1a8,param_2);
  local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1a8;
  if (1 < *(int *)local_1a8 + 1U) {
    LOCK();
    *(int *)local_1a8 = *(int *)local_1a8 + 1;
    local_21 = *(int *)local_1a8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df6407);
  QString::append(&local_1a0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047770f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10047770f:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_1a0);
  local_1b0 = 0x80000000;
  local_1b8.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_1b8);
  QVariant::~QVariant((QVariant *)&local_1b8);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_21 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477784;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_100477784:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_21 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004777ba;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1004777ba:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_21 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004777f0;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004777f0:
  local_1c0 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_1c0);
  FUN_100459010(&local_1d0,param_2);
  local_1c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1d0;
  if (1 < *(int *)local_1d0 + 1U) {
    LOCK();
    *(int *)local_1d0 = *(int *)local_1d0 + 1;
    local_21 = *(int *)local_1d0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df6481);
  QString::append(&local_1c8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047789d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10047789d:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_1c8);
  local_1d8 = 0x80000000;
  local_1e0.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_1e0);
  QVariant::~QVariant((QVariant *)&local_1e0);
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_21 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477912;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_100477912:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_21 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477948;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100477948:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_21 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047797e;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10047797e:
  local_1e8 = (QArrayData *)QString::fromAscii_helper("VmConfig",8);
  uVar1 = FUN_1003ae480(param_1,&local_1e8);
  FUN_100459010(&local_1f8,param_2);
  local_1f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1f8;
  if (1 < *(int *)local_1f8 + 1U) {
    LOCK();
    *(int *)local_1f8 = *(int *)local_1f8 + 1;
    local_21 = *(int *)local_1f8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df6420);
  QString::append(&local_1f0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477a2b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100477a2b:
  pQVar2 = (QVariant *)FUN_1002edf40(uVar1,&local_1f0);
  local_200 = 0x80000000;
  local_208.field7 = 0;
  QVariant::operator=(pQVar2,(QVariant *)&local_208);
  QVariant::~QVariant((QVariant *)&local_208);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_21 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477aa0;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_100477aa0:
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_21 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100477ad6;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100477ad6:
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      UNLOCK();
      if (*(int *)local_1e8 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
  return param_1;
}

