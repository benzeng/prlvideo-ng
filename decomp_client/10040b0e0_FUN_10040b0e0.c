
void FUN_10040b0e0(long param_1)

{
  code *pcVar1;
  char cVar2;
  QVariant *pQVar3;
  undefined8 uVar4;
  QArrayData *local_270;
  QArrayData *local_268;
  _func_void_Node_ptr *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QString local_240;
  QString local_238;
  QString local_230;
  QString local_228;
  QVariant local_220;
  undefined4 local_210;
  undefined1 local_209;
  QVariant local_208;
  QArrayData *local_1f8;
  QVariant local_1f0;
  undefined1 local_1d9;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  _func_void_Node_ptr *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  QVariant local_178;
  undefined4 local_168;
  undefined1 local_161;
  QVariant local_160;
  undefined1 local_149;
  QVariant local_148;
  undefined1 local_131;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  _func_void_Node_ptr *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QVariant local_d0;
  undefined4 local_bc;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QVariant local_98;
  undefined1 local_81;
  QVariant local_80;
  _func_void_Node_ptr *local_70;
  int *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_68 = (int *)PTR_shared_null_1021e15e8;
  local_70 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b170);
  local_81 = 0;
  QVariant::QVariant(&local_80,1,&local_81,0);
  QVariant::operator=(pQVar3,&local_80);
  QVariant::~QVariant(&local_80);
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b174);
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_a0 = (QArrayData *)
             QString::fromAscii_helper
                       ("Settings.Tools.SharedFolders.HostSharing.ShareUserHomeDir",0x39);
  FUN_1003e1800(&local_98,uVar4,&local_a0,0);
  QVariant::operator=(pQVar3,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b1ee;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10040b1ee:
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b178);
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_b8 = (QArrayData *)
             QString::fromAscii_helper
                       ("Settings.Tools.SharedFolders.HostSharing.ShareAllMacDisks",0x39);
  FUN_1003e1800(&local_b0,uVar4,&local_b8,0);
  QVariant::operator=(pQVar3,&local_b0);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b28e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10040b28e:
  local_bc = 0x100;
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&local_bc);
  FUN_100419e30(&local_70,&DAT_100e1b170);
  QVariant::toString();
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_f8;
  if (1 < *(int *)local_f8 + 1U) {
    LOCK();
    *(int *)local_f8 = *(int *)local_f8 + 1;
    local_29 = *(int *)local_f8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1e41970);
  QString::append(&local_f0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b33e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10040b33e:
  FUN_100419e30(&local_70,&DAT_100e1b174);
  QVariant::toString();
  local_e8.field0_0x0 = local_f0.field0_0x0;
  if (1 < *(int *)local_f0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
    local_29 = *(int *)local_f0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_e8);
  local_e0.field0_0x0 = local_e8.field0_0x0;
  if (1 < *(int *)local_e8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
    local_29 = *(int *)local_e8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e41970);
  QString::append(&local_e0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b403;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10040b403:
  FUN_100419e30(&local_70,&DAT_100e1b178);
  QVariant::toString();
  local_d8.field0_0x0 = local_e0.field0_0x0;
  if (1 < *(int *)local_e0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
    local_29 = *(int *)local_e0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_d8);
  QVariant::QVariant(&local_d0,10,&local_d8,0);
  QVariant::operator=(pQVar3,&local_d0);
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b4bf;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_10040b4bf:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b4f5;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10040b4f5:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_29 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b52b;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_10040b52b:
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_29 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b561;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_10040b561:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b597;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10040b597:
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b5cd;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_10040b5cd:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b603;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10040b603:
  QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,0x1dc6af0);
  FUN_10041e510(&local_118,&local_120,&local_70);
  FUN_10041e590(&local_68,&local_118);
  if (*(int *)(local_110 + 0x10) != -1) {
    if (*(int *)(local_110 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_110 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b67a;
    }
    QHashData::free_helper(local_110);
  }
LAB_10040b67a:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b6a9;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10040b6a9:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b6df;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10040b6df:
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b170);
  local_131 = 1;
  QVariant::QVariant(&local_130,1,&local_131,0);
  QVariant::operator=(pQVar3,&local_130);
  QVariant::~QVariant(&local_130);
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b174);
  local_149 = 1;
  QVariant::QVariant(&local_148,1,&local_149,0);
  QVariant::operator=(pQVar3,&local_148);
  QVariant::~QVariant(&local_148);
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b178);
  local_161 = 0;
  QVariant::QVariant(&local_160,1,&local_161,0);
  QVariant::operator=(pQVar3,&local_160);
  QVariant::~QVariant(&local_160);
  local_168 = 0x100;
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&local_168);
  FUN_100419e30(&local_70,&DAT_100e1b170);
  QVariant::toString();
  local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1a0;
  if (1 < *(int *)local_1a0 + 1U) {
    LOCK();
    *(int *)local_1a0 = *(int *)local_1a0 + 1;
    local_29 = *(int *)local_1a0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e41970);
  QString::append(&local_198);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b87c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10040b87c:
  FUN_100419e30(&local_70,&DAT_100e1b174);
  QVariant::toString();
  local_190.field0_0x0 = local_198.field0_0x0;
  if (1 < *(int *)local_198.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + 1;
    local_29 = *(int *)local_198.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_190);
  local_188.field0_0x0 = local_190.field0_0x0;
  if (1 < *(int *)local_190.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + 1;
    local_29 = *(int *)local_190.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e41970);
  QString::append(&local_188);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b941;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10040b941:
  FUN_100419e30(&local_70,&DAT_100e1b178);
  QVariant::toString();
  local_180.field0_0x0 = local_188.field0_0x0;
  if (1 < *(int *)local_188.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + 1;
    local_29 = *(int *)local_188.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_180);
  QVariant::QVariant(&local_178,10,&local_180,0);
  QVariant::operator=(pQVar3,&local_178);
  QVariant::~QVariant(&local_178);
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_29 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040b9fd;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_10040b9fd:
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_29 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040ba33;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_10040ba33:
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_29 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040ba69;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_10040ba69:
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_29 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040ba9f;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_10040ba9f:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_29 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bad5;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10040bad5:
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_29 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bb0b;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_10040bb0b:
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_29 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bb41;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10040bb41:
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    QMetaObject::tr((char *)&local_1c8,PTR_staticMetaObject_1021e1520,0x1df3511);
  }
  else {
    QMetaObject::tr((char *)&local_1c8,PTR_staticMetaObject_1021e1520,0x1dcc782);
  }
  FUN_10041e510(&local_1c0,&local_1c8,&local_70);
  FUN_10041e590(&local_68,&local_1c0);
  if (*(int *)(local_1b8 + 0x10) != -1) {
    if (*(int *)(local_1b8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_1b8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bbea;
    }
    QHashData::free_helper(local_1b8);
  }
LAB_10040bbea:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_29 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bc19;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10040bc19:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_29 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bc4f;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10040bc4f:
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b170);
  local_1d9 = 1;
  QVariant::QVariant(&local_1d8,1,&local_1d9,0);
  QVariant::operator=(pQVar3,&local_1d8);
  QVariant::~QVariant(&local_1d8);
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b174);
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_1f8 = (QArrayData *)
              QString::fromAscii_helper
                        ("Settings.Tools.SharedFolders.HostSharing.ShareUserHomeDir",0x39);
  FUN_1003e1800(&local_1f0,uVar4,&local_1f8);
  QVariant::operator=(pQVar3,&local_1f0);
  QVariant::~QVariant(&local_1f0);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_29 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bd3e;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_10040bd3e:
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&DAT_100e1b178);
  local_209 = 1;
  QVariant::QVariant(&local_208,1,&local_209,0);
  QVariant::operator=(pQVar3,&local_208);
  QVariant::~QVariant(&local_208);
  local_210 = 0x100;
  pQVar3 = (QVariant *)FUN_100419e30(&local_70,&local_210);
  FUN_100419e30(&local_70,&DAT_100e1b170);
  QVariant::toString();
  local_240.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_248;
  if (1 < *(int *)local_248 + 1U) {
    LOCK();
    *(int *)local_248 = *(int *)local_248 + 1;
    local_29 = *(int *)local_248 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e41970);
  QString::append(&local_240);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040be3d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10040be3d:
  FUN_100419e30(&local_70,&DAT_100e1b174);
  QVariant::toString();
  local_238.field0_0x0 = local_240.field0_0x0;
  if (1 < *(int *)local_240.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + 1;
    local_29 = *(int *)local_240.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_238);
  local_230.field0_0x0 = local_238.field0_0x0;
  if (1 < *(int *)local_238.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + 1;
    local_29 = *(int *)local_238.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e41970);
  QString::append(&local_230);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bf02;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10040bf02:
  FUN_100419e30(&local_70,&DAT_100e1b178);
  QVariant::toString();
  local_228.field0_0x0 = local_230.field0_0x0;
  if (1 < *(int *)local_230.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + 1;
    local_29 = *(int *)local_230.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_228);
  QVariant::QVariant(&local_220,10,&local_228,0);
  QVariant::operator=(pQVar3,&local_220);
  QVariant::~QVariant(&local_220);
  if (*(int *)local_228.field0_0x0 != -1) {
    if (*(int *)local_228.field0_0x0 != 0) {
      LOCK();
      *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
      local_29 = *(int *)local_228.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bfbe;
    }
    QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
  }
