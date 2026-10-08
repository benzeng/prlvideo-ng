
void FUN_10040f790(long param_1)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  QVariant *pQVar5;
  undefined8 uVar6;
  QArrayData *local_358;
  QArrayData *local_350;
  _func_void_Node_ptr *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QString local_328;
  QString local_320;
  QString local_318;
  QString local_310;
  QVariant local_308;
  undefined4 local_2f8;
  undefined1 local_2f1;
  QVariant local_2f0;
  QArrayData *local_2e0;
  QVariant local_2d8;
  QArrayData *local_2c8;
  QVariant local_2c0;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  _func_void_Node_ptr *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QString local_280;
  QString local_278;
  QString local_270;
  QString local_268;
  QVariant local_260;
  undefined4 local_24c;
  QArrayData *local_248;
  QVariant local_240;
  undefined1 local_229;
  QVariant local_228;
  undefined1 local_211;
  QVariant local_210;
  QArrayData *local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  _func_void_Node_ptr *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QString local_1b0;
  QString local_1a8;
  QString local_1a0;
  QVariant local_198;
  undefined4 local_188;
  undefined1 local_181;
  QVariant local_180;
  undefined1 local_169;
  QVariant local_168;
  undefined1 local_151;
  QVariant local_150;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  _func_void_Node_ptr *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QVariant local_e0;
  undefined4 local_d0;
  undefined1 local_c9;
  QVariant local_c8;
  undefined1 local_b1;
  QVariant local_b0;
  undefined1 local_99;
  QVariant local_98;
  QArrayData *local_88;
  _func_void_Node_ptr *local_80;
  int *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_78 = (int *)PTR_shared_null_1021e15e8;
  local_80 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,0x1df358a);
  pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b194);
  local_99 = 0;
  QVariant::QVariant(&local_98,1,&local_99,0);
  QVariant::operator=(pQVar5,&local_98);
  QVariant::~QVariant(&local_98);
  pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b190);
  local_b1 = 0;
  QVariant::QVariant(&local_b0,1,&local_b1,0);
  QVariant::operator=(pQVar5,&local_b0);
  QVariant::~QVariant(&local_b0);
  pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b198);
  local_c9 = 1;
  QVariant::QVariant(&local_c8,1,&local_c9,0);
  QVariant::operator=(pQVar5,&local_c8);
  QVariant::~QVariant(&local_c8);
  local_d0 = 0x100;
  pQVar5 = (QVariant *)FUN_100419e30(&local_80,&local_d0);
  FUN_100419e30(&local_80,&DAT_100e1b190);
  QVariant::toString();
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_108;
  if (1 < *(int *)local_108 + 1U) {
    LOCK();
    *(int *)local_108 = *(int *)local_108 + 1;
    local_29 = *(int *)local_108 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1e41970);
  QString::append(&local_100);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040f97a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10040f97a:
  FUN_100419e30(&local_80,&DAT_100e1b194);
  QVariant::toString();
  local_f8.field0_0x0 = local_100.field0_0x0;
  if (1 < *(int *)local_100.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
    local_29 = *(int *)local_100.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_f8);
  local_f0.field0_0x0 = local_f8.field0_0x0;
  if (1 < *(int *)local_f8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
    local_29 = *(int *)local_f8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x1e41970);
  QString::append(&local_f0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fa3f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10040fa3f:
  FUN_100419e30(&local_80,&DAT_100e1b198);
  QVariant::toString();
  local_e8.field0_0x0 = local_f0.field0_0x0;
  if (1 < *(int *)local_f0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
    local_29 = *(int *)local_f0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_e8);
  QVariant::QVariant(&local_e0,10,&local_e8,0);
  QVariant::operator=(pQVar5,&local_e0);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_29 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fafb;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_10040fafb:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fb31;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10040fb31:
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fb67;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_10040fb67:
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_29 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fb9d;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_10040fb9d:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fbd3;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10040fbd3:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_29 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fc09;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_10040fc09:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fc3f;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10040fc3f:
  FUN_10041e510(&local_128,&local_88,&local_80);
  FUN_10041e590(&local_78,&local_128);
  if (*(int *)(local_120 + 0x10) != -1) {
    if (*(int *)(local_120 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_120 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fc91;
    }
    QHashData::free_helper(local_120);
  }
LAB_10040fc91:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fcc0;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10040fcc0:
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_140 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_138,uVar6,&local_140);
  iVar4 = QVariant::toUInt((bool *)&local_138);
  if (iVar4 == 8) {
    bVar2 = FUN_100d80630(1);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 0;
  }
  QVariant::~QVariant(&local_138);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040fd64;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10040fd64:
  if (bVar2 != 0) {
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b190);
    local_151 = 0;
    QVariant::QVariant(&local_150,1,&local_151,0);
    QVariant::operator=(pQVar5,&local_150);
    QVariant::~QVariant(&local_150);
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b194);
    local_169 = 1;
    QVariant::QVariant(&local_168,1,&local_169,0);
    QVariant::operator=(pQVar5,&local_168);
    QVariant::~QVariant(&local_168);
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b198);
    local_181 = 1;
    QVariant::QVariant(&local_180,1,&local_181,0);
    QVariant::operator=(pQVar5,&local_180);
    QVariant::~QVariant(&local_180);
    local_188 = 0x100;
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&local_188);
    FUN_100419e30(&local_80,&DAT_100e1b190);
    QVariant::toString();
    local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1c0;
    if (1 < *(int *)local_1c0 + 1U) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + 1;
      local_29 = *(int *)local_1c0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_60,0x1e41970);
    QString::append(&local_1b8);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10040ff09;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10040ff09:
    FUN_100419e30(&local_80,&DAT_100e1b194);
    QVariant::toString();
    local_1b0.field0_0x0 = local_1b8.field0_0x0;
    if (1 < *(int *)local_1b8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + 1;
      local_29 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_1b0);
    local_1a8.field0_0x0 = local_1b0.field0_0x0;
    if (1 < *(int *)local_1b0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + 1;
      local_29 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_58,0x1e41970);
    QString::append(&local_1a8);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10040ffce;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10040ffce:
    FUN_100419e30(&local_80,&DAT_100e1b198);
    QVariant::toString();
    local_1a0.field0_0x0 = local_1a8.field0_0x0;
    if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
      local_29 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_1a0);
    QVariant::QVariant(&local_198,10,&local_1a0,0);
    QVariant::operator=(pQVar5,&local_198);
    QVariant::~QVariant(&local_198);
    if (*(int *)local_1a0.field0_0x0 != -1) {
      if (*(int *)local_1a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
        local_29 = *(int *)local_1a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10041008a;
      }
      QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
    }
