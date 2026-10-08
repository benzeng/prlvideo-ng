
QString * FUN_100b67ed0(QString *param_1,long param_2,byte param_3,byte param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  QString local_478;
  QArrayData *local_470;
  QString local_468;
  QArrayData *local_460;
  QString local_458;
  QArrayData *local_450;
  QDateTime local_448;
  QString local_440;
  QString local_438;
  QString local_430;
  QString local_428;
  QArrayData *local_420;
  QString local_418;
  QArrayData *local_410;
  QString local_408;
  QArrayData *local_400;
  QDateTime local_3f8;
  QString local_3f0;
  QString local_3e8;
  QString local_3e0;
  QString local_3d8;
  QString local_3d0;
  QArrayData *local_3c8;
  QString local_3c0;
  QString local_3b8;
  QString local_3b0;
  QString local_3a8;
  QString local_3a0;
  QString local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QString local_380;
  QArrayData *local_378;
  QArrayData *local_370;
  QString local_368;
  QArrayData *local_360;
  QString local_358;
  QString local_350;
  QString local_348;
  QString local_340;
  QString local_338;
  QString local_330;
  QString local_328;
  QString local_320;
  QArrayData *local_318;
  QDateTime local_310;
  QString local_308;
  QString local_300;
  QArrayData *local_2f8;
  QDateTime local_2f0;
  QString local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  QString local_2d0;
  QArrayData *local_2c8;
  QString local_2c0;
  QArrayData *local_2b8;
  QString local_2b0;
  QArrayData *local_2a8;
  QString local_2a0;
  QArrayData *local_298;
  QString local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
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
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
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
  undefined1 local_31;
  
  local_288 = (QArrayData *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar5 = FUN_100b66ab0(param_2);
  QString::fromUtf8_helper((char *)&local_280,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b67f73;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_100b67f73:
  uVar6 = FUN_100de83f0(uVar5);
  QString::sprintf((char *)&local_288,"Code = %s (0x%X)",uVar6,(ulong)uVar5);
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_278,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b67fff;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_100b67fff:
  local_290.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("serial",6);
  plVar1 = (long *)(param_2 + 0x18);
  bVar4 = 0;
  if (*(long *)(*plVar1 + 0x10) != 0) {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_290), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b68076;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) {
      bVar4 = 0;
    }
    else {
LAB_100b68076:
      bVar4 = operator<(&local_290,(QString *)(lVar7 + 0x18));
      bVar4 = (bVar4 ^ 1) & param_3 & param_4;
    }
  }
  if (*(int *)local_290.field0_0x0 != -1) {
    if (*(int *)local_290.field0_0x0 != 0) {
      LOCK();
      *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
      local_31 = *(int *)local_290.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b680dc;
    }
    QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
  }
LAB_100b680dc:
  if (bVar4 != 0) {
    QString::fromUtf8_helper((char *)&local_270,0x1ed82e4);
    QString::append(param_1);
    if (*(int *)local_270 != -1) {
      if (*(int *)local_270 != 0) {
        LOCK();
        *(int *)local_270 = *(int *)local_270 + -1;
        local_31 = *(int *)local_270 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68142;
      }
      QArrayData::deallocate(local_270,2,8);
    }
LAB_100b68142:
    QString::toLatin1();
    if ((1 < *(uint *)local_298) || (*(long *)(local_298 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_298,*(uint *)(local_298 + 4) + 1,*(uint *)(local_298 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_298 + *(long *)(local_298 + 0x10));
    QString::append(param_1);
    if (*(int *)local_298 != -1) {
      if (*(int *)local_298 != 0) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + -1;
        local_31 = *(int *)local_298 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b681e4;
      }
      QArrayData::deallocate(local_298,1,8);
    }
LAB_100b681e4:
    QString::fromUtf8_helper((char *)&local_268,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_268 != -1) {
      if (*(int *)local_268 != 0) {
        LOCK();
        *(int *)local_268 = *(int *)local_268 + -1;
        local_31 = *(int *)local_268 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68241;
      }
      QArrayData::deallocate(local_268,2,8);
    }
  }
LAB_100b68241:
  local_2a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("version",7);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b682ca:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_2a0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b682b6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b682ca;
LAB_100b682b6:
    cVar3 = operator<(&local_2a0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b682ca;
  }
  if (*(int *)local_2a0.field0_0x0 != -1) {
    if (*(int *)local_2a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2a0.field0_0x0 = *(int *)local_2a0.field0_0x0 + -1;
      local_31 = *(int *)local_2a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b68302;
    }
    QArrayData::deallocate((QArrayData *)local_2a0.field0_0x0,2,8);
  }
LAB_100b68302:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_260,0x1ed82ee);
    QString::append(param_1);
    if (*(int *)local_260 != -1) {
      if (*(int *)local_260 != 0) {
        LOCK();
        *(int *)local_260 = *(int *)local_260 + -1;
        local_31 = *(int *)local_260 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68368;
      }
      QArrayData::deallocate(local_260,2,8);
    }
LAB_100b68368:
    QString::toLatin1();
    if ((1 < *(uint *)local_2a8) || (*(long *)(local_2a8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_2a8,*(uint *)(local_2a8 + 4) + 1,*(uint *)(local_2a8 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_2a8 + *(long *)(local_2a8 + 0x10));
    QString::append(param_1);
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_31 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6840a;
      }
      QArrayData::deallocate(local_2a8,1,8);
    }
LAB_100b6840a:
    QString::fromUtf8_helper((char *)&local_258,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_31 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68467;
      }
      QArrayData::deallocate(local_258,2,8);
    }
  }
LAB_100b68467:
  local_2b0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("owner_name",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b684ea:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_2b0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b684d6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b684ea;
LAB_100b684d6:
    cVar3 = operator<(&local_2b0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b684ea;
  }
  if (*(int *)local_2b0.field0_0x0 != -1) {
    if (*(int *)local_2b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
      local_31 = *(int *)local_2b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b68528;
    }
    QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
  }
LAB_100b68528:
  if ((lVar7 != 0 & param_4) != 0) {
    QString::fromUtf8_helper((char *)&local_250,0x1ed8304);
    QString::append(param_1);
    if (*(int *)local_250 != -1) {
      if (*(int *)local_250 != 0) {
        LOCK();
        *(int *)local_250 = *(int *)local_250 + -1;
        local_31 = *(int *)local_250 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68593;
      }
      QArrayData::deallocate(local_250,2,8);
    }
LAB_100b68593:
    QString::toLatin1();
    if ((1 < *(uint *)local_2b8) || (*(long *)(local_2b8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_2b8,*(uint *)(local_2b8 + 4) + 1,*(uint *)(local_2b8 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_2b8 + *(long *)(local_2b8 + 0x10));
    QString::append(param_1);
    if (*(int *)local_2b8 != -1) {
      if (*(int *)local_2b8 != 0) {
        LOCK();
        *(int *)local_2b8 = *(int *)local_2b8 + -1;
        local_31 = *(int *)local_2b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68635;
      }
      QArrayData::deallocate(local_2b8,1,8);
    }
LAB_100b68635:
    QString::fromUtf8_helper((char *)&local_248,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68692;
      }
      QArrayData::deallocate(local_248,2,8);
    }
  }
LAB_100b68692:
  local_2c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("owner_id",8);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6871a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_2c0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b68706;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6871a;
LAB_100b68706:
    cVar3 = operator<(&local_2c0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6871a;
  }
  if (*(int *)local_2c0.field0_0x0 != -1) {
    if (*(int *)local_2c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
      local_31 = *(int *)local_2c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b68758;
    }
    QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
  }
LAB_100b68758:
  if ((lVar7 != 0 & param_4) != 0) {
    QString::fromUtf8_helper((char *)&local_240,0x1ed831b);
    QString::append(param_1);
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_31 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b687c3;
      }
      QArrayData::deallocate(local_240,2,8);
    }
LAB_100b687c3:
    QString::toLatin1();
    if ((1 < *(uint *)local_2c8) || (*(long *)(local_2c8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_2c8,*(uint *)(local_2c8 + 4) + 1,*(uint *)(local_2c8 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_2c8 + *(long *)(local_2c8 + 0x10));
    QString::append(param_1);
    if (*(int *)local_2c8 != -1) {
      if (*(int *)local_2c8 != 0) {
        LOCK();
        *(int *)local_2c8 = *(int *)local_2c8 + -1;
        local_31 = *(int *)local_2c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68865;
      }
      QArrayData::deallocate(local_2c8,1,8);
    }
LAB_100b68865:
    QString::fromUtf8_helper((char *)&local_238,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_238 != -1) {
      if (*(int *)local_238 != 0) {
        LOCK();
        *(int *)local_238 = *(int *)local_238 + -1;
        local_31 = *(int *)local_238 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b688c2;
      }
      QArrayData::deallocate(local_238,2,8);
    }
  }
LAB_100b688c2:
  local_2d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("hwid",4);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6894a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_2d0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b68936;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6894a;
LAB_100b68936:
    cVar3 = operator<(&local_2d0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6894a;
  }
  if (*(int *)local_2d0.field0_0x0 != -1) {
    if (*(int *)local_2d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
      local_31 = *(int *)local_2d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b68988;
    }
    QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
  }
LAB_100b68988:
  if ((lVar7 != 0 & param_4) != 0) {
    QString::fromUtf8_helper((char *)&local_230,0x1ed832c);
    QString::append(param_1);
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_31 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b689f3;
      }
      QArrayData::deallocate(local_230,2,8);
    }
LAB_100b689f3:
    QString::toLatin1();
    if ((1 < *(uint *)local_2d8) || (*(long *)(local_2d8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_2d8,*(uint *)(local_2d8 + 4) + 1,*(uint *)(local_2d8 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_2d8 + *(long *)(local_2d8 + 0x10));
    QString::append(param_1);
    if (*(int *)local_2d8 != -1) {
      if (*(int *)local_2d8 != 0) {
        LOCK();
        *(int *)local_2d8 = *(int *)local_2d8 + -1;
        local_31 = *(int *)local_2d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68a95;
      }
      QArrayData::deallocate(local_2d8,1,8);
    }
LAB_100b68a95:
    QString::fromUtf8_helper((char *)&local_228,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_228 != -1) {
      if (*(int *)local_228 != 0) {
        LOCK();
        *(int *)local_228 = *(int *)local_228 + -1;
        local_31 = *(int *)local_228 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68af2;
      }
      QArrayData::deallocate(local_228,2,8);
    }
  }
LAB_100b68af2:
  local_2e0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("start_date",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b68b7a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_2e0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b68b66;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b68b7a;
LAB_100b68b66:
    cVar3 = operator<(&local_2e0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b68b7a;
  }
  if (*(int *)local_2e0.field0_0x0 != -1) {
    if (*(int *)local_2e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
      local_31 = *(int *)local_2e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b68bb2;
    }
    QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
  }
LAB_100b68bb2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_220,0x1ed833f);
    QString::append(param_1);
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_31 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68c18;
      }
      QArrayData::deallocate(local_220,2,8);
    }
LAB_100b68c18:
    QDateTime::toTimeSpec(&local_2f0,param_2 + 0x58,0);
    local_2f8 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
    QDateTime::toString(&local_2e8);
    QString::append(param_1);
    if (*(int *)local_2e8.field0_0x0 != -1) {
      if (*(int *)local_2e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + -1;
        local_31 = *(int *)local_2e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68ca8;
      }
      QArrayData::deallocate((QArrayData *)local_2e8.field0_0x0,2,8);
    }
LAB_100b68ca8:
    if (*(int *)local_2f8 != -1) {
      if (*(int *)local_2f8 != 0) {
        LOCK();
        *(int *)local_2f8 = *(int *)local_2f8 + -1;
        local_31 = *(int *)local_2f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68cde;
      }
      QArrayData::deallocate(local_2f8,2,8);
    }
LAB_100b68cde:
    QDateTime::~QDateTime(&local_2f0);
    QString::fromUtf8_helper((char *)&local_218,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68d47;
      }
      QArrayData::deallocate(local_218,2,8);
    }
  }
LAB_100b68d47:
  local_300.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("expiration",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b68dca:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_300), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b68db6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b68dca;
LAB_100b68db6:
    cVar3 = operator<(&local_300,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b68dca;
  }
  if (*(int *)local_300.field0_0x0 != -1) {
    if (*(int *)local_300.field0_0x0 != 0) {
      LOCK();
      *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
      local_31 = *(int *)local_300.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b68e02;
    }
    QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
  }
LAB_100b68e02:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_210,0x1ed8358);
    QString::append(param_1);
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_31 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b68e68;
      }
      QArrayData::deallocate(local_210,2,8);
    }
