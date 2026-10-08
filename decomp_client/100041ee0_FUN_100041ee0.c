
void FUN_100041ee0(long param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  long lVar5;
  long lVar6;
  QString local_398;
  QString local_390;
  QString local_388;
  undefined8 local_380;
  undefined1 local_378 [8];
  QImage local_370 [32];
  undefined1 local_350 [8];
  QString local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  AnonymousUnion0 local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  AnonymousUnion0 local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  undefined1 local_290 [32];
  QArrayData *local_270;
  QString local_268;
  long local_260 [2];
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QString local_228;
  long local_220 [2];
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  QString local_138;
  QString local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  long local_108 [2];
  QString local_f8;
  long local_f0 [2];
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  undefined8 local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  if ((DAT_102311da8 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102311da8), iVar3 != 0)) {
    DAT_102311da0 = QString::fromAscii_helper(".tmp",4);
    ___cxa_atexit(FUN_100054e40,&DAT_102311da0,0x100000000);
    ___cxa_guard_release(&DAT_102311da8);
  }
  QString::append(&local_80);
  local_88.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0x1db677f);
  QString::append(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100041fee;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100041fee:
  local_90.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1db678f);
  QString::append(&local_90);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004205f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10004205f:
  local_98.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x1db67a3);
  QString::append(&local_98);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000420d0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000420d0:
  pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_a0,&local_a8);
  QDir::mkpath(&local_a0);
  QDir::~QDir((QDir *)&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042143;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100042143:
  cVar2 = FUN_100045a30(&local_80,&local_b0);
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QDir::QDir((QDir *)&local_b8,&local_c0);
  QDir::mkpath(&local_b8);
  QDir::~QDir((QDir *)&local_b8);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000421cc;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1000421cc:
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QDir::QDir((QDir *)&local_c8,&local_d0);
  QDir::mkpath(&local_c8);
  QDir::~QDir((QDir *)&local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004223b;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_10004223b:
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QDir::QDir((QDir *)&local_d8,&local_e0);
  QDir::mkpath(&local_d8);
  QDir::~QDir((QDir *)&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000422aa;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1000422aa:
  local_f8.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1db67ce);
  QString::append(&local_f8);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004231b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10004231b:
  QFile::QFile((QFile *)local_f0,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042364;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100042364:
  QFile::open(local_f0,3);
  QIODevice::write((char *)local_f0,0x101db67e0);
  (**(code **)(local_f0[0] + 0x70))(local_f0);
  local_110.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1db67e9);
  QString::append(&local_110);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004241b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10004241b:
  QFile::QFile((QFile *)local_108,&local_110);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042464;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100042464:
  QFile::open(local_108,3);
  QString::fromLocal8Bit_helper((char *)&local_120,0xe11350);
  QString::toUtf8();
  QIODevice::write((char *)local_108,(longlong)(local_118 + *(long *)(local_118 + 0x10)));
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000424f4;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_1000424f4:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004252a;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10004252a:
  (**(code **)(local_108[0] + 0x70))(local_108);
  FUN_100045e20(&local_80,1);
  FUN_10003ffa0(&local_128,param_3);
  local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_130.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
    local_31 = *(int *)local_130.field0_0x0 != 0;
    UNLOCK();
  }
  if (param_4 != '\0') {
    local_140 = (QArrayData *)QString::fromAscii_helper("/",1);
    QString::lastIndexOf(param_2,&local_140,0xffffffff,1);
    QString::right((int)&local_138);
    QString::operator=(&local_130,&local_138);
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_31 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004261a;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
LAB_10004261a:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100042650;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_100042650:
    QString::left((int)&local_148);
    QString::operator=(&local_130,&local_148);
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_31 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000426b9;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
  }
LAB_1000426b9:
  FUN_10003ffa0(&local_150,param_3 + 1);
  FUN_10003ffa0(&local_158);
  local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  lVar6 = param_3[2];
  iVar3 = *(int *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0xc) != iVar3) {
    local_168.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    lVar5 = lVar6 + 0x10 + (long)iVar3 * 8;
    lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      QString::fromLocal8Bit_helper((char *)&local_178,0xe11930);
      QString::arg(&local_170,&local_178,lVar5,0,0x20);
      QString::append(&local_168);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000427bb;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_1000427bb:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000427f1;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1000427f1:
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    QString::fromLocal8Bit_helper((char *)&local_188,0xe11950);
    QString::arg(&local_180,&local_188,&local_168,0,0x20);
    QString::operator=(&local_160,&local_180);
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100042889;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_100042889:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000428bf;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_1000428bf:
    pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_31 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000428fc;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
  }