LAB_10041008a:
    if (*(int *)local_1d0 != -1) {
      if (*(int *)local_1d0 != 0) {
        LOCK();
        *(int *)local_1d0 = *(int *)local_1d0 + -1;
        local_29 = *(int *)local_1d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004100c0;
      }
      QArrayData::deallocate(local_1d0,2,8);
    }
LAB_1004100c0:
    if (*(int *)local_1a8.field0_0x0 != -1) {
      if (*(int *)local_1a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
        local_29 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004100f6;
      }
      QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
    }
LAB_1004100f6:
    if (*(int *)local_1b0.field0_0x0 != -1) {
      if (*(int *)local_1b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
        local_29 = *(int *)local_1b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10041012c;
      }
      QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
    }
LAB_10041012c:
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_29 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410162;
      }
      QArrayData::deallocate(local_1c8,2,8);
    }
LAB_100410162:
    if (*(int *)local_1b8.field0_0x0 != -1) {
      if (*(int *)local_1b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
        local_29 = *(int *)local_1b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410198;
      }
      QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
    }
LAB_100410198:
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_29 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004101ce;
      }
      QArrayData::deallocate(local_1c0,2,8);
    }
LAB_1004101ce:
    QMetaObject::tr((char *)&local_1e8,PTR_staticMetaObject_1021e1520,0x1df3599);
    FUN_10041e510(&local_1e0,&local_1e8,&local_80);
    FUN_10041e590(&local_78,&local_1e0);
    if (*(int *)(local_1d8 + 0x10) != -1) {
      if (*(int *)(local_1d8 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_1d8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_29 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410245;
      }
      QHashData::free_helper(local_1d8);
    }
LAB_100410245:
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_29 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410274;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
LAB_100410274:
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_29 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004102aa;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
  }