LAB_100b68e68:
    if (*(char *)(param_2 + 0x48) == '\0') {
      QDateTime::toTimeSpec(&local_310,param_2 + 0x50,0);
      local_318 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
      QDateTime::toString(&local_308);
      QString::append(param_1);
      if (*(int *)local_308.field0_0x0 != -1) {
        if (*(int *)local_308.field0_0x0 != 0) {
          LOCK();
          *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
          local_31 = *(int *)local_308.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b68f68;
        }
        QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
      }
LAB_100b68f68:
      if (*(int *)local_318 != -1) {
        if (*(int *)local_318 != 0) {
          LOCK();
          *(int *)local_318 = *(int *)local_318 + -1;
          local_31 = *(int *)local_318 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b68f9e;
        }
        QArrayData::deallocate(local_318,2,8);
      }
LAB_100b68f9e:
      QDateTime::~QDateTime(&local_310);
    }
    else {
      QString::fromUtf8_helper((char *)&local_208,0x1df4d52);
      QString::append(param_1);
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_31 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b68faa;
        }
        QArrayData::deallocate(local_208,2,8);
      }
    }
LAB_100b68faa:
    QString::fromUtf8_helper((char *)&local_200,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_31 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69007;
      }
      QArrayData::deallocate(local_200,2,8);
    }
  }