LAB_10040bfbe:
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_29 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040bff4;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_10040bff4:
  if (*(int *)local_230.field0_0x0 != -1) {
    if (*(int *)local_230.field0_0x0 != 0) {
      LOCK();
      *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
      local_29 = *(int *)local_230.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c02a;
    }
    QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
  }
LAB_10040c02a:
  if (*(int *)local_238.field0_0x0 != -1) {
    if (*(int *)local_238.field0_0x0 != 0) {
      LOCK();
      *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
      local_29 = *(int *)local_238.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c060;
    }
    QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
  }
LAB_10040c060:
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_29 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c096;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_10040c096:
  if (*(int *)local_240.field0_0x0 != -1) {
    if (*(int *)local_240.field0_0x0 != 0) {
      LOCK();
      *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
      local_29 = *(int *)local_240.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c0cc;
    }
    QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
  }
LAB_10040c0cc:
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_29 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c102;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_10040c102:
  QMetaObject::tr((char *)&local_270,PTR_staticMetaObject_1021e1520,0x1dccb9c);
  FUN_10041e510(&local_268,&local_270,&local_70);
  FUN_10041e590(&local_68,&local_268);
  if (*(int *)(local_260 + 0x10) != -1) {
    if (*(int *)(local_260 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_260 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c179;
    }
    QHashData::free_helper(local_260);
  }
LAB_10040c179:
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_29 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c1a8;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_10040c1a8:
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_29 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c1de;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_10040c1de:
  FUN_1003fab60();
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040c219;
    }
    QHashData::free_helper(local_70);
  }
LAB_10040c219:
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      UNLOCK();
      if (*local_68 != 0) {
        return;
      }
      local_29 = 0;
    }
    FUN_10041c910(&local_68,local_68);
  }
  return;
}