LAB_1004102aa:
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_200 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.TimeSync.Enabled",0x1f);
  FUN_1003e1800(&local_1f8,uVar6,&local_200);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_1f8);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_29 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100410336;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_100410336:
  if (cVar3 == '\0') {
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b190);
    uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_2c8 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.TimeSync.KeepTimeDiff",0x24)
    ;
    FUN_1003e1800(&local_2c0,uVar6,&local_2c8);
    QVariant::operator=(pQVar5,&local_2c0);
    QVariant::~QVariant(&local_2c0);
    if (*(int *)local_2c8 != -1) {
      if (*(int *)local_2c8 != 0) {
        LOCK();
        *(int *)local_2c8 = *(int *)local_2c8 + -1;
        local_29 = *(int *)local_2c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10041097a;
      }
      QArrayData::deallocate(local_2c8,2,8);
    }
LAB_10041097a:
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b194);
    uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_2e0 = (QArrayData *)
                QString::fromAscii_helper("Settings.Tools.TimeSync.SyncHostToGuest",0x27);
    FUN_1003e1800(&local_2d8,uVar6,&local_2e0);
    QVariant::operator=(pQVar5,&local_2d8);
    QVariant::~QVariant(&local_2d8);
    if (*(int *)local_2e0 != -1) {
      if (*(int *)local_2e0 != 0) {
        LOCK();
        *(int *)local_2e0 = *(int *)local_2e0 + -1;
        local_29 = *(int *)local_2e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410a1a;
      }
      QArrayData::deallocate(local_2e0,2,8);
    }
LAB_100410a1a:
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b198);
    local_2f1 = 0;
    QVariant::QVariant(&local_2f0,1,&local_2f1,0);
    QVariant::operator=(pQVar5,&local_2f0);
    QVariant::~QVariant(&local_2f0);
    local_2f8 = 0x100;
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&local_2f8);
    FUN_100419e30(&local_80,&DAT_100e1b190);
    QVariant::toString();
    local_328.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_330;
    if (1 < *(int *)local_330 + 1U) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + 1;
      local_29 = *(int *)local_330 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1e41970);
    QString::append(&local_328);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410b19;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100410b19:
    FUN_100419e30(&local_80,&DAT_100e1b194);
    QVariant::toString();
    local_320.field0_0x0 = local_328.field0_0x0;
    if (1 < *(int *)local_328.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_328.field0_0x0 = *(int *)local_328.field0_0x0 + 1;
      local_29 = *(int *)local_328.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_320);
    local_318.field0_0x0 = local_320.field0_0x0;
    if (1 < *(int *)local_320.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + 1;
      local_29 = *(int *)local_320.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1e41970);
    QString::append(&local_318);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410bde;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100410bde:
    FUN_100419e30(&local_80,&DAT_100e1b198);
    QVariant::toString();
    local_310.field0_0x0 = local_318.field0_0x0;
    if (1 < *(int *)local_318.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + 1;
      local_29 = *(int *)local_318.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_310);
    QVariant::QVariant(&local_308,10,&local_310,0);
    QVariant::operator=(pQVar5,&local_308);
    QVariant::~QVariant(&local_308);
    if (*(int *)local_310.field0_0x0 != -1) {
      if (*(int *)local_310.field0_0x0 != 0) {
        LOCK();
        *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + -1;
        local_29 = *(int *)local_310.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410c9a;
      }
      QArrayData::deallocate((QArrayData *)local_310.field0_0x0,2,8);
    }