LAB_100b69007:
  local_320.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("cpu_total",9)
  ;
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6908a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_320), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69076;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6908a;
LAB_100b69076:
    cVar3 = operator<(&local_320,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6908a;
  }
  if (*(int *)local_320.field0_0x0 != -1) {
    if (*(int *)local_320.field0_0x0 != 0) {
      LOCK();
      *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
      local_31 = *(int *)local_320.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b690c2;
    }
    QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
  }
LAB_100b690c2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_1f8,0x1ed8375);
    QString::append(param_1);
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69128;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
LAB_100b69128:
    QString::sprintf((char *)&local_288," %u",(ulong)*(uint *)(param_2 + 0x7c));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_1f0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b691af;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
  }
LAB_100b691af:
  local_328.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ct_total",8);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6922a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_328), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69216;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6922a;
LAB_100b69216:
    cVar3 = operator<(&local_328,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6922a;
  }
  if (*(int *)local_328.field0_0x0 != -1) {
    if (*(int *)local_328.field0_0x0 != 0) {
      LOCK();
      *(int *)local_328.field0_0x0 = *(int *)local_328.field0_0x0 + -1;
      local_31 = *(int *)local_328.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69262;
    }
    QArrayData::deallocate((QArrayData *)local_328.field0_0x0,2,8);
  }
LAB_100b69262:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_1e8,0x1ed838a);
    QString::append(param_1);
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b692c8;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
LAB_100b692c8:
    QString::sprintf((char *)&local_288," %u",(ulong)*(uint *)(param_2 + 0x80));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_1e0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69352;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
  }
LAB_100b69352:
  local_330.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("nr_mem",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b693da:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_330), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b693c6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b693da;
LAB_100b693c6:
    cVar3 = operator<(&local_330,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b693da;
  }
  if (*(int *)local_330.field0_0x0 != -1) {
    if (*(int *)local_330.field0_0x0 != 0) {
      LOCK();
      *(int *)local_330.field0_0x0 = *(int *)local_330.field0_0x0 + -1;
      local_31 = *(int *)local_330.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69412;
    }
    QArrayData::deallocate((QArrayData *)local_330.field0_0x0,2,8);
  }
LAB_100b69412:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_1d8,0x1ed839d);
    QString::append(param_1);
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_31 = *(int *)local_1d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69478;
      }
      QArrayData::deallocate(local_1d8,2,8);
    }
LAB_100b69478:
    QString::sprintf((char *)&local_288," %u",(ulong)*(uint *)(param_2 + 0x84));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_1d0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1d0 != -1) {
      if (*(int *)local_1d0 != 0) {
        LOCK();
        *(int *)local_1d0 = *(int *)local_1d0 + -1;
        local_31 = *(int *)local_1d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69502;
      }
      QArrayData::deallocate(local_1d0,2,8);
    }
  }
LAB_100b69502:
  local_338.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vtd_allowed",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6958a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_338), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69576;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6958a;
LAB_100b69576:
    cVar3 = operator<(&local_338,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6958a;
  }
  if (*(int *)local_338.field0_0x0 != -1) {
    if (*(int *)local_338.field0_0x0 != 0) {
      LOCK();
      *(int *)local_338.field0_0x0 = *(int *)local_338.field0_0x0 + -1;
      local_31 = *(int *)local_338.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b695c2;
    }
    QArrayData::deallocate((QArrayData *)local_338.field0_0x0,2,8);
  }