LAB_1000428fc:
  lVar6 = param_3[3];
  iVar3 = *(int *)(lVar6 + 8);
  local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  if (*(int *)(lVar6 + 0xc) != iVar3) {
    lVar5 = lVar6 + 0x10 + (long)iVar3 * 8;
    lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      QString::fromLocal8Bit_helper((char *)&local_1a8,0xe11a20);
      QString::arg(&local_1a0,&local_1a8,lVar5,0,0x20);
      QString::toUpper();
      QString::arg(&local_198,&local_1a0,&local_1b0,0,0x20);
      QString::append(&local_190);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000429e8;
        }
        QArrayData::deallocate(local_198,2,8);
      }
LAB_1000429e8:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100042a1e;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
LAB_100042a1e:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100042a54;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100042a54:
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100042a8a;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_100042a8a:
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  FUN_1000463e0(&local_1b8,&local_128,(undefined8 *)(param_1 + 0x10),param_4);
  QString::fromLocal8Bit_helper((char *)&local_200,0xe11b50);
  FUN_10003ffa0(&local_208,&local_130);
  QString::arg(&local_1f8,&local_200,&local_208,0,0x20);
  QString::arg(&local_1f0,&local_1f8,&DAT_102310840,0,0x20);
  QString::arg(&local_1e8,&local_1f0,&local_150,0,0x20);
  QString::arg(&local_1e0,&local_1e8,&local_158,0,0x20);
  FUN_1000466a0(&local_210);
  QString::arg(&local_1d8,&local_1e0,&local_210,0,0x20);
  QString::arg(&local_1d0,&local_1d8,&local_1b8,0,0x20);
  QString::arg(&local_1c8,&local_1d0,&local_160,0,0x20);
  QString::arg(&local_1c0,&local_1c8,&local_190,0,0x20);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042c41;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100042c41:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042c77;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100042c77:
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042cad;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100042cad:
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042ce3;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100042ce3:
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042d19;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100042d19:
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042d4f;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100042d4f:
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042d85;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_100042d85:
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042dbb;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100042dbb:
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042df1;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100042df1:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042e27;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_100042e27:
  puVar1 = PTR_shared_null_1021e1288;
  local_228.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1db67f6);
  QString::append(&local_228);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042ea6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100042ea6:
  QFile::QFile((QFile *)local_220,&local_228);
  if (*(int *)local_228.field0_0x0 != -1) {
    if (*(int *)local_228.field0_0x0 != 0) {
      LOCK();
      *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
      local_31 = *(int *)local_228.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042eef;
    }
    QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
  }
LAB_100042eef:
  QFile::open(local_220,3);
  QString::toUtf8();
  QIODevice::write((char *)local_220,(longlong)(local_230 + *(long *)(local_230 + 0x10)));
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100042f67;
    }
    QArrayData::deallocate(local_230,1,8);
  }
LAB_100042f67:
  (**(code **)(local_220[0] + 0x70))(local_220);
  QString::fromLocal8Bit_helper((char *)&local_250,0xe12140);
  QString::arg(&local_248,&local_250,param_3,0,0x20);
  QString::arg(&local_240,&local_248,&local_130,0,0x20);
  QString::arg(&local_238,&local_240,&local_1b8,0,0x20);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004302b;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_10004302b:
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043061;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_100043061:
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043097;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100043097:
  local_268.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db680b);
  QString::append(&local_268);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043108;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100043108:
  QFile::QFile((QFile *)local_260,&local_268);
  if (*(int *)local_268.field0_0x0 != -1) {
    if (*(int *)local_268.field0_0x0 != 0) {
      LOCK();
      *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
      local_31 = *(int *)local_268.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043151;
    }
    QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
  }