LAB_100410c9a:
    if (*(int *)local_340 != -1) {
      if (*(int *)local_340 != 0) {
        LOCK();
        *(int *)local_340 = *(int *)local_340 + -1;
        local_29 = *(int *)local_340 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410cd0;
      }
      QArrayData::deallocate(local_340,2,8);
    }
LAB_100410cd0:
    if (*(int *)local_318.field0_0x0 != -1) {
      if (*(int *)local_318.field0_0x0 != 0) {
        LOCK();
        *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
        local_29 = *(int *)local_318.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410d06;
      }
      QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
    }
LAB_100410d06:
    if (*(int *)local_320.field0_0x0 != -1) {
      if (*(int *)local_320.field0_0x0 != 0) {
        LOCK();
        *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
        local_29 = *(int *)local_320.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410d3c;
      }
      QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
    }
LAB_100410d3c:
    if (*(int *)local_338 != -1) {
      if (*(int *)local_338 != 0) {
        LOCK();
        *(int *)local_338 = *(int *)local_338 + -1;
        local_29 = *(int *)local_338 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410d72;
      }
      QArrayData::deallocate(local_338,2,8);
    }
LAB_100410d72:
    if (*(int *)local_328.field0_0x0 != -1) {
      if (*(int *)local_328.field0_0x0 != 0) {
        LOCK();
        *(int *)local_328.field0_0x0 = *(int *)local_328.field0_0x0 + -1;
        local_29 = *(int *)local_328.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410da8;
      }
      QArrayData::deallocate((QArrayData *)local_328.field0_0x0,2,8);
    }
LAB_100410da8:
    if (*(int *)local_330 != -1) {
      if (*(int *)local_330 != 0) {
        LOCK();
        *(int *)local_330 = *(int *)local_330 + -1;
        local_29 = *(int *)local_330 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410dde;
      }
      QArrayData::deallocate(local_330,2,8);
    }
LAB_100410dde:
    QMetaObject::tr((char *)&local_358,PTR_staticMetaObject_1021e1520,0x1df35ad);
    FUN_10041e510(&local_350,&local_358,&local_80);
    FUN_10041e590(&local_78,&local_350);
    if (*(int *)(local_348 + 0x10) != -1) {
      if (*(int *)(local_348 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_348 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_29 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410e55;
      }
      QHashData::free_helper(local_348);
    }
LAB_100410e55:
    if (*(int *)local_350 != -1) {
      if (*(int *)local_350 != 0) {
        LOCK();
        *(int *)local_350 = *(int *)local_350 + -1;
        local_29 = *(int *)local_350 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410e84;
      }
      QArrayData::deallocate(local_350,2,8);
    }
LAB_100410e84:
    if (*(int *)local_358 != -1) {
      if (*(int *)local_358 != 0) {
        LOCK();
        *(int *)local_358 = *(int *)local_358 + -1;
        local_29 = *(int *)local_358 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410eba;
      }
      QArrayData::deallocate(local_358,2,8);
    }
  }
  else {
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b190);
    local_211 = 1;
    QVariant::QVariant(&local_210,1,&local_211,0);
    QVariant::operator=(pQVar5,&local_210);
    QVariant::~QVariant(&local_210);
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b194);
    local_229 = 0;
    QVariant::QVariant(&local_228,1,&local_229,0);
    QVariant::operator=(pQVar5,&local_228);
    QVariant::~QVariant(&local_228);
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&DAT_100e1b198);
    uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_248 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.TimeSync.Enabled",0x1f);
    FUN_1003e1800(&local_240,uVar6,&local_248,0);
    QVariant::operator=(pQVar5,&local_240);
    QVariant::~QVariant(&local_240);
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_29 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10041047c;
      }
      QArrayData::deallocate(local_248,2,8);
    }