LAB_100b695c2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_1c8,0x1ed83b7);
    QString::append(param_1);
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69628;
      }
      QArrayData::deallocate(local_1c8,2,8);
    }
LAB_100b69628:
    QString::sprintf((char *)&local_288," %u",(ulong)*(uint *)(param_2 + 0x88));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_1c0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_31 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b696b2;
      }
      QArrayData::deallocate(local_1c0,2,8);
    }
  }
LAB_100b696b2:
  local_340.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("graceperiod",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6973a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_340), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69726;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6973a;
LAB_100b69726:
    cVar3 = operator<(&local_340,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6973a;
  }
  if (*(int *)local_340.field0_0x0 != -1) {
    if (*(int *)local_340.field0_0x0 != 0) {
      LOCK();
      *(int *)local_340.field0_0x0 = *(int *)local_340.field0_0x0 + -1;
      local_31 = *(int *)local_340.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69772;
    }
    QArrayData::deallocate((QArrayData *)local_340.field0_0x0,2,8);
  }
LAB_100b69772:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_1b8,0x1ed83d5);
    QString::append(param_1);
    if (*(int *)local_1b8 != -1) {
      if (*(int *)local_1b8 != 0) {
        LOCK();
        *(int *)local_1b8 = *(int *)local_1b8 + -1;
        local_31 = *(int *)local_1b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b697d8;
      }
      QArrayData::deallocate(local_1b8,2,8);
    }
LAB_100b697d8:
    QString::sprintf((char *)&local_288," %u",(ulong)*(uint *)(param_2 + 0x78));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_1b0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_31 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6985f;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
  }
LAB_100b6985f:
  local_348.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("max_vzmc_users",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b698da:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_348), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b698c6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b698da;
LAB_100b698c6:
    cVar3 = operator<(&local_348,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b698da;
  }
  if (*(int *)local_348.field0_0x0 != -1) {
    if (*(int *)local_348.field0_0x0 != 0) {
      LOCK();
      *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
      local_31 = *(int *)local_348.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69912;
    }
    QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
  }
LAB_100b69912:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_1a8,0x1ed83f4);
    QString::append(param_1);
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69978;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
LAB_100b69978:
    QString::sprintf((char *)&local_288,"%llu",*(undefined8 *)(param_2 + 0x90));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_1a0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69a03;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
  }
LAB_100b69a03:
  local_350.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("max_vzcc_users",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b69a8a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_350), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69a76;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b69a8a;
LAB_100b69a76:
    cVar3 = operator<(&local_350,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b69a8a;
  }
  if (*(int *)local_350.field0_0x0 != -1) {
    if (*(int *)local_350.field0_0x0 != 0) {
      LOCK();
      *(int *)local_350.field0_0x0 = *(int *)local_350.field0_0x0 + -1;
      local_31 = *(int *)local_350.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69ac2;
    }
    QArrayData::deallocate((QArrayData *)local_350.field0_0x0,2,8);
  }
LAB_100b69ac2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_198,0x1ed8415);
    QString::append(param_1);
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69b28;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_100b69b28:
    QString::sprintf((char *)&local_288,"%llu",*(undefined8 *)(param_2 + 0x98));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_190,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69bb3;
      }
      QArrayData::deallocate(local_190,2,8);
    }
  }
LAB_100b69bb3:
  local_358.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("architecture",0xc);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b69c3a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_358), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69c26;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b69c3a;
LAB_100b69c26:
    cVar3 = operator<(&local_358,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b69c3a;
  }
  if (*(int *)local_358.field0_0x0 != -1) {
    if (*(int *)local_358.field0_0x0 != 0) {
      LOCK();
      *(int *)local_358.field0_0x0 = *(int *)local_358.field0_0x0 + -1;
      local_31 = *(int *)local_358.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69c72;
    }
    QArrayData::deallocate((QArrayData *)local_358.field0_0x0,2,8);
  }
LAB_100b69c72:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_188,0x1ed8427);
    QString::append(param_1);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69cd8;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100b69cd8:
    QString::toLatin1();
    if ((1 < *(uint *)local_360) || (*(long *)(local_360 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_360,*(uint *)(local_360 + 4) + 1,*(uint *)(local_360 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_360 + *(long *)(local_360 + 0x10));
    QString::append(param_1);
    if (*(int *)local_360 != -1) {
      if (*(int *)local_360 != 0) {
        LOCK();
        *(int *)local_360 = *(int *)local_360 + -1;
        local_31 = *(int *)local_360 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69d7d;
      }
      QArrayData::deallocate(local_360,1,8);
    }
LAB_100b69d7d:
    QString::fromUtf8_helper((char *)&local_180,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69dda;
      }
      QArrayData::deallocate(local_180,2,8);
    }
  }
LAB_100b69dda:
  local_368.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("platform",8);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b69e5a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_368), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b69e46;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b69e5a;
LAB_100b69e46:
    cVar3 = operator<(&local_368,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b69e5a;
  }
  if (*(int *)local_368.field0_0x0 != -1) {
    if (*(int *)local_368.field0_0x0 != 0) {
      LOCK();
      *(int *)local_368.field0_0x0 = *(int *)local_368.field0_0x0 + -1;
      local_31 = *(int *)local_368.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b69e92;
    }
    QArrayData::deallocate((QArrayData *)local_368.field0_0x0,2,8);
  }