LAB_100043151:
  QFile::open(local_260,3);
  QString::toUtf8();
  QIODevice::write((char *)local_260,(longlong)(local_270 + *(long *)(local_270 + 0x10)));
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000431c9;
    }
    QArrayData::deallocate(local_270,1,8);
  }
LAB_1000431c9:
  (**(code **)(local_260[0] + 0x70))(local_260);
  local_298 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b56ca0(local_290,&local_298);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004323b;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_10004323b:
  local_2a0 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_2a8 = (QArrayData *)QString::fromAscii_helper("Helper Version",0xe);
  pQVar4 = DAT_102310840;
  local_2b0 = DAT_102310840;
  if (1 < *(int *)DAT_102310840 + 1U) {
    LOCK();
    *(int *)DAT_102310840 = *(int *)DAT_102310840 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  FUN_100b573b0(local_290,&local_2a0,&local_2a8,&local_2b0);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000432e1;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_1000432e1:
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_31 = *(int *)local_2a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043317;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_100043317:
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004334d;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_10004334d:
  local_2b8 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_2c0 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
  local_2c8 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)local_2c8 + 1U) {
    LOCK();
    *(int *)local_2c8 = *(int *)local_2c8 + 1;
    local_31 = *(int *)local_2c8 != 0;
    UNLOCK();
  }
  FUN_100b573b0(local_290,&local_2b8,&local_2c0,&local_2c8);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000433ef;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1000433ef:
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043425;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_100043425:
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004345b;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_10004345b:
  local_2d0 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_2d8 = (QArrayData *)QString::fromAscii_helper("VM Name",7);
  local_2e0 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_2e0 + 1U) {
    LOCK();
    *(int *)local_2e0 = *(int *)local_2e0 + 1;
    local_31 = *(int *)local_2e0 != 0;
    UNLOCK();
  }
  FUN_100b573b0(local_290,&local_2d0,&local_2d8,&local_2e0);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043504;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_100043504:
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004353a;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_10004353a:
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043570;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_100043570:
  local_2e8 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_2f0 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
  local_2f8 = (QArrayData *)param_3[1];
  if (1 < *(int *)local_2f8 + 1U) {
    LOCK();
    *(int *)local_2f8 = *(int *)local_2f8 + 1;
    local_31 = *(int *)local_2f8 != 0;
    UNLOCK();
  }
  FUN_100b573b0(local_290,&local_2e8,&local_2f0,&local_2f8);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043619;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_100043619:
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004364f;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_10004364f:
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043685;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_100043685:
  local_300 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_308 = (QArrayData *)QString::fromAscii_helper("Protocols",9);
  pQVar4 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_310.field0,(QChar *)(param_3 + 2),
             (int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
  FUN_100b573b0(local_290,&local_300,&local_308,&local_310);
  if (*(int *)local_310.field1 != -1) {
    if (*(int *)local_310.field1 != 0) {
      LOCK();
      *(int *)local_310.field1 = *(int *)local_310.field1 + -1;
      local_31 = *(int *)local_310.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004373e;
    }
    QArrayData::deallocate((QArrayData *)local_310.field1,2,8);
  }
LAB_10004373e:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043769;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100043769:
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004379f;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_10004379f:
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000437d5;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_1000437d5:
  local_318 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_320 = (QArrayData *)QString::fromAscii_helper("File Extensions",0xf);
  pQVar4 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_328.field0,(QChar *)(param_3 + 3),
             (int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
  FUN_100b573b0(local_290,&local_318,&local_320,&local_328);
  if (*(int *)local_328.field1 != -1) {
    if (*(int *)local_328.field1 != 0) {
      LOCK();
      *(int *)local_328.field1 = *(int *)local_328.field1 + -1;
      local_31 = *(int *)local_328.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004388b;
    }
    QArrayData::deallocate((QArrayData *)local_328.field1,2,8);
  }
LAB_10004388b:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000438b6;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000438b6:
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000438ef;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_1000438ef:
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_31 = *(int *)local_318 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043925;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_100043925:
  if (param_4 != '\0') {
    local_330 = (QArrayData *)QString::fromAscii_helper("System",6);
    local_338 = (QArrayData *)QString::fromAscii_helper("Fake Stub",9);
    local_340 = (QArrayData *)QString::fromAscii_helper("1",1);
    FUN_100b573b0(local_290,&local_330,&local_338,&local_340);
    if (*(int *)local_340 != -1) {
      if (*(int *)local_340 != 0) {
        LOCK();
        *(int *)local_340 = *(int *)local_340 + -1;
        local_31 = *(int *)local_340 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000439cd;
      }
      QArrayData::deallocate(local_340,2,8);
    }
LAB_1000439cd:
    if (*(int *)local_338 != -1) {
      if (*(int *)local_338 != 0) {
        LOCK();
        *(int *)local_338 = *(int *)local_338 + -1;
        local_31 = *(int *)local_338 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100043a03;
      }
      QArrayData::deallocate(local_338,2,8);
    }
LAB_100043a03:
    if (*(int *)local_330 != -1) {
      if (*(int *)local_330 != 0) {
        LOCK();
        *(int *)local_330 = *(int *)local_330 + -1;
        local_31 = *(int *)local_330 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100043a39;
      }
      QArrayData::deallocate(local_330,2,8);
    }
  }
LAB_100043a39:
  local_348.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db6890);
  QString::append(&local_348);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043aaa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100043aaa:
  FUN_100b57cc0(local_290,&local_348);
  if (*(int *)local_348.field0_0x0 != -1) {
    if (*(int *)local_348.field0_0x0 != 0) {
      LOCK();
      *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
      local_31 = *(int *)local_348.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043af3;
    }
    QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
  }
LAB_100043af3:
  if (param_4 == '\0') {
    if ((param_3[4] == 0) || (lVar6 = *(long *)(param_3[4] + 0x10), lVar6 == 0)) {
      FUN_100ab74e0(local_378,"SharedAppIconDefault");
      FUN_1000468e0(&local_80,local_378,param_3[6]);
      FUN_100ab75f0(local_378);
    }
    else {
      FUN_1000468e0(&local_80,lVar6,param_3[6]);
    }
    FUN_100046ee0(&local_80,param_3);
  }
  else {
    FUN_100ab71b0(local_350);
    QImage::QImage(local_370,(QString *)(param_1 + 0x20),(char *)0x0);
    FUN_100ab7660(local_350,local_370);
    QImage::~QImage(local_370);
    FUN_1000468e0(&local_80,local_350,0);
    FUN_100ab75f0(local_350);
  }
  if (cVar2 != '\0') {
    local_380 = local_b0;
    FUN_100045a30(&local_80,0);
  }
  QString::chop((int)&local_80);
  local_390.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QDir::QDir((QDir *)&local_388,&local_390);
  local_398.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_398);
  QDir::rename(&local_388,&local_398);
  if (*(int *)local_398.field0_0x0 != -1) {
    if (*(int *)local_398.field0_0x0 != 0) {
      LOCK();
      *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + -1;
      local_31 = *(int *)local_398.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043c8e;
    }
    QArrayData::deallocate((QArrayData *)local_398.field0_0x0,2,8);
  }
LAB_100043c8e:
  QDir::~QDir((QDir *)&local_388);
  if (*(int *)local_390.field0_0x0 != -1) {
    if (*(int *)local_390.field0_0x0 != 0) {
      LOCK();
      *(int *)local_390.field0_0x0 = *(int *)local_390.field0_0x0 + -1;
      local_31 = *(int *)local_390.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043cd0;
    }
    QArrayData::deallocate((QArrayData *)local_390.field0_0x0,2,8);
  }
LAB_100043cd0:
  FUN_100047600(param_1,&local_80);
  FUN_100b57060(local_290);
  QFile::~QFile((QFile *)local_260);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043d2a;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_100043d2a:
  QFile::~QFile((QFile *)local_220);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043d6c;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100043d6c:
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043da2;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100043da2:
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043dd8;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_100043dd8:
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043e0e;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_100043e0e:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043e44;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100043e44:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043e7a;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100043e7a:
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043eb0;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_100043eb0:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043ee6;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100043ee6:
  QFile::~QFile((QFile *)local_108);
  QFile::~QFile((QFile *)local_f0);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043f34;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100043f34:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043f6a;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100043f6a:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043f9a;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100043f9a:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_80.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
  return;
}