LAB_10041047c:
    local_24c = 0x100;
    pQVar5 = (QVariant *)FUN_100419e30(&local_80,&local_24c);
    FUN_100419e30(&local_80,&DAT_100e1b190);
    QVariant::toString();
    local_280.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_288;
    if (1 < *(int *)local_288 + 1U) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + 1;
      local_29 = *(int *)local_288 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1e41970);
    QString::append(&local_280);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10041052c;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10041052c:
    FUN_100419e30(&local_80,&DAT_100e1b194);
    QVariant::toString();
    local_278.field0_0x0 = local_280.field0_0x0;
    if (1 < *(int *)local_280.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + 1;
      local_29 = *(int *)local_280.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_278);
    local_270.field0_0x0 = local_278.field0_0x0;
    if (1 < *(int *)local_278.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + 1;
      local_29 = *(int *)local_278.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e41970);
    QString::append(&local_270);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004105f1;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1004105f1:
    FUN_100419e30(&local_80,&DAT_100e1b198);
    QVariant::toString();
    local_268.field0_0x0 = local_270.field0_0x0;
    if (1 < *(int *)local_270.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + 1;
      local_29 = *(int *)local_270.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_268);
    QVariant::QVariant(&local_260,10,&local_268,0);
    QVariant::operator=(pQVar5,&local_260);
    QVariant::~QVariant(&local_260);
    if (*(int *)local_268.field0_0x0 != -1) {
      if (*(int *)local_268.field0_0x0 != 0) {
        LOCK();
        *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
        local_29 = *(int *)local_268.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004106ad;
      }
      QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
    }
LAB_1004106ad:
    if (*(int *)local_298 != -1) {
      if (*(int *)local_298 != 0) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + -1;
        local_29 = *(int *)local_298 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004106e3;
      }
      QArrayData::deallocate(local_298,2,8);
    }
LAB_1004106e3:
    if (*(int *)local_270.field0_0x0 != -1) {
      if (*(int *)local_270.field0_0x0 != 0) {
        LOCK();
        *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
        local_29 = *(int *)local_270.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410719;
      }
      QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
    }
LAB_100410719:
    if (*(int *)local_278.field0_0x0 != -1) {
      if (*(int *)local_278.field0_0x0 != 0) {
        LOCK();
        *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
        local_29 = *(int *)local_278.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10041074f;
      }
      QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
    }
LAB_10041074f:
    if (*(int *)local_290 != -1) {
      if (*(int *)local_290 != 0) {
        LOCK();
        *(int *)local_290 = *(int *)local_290 + -1;
        local_29 = *(int *)local_290 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410785;
      }
      QArrayData::deallocate(local_290,2,8);
    }
LAB_100410785:
    if (*(int *)local_280.field0_0x0 != -1) {
      if (*(int *)local_280.field0_0x0 != 0) {
        LOCK();
        *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
        local_29 = *(int *)local_280.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004107bb;
      }
      QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
    }
LAB_1004107bb:
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_29 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004107f1;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_1004107f1:
    QMetaObject::tr((char *)&local_2b0,PTR_staticMetaObject_1021e1520,0x1df35ad);
    FUN_10041e510(&local_2a8,&local_2b0,&local_80);
    FUN_10041e590(&local_78,&local_2a8);
    if (*(int *)(local_2a0 + 0x10) != -1) {
      if (*(int *)(local_2a0 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_2a0 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_29 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410868;
      }
      QHashData::free_helper(local_2a0);
    }
LAB_100410868:
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_29 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410897;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
LAB_100410897:
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_29 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100410eba;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
  }
LAB_100410eba:
  FUN_1003fab60();
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100410ef6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100410ef6:
  if (*(int *)(local_80 + 0x10) != -1) {
    if (*(int *)(local_80 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_80 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100410f25;
    }
    QHashData::free_helper(local_80);
  }
LAB_100410f25:
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      UNLOCK();
      if (*local_78 != 0) {
        return;
      }
      local_29 = 0;
    }
    FUN_10041c910(&local_78,local_78);
  }
  return;
}