LAB_100b69e92:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_178,0x1ed8431);
    QString::append(param_1);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69ef8;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100b69ef8:
    local_378 = (QArrayData *)QString::fromAscii_helper("platform",8);
    FUN_1006f3180(plVar1,&local_378);
    QString::toLatin1();
    if ((1 < *(uint *)local_370) || (*(long *)(local_370 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_370,*(uint *)(local_370 + 4) + 1,*(uint *)(local_370 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_370 + *(long *)(local_370 + 0x10));
    QString::append(param_1);
    if (*(int *)local_370 != -1) {
      if (*(int *)local_370 != 0) {
        LOCK();
        *(int *)local_370 = *(int *)local_370 + -1;
        local_31 = *(int *)local_370 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69fb9;
      }
      QArrayData::deallocate(local_370,1,8);
    }
LAB_100b69fb9:
    if (*(int *)local_378 != -1) {
      if (*(int *)local_378 != 0) {
        LOCK();
        *(int *)local_378 = *(int *)local_378 + -1;
        local_31 = *(int *)local_378 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b69fef;
      }
      QArrayData::deallocate(local_378,2,8);
    }
LAB_100b69fef:
    QString::fromUtf8_helper((char *)&local_170,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a04c;
      }
      QArrayData::deallocate(local_170,2,8);
    }
  }
LAB_100b6a04c:
  local_380.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("product",7);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6a0ca:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_380), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6a0b6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6a0ca;
LAB_100b6a0b6:
    cVar3 = operator<(&local_380,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6a0ca;
  }
  if (*(int *)local_380.field0_0x0 != -1) {
    if (*(int *)local_380.field0_0x0 != 0) {
      LOCK();
      *(int *)local_380.field0_0x0 = *(int *)local_380.field0_0x0 + -1;
      local_31 = *(int *)local_380.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6a102;
    }
    QArrayData::deallocate((QArrayData *)local_380.field0_0x0,2,8);
  }
LAB_100b6a102:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_168,0x1ed843d);
    QString::append(param_1);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a168;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100b6a168:
    local_390 = (QArrayData *)QString::fromAscii_helper("product",7);
    FUN_1006f3180(plVar1,&local_390);
    QString::toLatin1();
    if ((1 < *(uint *)local_388) || (*(long *)(local_388 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_388,*(uint *)(local_388 + 4) + 1,*(uint *)(local_388 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_388 + *(long *)(local_388 + 0x10));
    QString::append(param_1);
    if (*(int *)local_388 != -1) {
      if (*(int *)local_388 != 0) {
        LOCK();
        *(int *)local_388 = *(int *)local_388 + -1;
        local_31 = *(int *)local_388 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a229;
      }
      QArrayData::deallocate(local_388,1,8);
    }
LAB_100b6a229:
    if (*(int *)local_390 != -1) {
      if (*(int *)local_390 != 0) {
        LOCK();
        *(int *)local_390 = *(int *)local_390 + -1;
        local_31 = *(int *)local_390 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a25f;
      }
      QArrayData::deallocate(local_390,2,8);
    }
LAB_100b6a25f:
    QString::fromUtf8_helper((char *)&local_160,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a2bc;
      }
      QArrayData::deallocate(local_160,2,8);
    }
  }
LAB_100b6a2bc:
  local_398.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vzpp_allowed",0xc);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6a33a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_398), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6a326;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6a33a;
LAB_100b6a326:
    cVar3 = operator<(&local_398,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6a33a;
  }
  if (*(int *)local_398.field0_0x0 != -1) {
    if (*(int *)local_398.field0_0x0 != 0) {
      LOCK();
      *(int *)local_398.field0_0x0 = *(int *)local_398.field0_0x0 + -1;
      local_31 = *(int *)local_398.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6a372;
    }
    QArrayData::deallocate((QArrayData *)local_398.field0_0x0,2,8);
  }
LAB_100b6a372:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_158,0x1ed8455);
    QString::append(param_1);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a3d8;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100b6a3d8:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xb0));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_150,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a462;
      }
      QArrayData::deallocate(local_150,2,8);
    }
  }
LAB_100b6a462:
  local_3a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("backup_mgmt_allowed",0x13);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6a4ea:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3a0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6a4d6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6a4ea;
LAB_100b6a4d6:
    cVar3 = operator<(&local_3a0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6a4ea;
  }
  if (*(int *)local_3a0.field0_0x0 != -1) {
    if (*(int *)local_3a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3a0.field0_0x0 = *(int *)local_3a0.field0_0x0 + -1;
      local_31 = *(int *)local_3a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6a522;
    }
    QArrayData::deallocate((QArrayData *)local_3a0.field0_0x0,2,8);
  }
LAB_100b6a522:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_148,0x1ed8479);
    QString::append(param_1);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a588;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100b6a588:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xb4));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_140,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a612;
      }
      QArrayData::deallocate(local_140,2,8);
    }
  }
LAB_100b6a612:
  local_3a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("workflow_mgmt_allowed",0x15);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6a69a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3a8), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6a686;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6a69a;
LAB_100b6a686:
    cVar3 = operator<(&local_3a8,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6a69a;
  }
  if (*(int *)local_3a8.field0_0x0 != -1) {
    if (*(int *)local_3a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3a8.field0_0x0 = *(int *)local_3a8.field0_0x0 + -1;
      local_31 = *(int *)local_3a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6a6d2;
    }
    QArrayData::deallocate((QArrayData *)local_3a8.field0_0x0,2,8);
  }
LAB_100b6a6d2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_138,0x1ed849e);
    QString::append(param_1);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a738;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_100b6a738:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xb8));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_130,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a7c2;
      }
      QArrayData::deallocate(local_130,2,8);
    }
  }
LAB_100b6a7c2:
  local_3b0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("rku_allowed",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6a84a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3b0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6a836;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6a84a;
LAB_100b6a836:
    cVar3 = operator<(&local_3b0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6a84a;
  }
  if (*(int *)local_3b0.field0_0x0 != -1) {
    if (*(int *)local_3b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3b0.field0_0x0 = *(int *)local_3b0.field0_0x0 + -1;
      local_31 = *(int *)local_3b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6a882;
    }
    QArrayData::deallocate((QArrayData *)local_3b0.field0_0x0,2,8);
  }
LAB_100b6a882:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_128,0x1ed84bb);
    QString::append(param_1);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a8e8;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100b6a8e8:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xd8));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_120,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6a972;
      }
      QArrayData::deallocate(local_120,2,8);
    }
  }
LAB_100b6a972:
  local_3b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ha_allowed",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6a9fa:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3b8), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6a9e6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6a9fa;
LAB_100b6a9e6:
    cVar3 = operator<(&local_3b8,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6a9fa;
  }
  if (*(int *)local_3b8.field0_0x0 != -1) {
    if (*(int *)local_3b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
      local_31 = *(int *)local_3b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6aa32;
    }
    QArrayData::deallocate((QArrayData *)local_3b8.field0_0x0,2,8);
  }
LAB_100b6aa32:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_118,0x1ed84d5);
    QString::append(param_1);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6aa98;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_100b6aa98:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xdc));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_110,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6ab22;
      }
      QArrayData::deallocate(local_110,2,8);
    }
  }
LAB_100b6ab22:
  local_3c0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number",10);
  bVar4 = 0;
  if (*(long *)(*plVar1 + 0x10) != 0) {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3c0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6ab96;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) {
      bVar4 = 0;
    }
    else {
LAB_100b6ab96:
      bVar4 = operator<(&local_3c0,(QString *)(lVar7 + 0x18));
      bVar4 = (bVar4 ^ 1) & param_3 & param_4;
    }
  }
  if (*(int *)local_3c0.field0_0x0 != -1) {
    if (*(int *)local_3c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + -1;
      local_31 = *(int *)local_3c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6abfc;
    }
    QArrayData::deallocate((QArrayData *)local_3c0.field0_0x0,2,8);
  }
LAB_100b6abfc:
  if (bVar4 != 0) {
    QString::fromUtf8_helper((char *)&local_108,0x1ed84ee);
    QString::append(param_1);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6ac62;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100b6ac62:
    QString::toLatin1();
    if ((1 < *(uint *)local_3c8) || (*(long *)(local_3c8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_3c8,*(uint *)(local_3c8 + 4) + 1,*(uint *)(local_3c8 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_3c8 + *(long *)(local_3c8 + 0x10));
    QString::append(param_1);
    if (*(int *)local_3c8 != -1) {
      if (*(int *)local_3c8 != 0) {
        LOCK();
        *(int *)local_3c8 = *(int *)local_3c8 + -1;
        local_31 = *(int *)local_3c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6ad07;
      }
      QArrayData::deallocate(local_3c8,1,8);
    }
LAB_100b6ad07:
    QString::fromUtf8_helper((char *)&local_100,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6ad64;
      }
      QArrayData::deallocate(local_100,2,8);
    }
  }
LAB_100b6ad64:
  local_3d0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number_value",0x10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6adea:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3d0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6add6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6adea;
LAB_100b6add6:
    cVar3 = operator<(&local_3d0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6adea;
  }
  if (*(int *)local_3d0.field0_0x0 != -1) {
    if (*(int *)local_3d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3d0.field0_0x0 = *(int *)local_3d0.field0_0x0 + -1;
      local_31 = *(int *)local_3d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6ae22;
    }
    QArrayData::deallocate((QArrayData *)local_3d0.field0_0x0,2,8);
  }
LAB_100b6ae22:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_f8,0x1ed850d);
    QString::append(param_1);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6ae88;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100b6ae88:
    QString::sprintf((char *)&local_288,"%llu",*(undefined8 *)(param_2 + 200));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_f0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6af13;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_100b6af13:
  local_3d8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("key_number_version",0x12);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6af9a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3d8), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6af86;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6af9a;
LAB_100b6af86:
    cVar3 = operator<(&local_3d8,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6af9a;
  }
  if (*(int *)local_3d8.field0_0x0 != -1) {
    if (*(int *)local_3d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3d8.field0_0x0 = *(int *)local_3d8.field0_0x0 + -1;
      local_31 = *(int *)local_3d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6afd2;
    }
    QArrayData::deallocate((QArrayData *)local_3d8.field0_0x0,2,8);
  }
LAB_100b6afd2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_e8,0x1ed8534);
    QString::append(param_1);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b038;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100b6b038:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xd0));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_e0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b0c2;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
  }
LAB_100b6b0c2:
  local_3e0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vzagent_allowed",0xf);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6b14a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3e0), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6b136;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6b14a;
LAB_100b6b136:
    cVar3 = operator<(&local_3e0,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6b14a;
  }
  if (*(int *)local_3e0.field0_0x0 != -1) {
    if (*(int *)local_3e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3e0.field0_0x0 = *(int *)local_3e0.field0_0x0 + -1;
      local_31 = *(int *)local_3e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6b182;
    }
    QArrayData::deallocate((QArrayData *)local_3e0.field0_0x0,2,8);
  }
LAB_100b6b182:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_d8,0x1ed855a);
    QString::append(param_1);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b1e8;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100b6b1e8:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xd4));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_d0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b272;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
  }
LAB_100b6b272:
  local_3e8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("license_update_date",0x13);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6b2fa:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_3e8), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6b2e6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6b2fa;
LAB_100b6b2e6:
    cVar3 = operator<(&local_3e8,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6b2fa;
  }
  if (*(int *)local_3e8.field0_0x0 != -1) {
    if (*(int *)local_3e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3e8.field0_0x0 = *(int *)local_3e8.field0_0x0 + -1;
      local_31 = *(int *)local_3e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6b332;
    }
    QArrayData::deallocate((QArrayData *)local_3e8.field0_0x0,2,8);
  }
LAB_100b6b332:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_c8,0x1ed8582);
    QString::append(param_1);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b398;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100b6b398:
    QDateTime::toTimeSpec(&local_3f8,param_2 + 0xe0,0);
    local_400 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
    QDateTime::toString(&local_3f0);
    QString::append(param_1);
    if (*(int *)local_3f0.field0_0x0 != -1) {
      if (*(int *)local_3f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_3f0.field0_0x0 = *(int *)local_3f0.field0_0x0 + -1;
        local_31 = *(int *)local_3f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b42b;
      }
      QArrayData::deallocate((QArrayData *)local_3f0.field0_0x0,2,8);
    }
LAB_100b6b42b:
    if (*(int *)local_400 != -1) {
      if (*(int *)local_400 != 0) {
        LOCK();
        *(int *)local_400 = *(int *)local_400 + -1;
        local_31 = *(int *)local_400 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b461;
      }
      QArrayData::deallocate(local_400,2,8);
    }
LAB_100b6b461:
    QDateTime::~QDateTime(&local_3f8);
    QString::fromUtf8_helper((char *)&local_c0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b4ca;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
LAB_100b6b4ca:
  local_408.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("update_password",0xf);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6b54a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_408), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6b536;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6b54a;
LAB_100b6b536:
    cVar3 = operator<(&local_408,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6b54a;
  }
  if (*(int *)local_408.field0_0x0 != -1) {
    if (*(int *)local_408.field0_0x0 != 0) {
      LOCK();
      *(int *)local_408.field0_0x0 = *(int *)local_408.field0_0x0 + -1;
      local_31 = *(int *)local_408.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6b588;
    }
    QArrayData::deallocate((QArrayData *)local_408.field0_0x0,2,8);
  }
LAB_100b6b588:
  if ((lVar7 != 0 & param_4) != 0) {
    QString::fromUtf8_helper((char *)&local_b8,0x1ed85a1);
    QString::append(param_1);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b5f3;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100b6b5f3:
    QString::toLatin1();
    if ((1 < *(uint *)local_410) || (*(long *)(local_410 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_410,*(uint *)(local_410 + 4) + 1,*(uint *)(local_410 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_410 + *(long *)(local_410 + 0x10));
    QString::append(param_1);
    if (*(int *)local_410 != -1) {
      if (*(int *)local_410 != 0) {
        LOCK();
        *(int *)local_410 = *(int *)local_410 + -1;
        local_31 = *(int *)local_410 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b698;
      }
      QArrayData::deallocate(local_410,1,8);
    }
LAB_100b6b698:
    QString::fromUtf8_helper((char *)&local_b0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b6f5;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
  }
LAB_100b6b6f5:
  local_418.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("keyserver_host",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6b77a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_418), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6b766;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6b77a;
LAB_100b6b766:
    cVar3 = operator<(&local_418,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6b77a;
  }
  if (*(int *)local_418.field0_0x0 != -1) {
    if (*(int *)local_418.field0_0x0 != 0) {
      LOCK();
      *(int *)local_418.field0_0x0 = *(int *)local_418.field0_0x0 + -1;
      local_31 = *(int *)local_418.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6b7b8;
    }
    QArrayData::deallocate((QArrayData *)local_418.field0_0x0,2,8);
  }
LAB_100b6b7b8:
  if ((lVar7 != 0 & param_4) != 0) {
    QString::fromUtf8_helper((char *)&local_a8,0x1ed85be);
    QString::append(param_1);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b823;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100b6b823:
    QString::toLatin1();
    if ((1 < *(uint *)local_420) || (*(long *)(local_420 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_420,*(uint *)(local_420 + 4) + 1,*(uint *)(local_420 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_420 + *(long *)(local_420 + 0x10));
    QString::append(param_1);
    if (*(int *)local_420 != -1) {
      if (*(int *)local_420 != 0) {
        LOCK();
        *(int *)local_420 = *(int *)local_420 + -1;
        local_31 = *(int *)local_420 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b8c8;
      }
      QArrayData::deallocate(local_420,1,8);
    }
LAB_100b6b8c8:
    QString::fromUtf8_helper((char *)&local_a0,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6b925;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_100b6b925:
  local_428.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("disable_reporting",0x11);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6b9aa:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_428), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6b996;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6b9aa;
LAB_100b6b996:
    cVar3 = operator<(&local_428,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6b9aa;
  }
  if (*(int *)local_428.field0_0x0 != -1) {
    if (*(int *)local_428.field0_0x0 != 0) {
      LOCK();
      *(int *)local_428.field0_0x0 = *(int *)local_428.field0_0x0 + -1;
      local_31 = *(int *)local_428.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6b9e2;
    }
    QArrayData::deallocate((QArrayData *)local_428.field0_0x0,2,8);
  }
LAB_100b6b9e2:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_98,0x1ed85db);
    QString::append(param_1);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6ba48;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100b6ba48:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0x100));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_90,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6bad2;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_100b6bad2:
  local_430.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("nr_vms",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6bb5a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_430), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6bb46;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6bb5a;
LAB_100b6bb46:
    cVar3 = operator<(&local_430,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6bb5a;
  }
  if (*(int *)local_430.field0_0x0 != -1) {
    if (*(int *)local_430.field0_0x0 != 0) {
      LOCK();
      *(int *)local_430.field0_0x0 = *(int *)local_430.field0_0x0 + -1;
      local_31 = *(int *)local_430.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6bb92;
    }
    QArrayData::deallocate((QArrayData *)local_430.field0_0x0,2,8);
  }
LAB_100b6bb92:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_88,0x1ed85f7);
    QString::append(param_1);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6bbec;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100b6bbec:
    QString::sprintf((char *)&local_288,"%u",(ulong)*(uint *)(param_2 + 0xe8));
    QString::append(param_1);
    QString::fromUtf8_helper((char *)&local_80,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6bc6a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100b6bc6a:
  local_438.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("issue_date",10);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6bcea:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_438), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6bcd6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6bcea;
LAB_100b6bcd6:
    cVar3 = operator<(&local_438,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6bcea;
  }
  if (*(int *)local_438.field0_0x0 != -1) {
    if (*(int *)local_438.field0_0x0 != 0) {
      LOCK();
      *(int *)local_438.field0_0x0 = *(int *)local_438.field0_0x0 + -1;
      local_31 = *(int *)local_438.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6bd22;
    }
    QArrayData::deallocate((QArrayData *)local_438.field0_0x0,2,8);
  }
LAB_100b6bd22:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_78,0x1ed8609);
    QString::append(param_1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6bd7c;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100b6bd7c:
    QDateTime::toTimeSpec(&local_448,param_2 + 0x70,0);
    local_450 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
    QDateTime::toString(&local_440);
    QString::append(param_1);
    if (*(int *)local_440.field0_0x0 != -1) {
      if (*(int *)local_440.field0_0x0 != 0) {
        LOCK();
        *(int *)local_440.field0_0x0 = *(int *)local_440.field0_0x0 + -1;
        local_31 = *(int *)local_440.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6be0c;
      }
      QArrayData::deallocate((QArrayData *)local_440.field0_0x0,2,8);
    }
LAB_100b6be0c:
    if (*(int *)local_450 != -1) {
      if (*(int *)local_450 != 0) {
        LOCK();
        *(int *)local_450 = *(int *)local_450 + -1;
        local_31 = *(int *)local_450 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6be42;
      }
      QArrayData::deallocate(local_450,2,8);
    }
LAB_100b6be42:
    QDateTime::~QDateTime(&local_448);
    QString::fromUtf8_helper((char *)&local_70,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6be9f;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100b6be9f:
  local_458.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("status",6);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6bf1a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_458), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6bf06;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6bf1a;
LAB_100b6bf06:
    cVar3 = operator<(&local_458,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6bf1a;
  }
  if (*(int *)local_458.field0_0x0 != -1) {
    if (*(int *)local_458.field0_0x0 != 0) {
      LOCK();
      *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + -1;
      local_31 = *(int *)local_458.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6bf52;
    }
    QArrayData::deallocate((QArrayData *)local_458.field0_0x0,2,8);
  }
LAB_100b6bf52:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_68,0x1ed8617);
    QString::append(param_1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6bfac;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100b6bfac:
    QString::toLatin1();
    if ((1 < *(uint *)local_460) || (*(long *)(local_460 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_460,*(uint *)(local_460 + 4) + 1,*(uint *)(local_460 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_460 + *(long *)(local_460 + 0x10));
    QString::append(param_1);
    if (*(int *)local_460 != -1) {
      if (*(int *)local_460 != 0) {
        LOCK();
        *(int *)local_460 = *(int *)local_460 + -1;
        local_31 = *(int *)local_460 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6c051;
      }
      QArrayData::deallocate(local_460,1,8);
    }
LAB_100b6c051:
    QString::fromUtf8_helper((char *)&local_60,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6c0a2;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100b6c0a2:
  local_468.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_version",0xb);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6c12a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_468), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6c116;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6c12a;
LAB_100b6c116:
    cVar3 = operator<(&local_468,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6c12a;
  }
  if (*(int *)local_468.field0_0x0 != -1) {
    if (*(int *)local_468.field0_0x0 != 0) {
      LOCK();
      *(int *)local_468.field0_0x0 = *(int *)local_468.field0_0x0 + -1;
      local_31 = *(int *)local_468.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6c162;
    }
    QArrayData::deallocate((QArrayData *)local_468.field0_0x0,2,8);
  }
LAB_100b6c162:
  if (lVar7 != 0) {
    QString::fromUtf8_helper((char *)&local_58,0x1ed862d);
    QString::append(param_1);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6c1bc;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100b6c1bc:
    QString::toLatin1();
    if ((1 < *(uint *)local_470) || (*(long *)(local_470 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_470,*(uint *)(local_470 + 4) + 1,*(uint *)(local_470 + 8) >> 0x1f);
    }
    QString::sprintf((char *)&local_288,"%s",local_470 + *(long *)(local_470 + 0x10));
    QString::append(param_1);
    if (*(int *)local_470 != -1) {
      if (*(int *)local_470 != 0) {
        LOCK();
        *(int *)local_470 = *(int *)local_470 + -1;
        local_31 = *(int *)local_470 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6c261;
      }
      QArrayData::deallocate(local_470,1,8);
    }
LAB_100b6c261:
    QString::fromUtf8_helper((char *)&local_50,0x1eeaa60);
    QString::append(param_1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b6c2b2;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100b6c2b2:
  local_478.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("volume_license",0xe);
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_100b6c33a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_478), cVar3 == '\0')
      {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100b6c326;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100b6c33a;
LAB_100b6c326:
    cVar3 = operator<(&local_478,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100b6c33a;
  }
  if (*(int *)local_478.field0_0x0 != -1) {
    if (*(int *)local_478.field0_0x0 != 0) {
      LOCK();
      *(int *)local_478.field0_0x0 = *(int *)local_478.field0_0x0 + -1;
      local_31 = *(int *)local_478.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6c372;
    }
    QArrayData::deallocate((QArrayData *)local_478.field0_0x0,2,8);
  }
LAB_100b6c372:
  if (lVar7 == 0) goto LAB_100b6c44a;
  QString::fromUtf8_helper((char *)&local_48,0x1ed864b);
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6c3cc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b6c3cc:
  QString::sprintf((char *)&local_288,"%d",(ulong)*(uint *)(param_2 + 0x110));
  QString::append(param_1);
  QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b6c44a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b6c44a:
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      UNLOCK();
      if (*(int *)local_288 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_288,2,8);
  }
  return param_1;
}

