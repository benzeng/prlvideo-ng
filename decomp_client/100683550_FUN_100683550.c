
undefined8 FUN_100683550(undefined8 param_1,long *param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  CTaskGenericId *pCVar15;
  size_t sVar16;
  QVariant *pQVar17;
  QVariant *pQVar18;
  bool bVar19;
  QVariant local_778;
  QArrayData *local_768;
  QVariant local_760;
  QArrayData *local_750;
  QVariant local_748;
  QArrayData *local_738;
  QVariant local_730;
  QArrayData *local_720;
  QVariant local_718;
  QArrayData *local_708;
  QVariant local_700;
  QArrayData *local_6f0;
  QVariant local_6e8;
  QArrayData *local_6d8;
  QString local_6d0;
  QVariant local_6c8;
  QArrayData *local_6b8;
  QVariant local_6b0;
  QArrayData *local_6a0;
  QVariant local_698;
  QArrayData *local_688;
  QString local_680;
  QVariant local_678;
  QArrayData *local_668;
  QVariant local_660;
  QArrayData *local_650;
  QVariant local_648;
  QArrayData *local_638;
  QString local_630;
  QVariant local_628;
  QArrayData *local_618;
  QVariant local_610;
  QVariant local_600;
  QVariant local_5f0;
  QVariant local_5e0;
  QVariant local_5d0;
  QArrayData *local_5c0;
  QVariant local_5b8;
  QArrayData *local_5a8;
  QVariant local_5a0;
  QArrayData *local_590;
  QVariant local_588;
  QArrayData *local_578;
  QVariant local_570;
  QArrayData *local_560;
  QString local_558;
  QVariant local_550;
  QArrayData *local_540;
  QVariant local_538;
  QArrayData *local_528;
  QVariant local_520;
  QArrayData *local_510;
  QVariant local_508;
  QArrayData *local_4f8;
  QVariant local_4f0;
  QArrayData *local_4e0;
  QVariant local_4d8;
  QArrayData *local_4c8;
  QString local_4c0;
  QVariant local_4b8;
  QArrayData *local_4a8;
  QVariant local_4a0;
  QArrayData *local_490;
  QVariant local_488;
  QArrayData *local_478;
  QString local_470;
  QVariant local_468;
  QArrayData *local_458;
  QVariant local_450;
  QArrayData *local_440;
  QVariant local_438;
  QArrayData *local_428;
  QString local_420;
  QVariant local_418;
  QArrayData *local_408;
  QVariant local_400;
  QArrayData *local_3f0;
  QVariant local_3e8;
  QArrayData *local_3d8;
  QString local_3d0;
  QVariant local_3c8;
  QArrayData *local_3b8;
  QVariant local_3b0;
  QVariant local_3a0;
  QArrayData *local_390;
  QVariant local_388;
  QArrayData *local_378;
  QString local_370;
  QVariant local_368;
  QArrayData *local_358;
  QVariant local_350;
  QArrayData *local_340;
  QString local_338;
  QVariant local_330;
  QArrayData *local_320;
  QVariant local_318;
  QVariant local_308;
  QVariant local_2f8;
  QArrayData *local_2e8;
  QVariant local_2e0;
  QArrayData *local_2d0;
  QString local_2c8;
  QVariant local_2c0;
  QArrayData *local_2b0;
  QVariant local_2a8;
  QArrayData *local_298;
  QString local_290;
  QVariant local_288;
  QArrayData *local_278;
  QVariant local_270;
  QVariant local_260;
  QVariant local_250;
  QVariant local_240;
  QVariant local_230;
  QArrayData *local_220;
  QArrayData *local_218;
  QVariant local_210;
  QArrayData *local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QVariant local_1d8;
  QVariant local_1c8;
  QVariant local_1b8;
  QVariant local_1a8;
  QVariant local_198;
  QArrayData *local_188;
  QString local_180;
  QVariant local_178;
  QArrayData *local_168;
  QString local_160;
  QVariant local_158;
  QArrayData *local_148;
  QString local_140;
  QVariant local_138;
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  undefined **local_58 [3];
  QString local_40;
  undefined1 local_31;
  
  (**(code **)(*param_2 + 0x60))();
  lVar13 = FUN_100675e00(param_2[3]);
  if (lVar13 == 0) {
    return param_1;
  }
  uVar14 = FUN_100675e00(param_2[3]);
  uVar14 = FUN_10016f500(uVar14);
  cVar6 = FUN_10061b4d0(uVar14,0x20);
  if (cVar6 == '\0') {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e0d7f1);
  }
  else {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e0d7e2);
  }
  cVar6 = FUN_10061b500(uVar14,2);
  cVar7 = '\x01';
  if (cVar6 == '\0') {
    cVar6 = FUN_10061b4d0(uVar14,0x20);
    if (cVar6 == '\0') {
      cVar7 = '\0';
    }
    else {
      pCVar15 = (CTaskGenericId *)CTaskManager::instance();
      CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_58,0x53);
      local_58[0] = &PTR_FUN_10226c710;
      cVar7 = CTaskManager::isTaskRunning(pCVar15);
      CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_58);
    }
  }
  switch(param_3) {
  case 0:
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar12 = -1;
    if (param_4 == 8) {
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_60 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_60);
      QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10226ee78);
      QVariant::QVariant(&local_70,&local_78);
      QVariant::operator=(pQVar17,&local_70);
      QVariant::~QVariant(&local_70);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100683806;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100683806:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100683836;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100683836:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_80 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_80);
      bVar8 = FUN_1006760e0(param_2[3]);
      QVariant::QVariant(&local_90,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar17,&local_90);
      QVariant::~QVariant(&local_90);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068482e;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
    else {
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_98 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_98);
      QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,0x1dc8b85);
      QVariant::QVariant(&local_a8,&local_b0);
      QVariant::operator=(pQVar17,&local_a8);
      QVariant::~QVariant(&local_a8);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006847f8;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_1006847f8:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068482e;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_10068482e:
    if (param_4 == 1) {
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_c8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_c8);
      cVar6 = FUN_1006760d0(param_2[3]);
      uVar10 = true;
      if (cVar6 == '\0') {
        uVar10 = FUN_100676210(param_2[3]);
      }
      QVariant::QVariant(&local_d8,(bool)uVar10);
      QVariant::operator=(pQVar17,&local_d8);
      QVariant::~QVariant(&local_d8);
      bVar8 = true;
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100685706;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
    }
    else {
      if (param_4 == 3) {
        if (*(char *)(param_2[3] + 0x161) != '\0') {
          pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
          iVar12 = -1;
          if (pcVar1 != (char *)0x0) {
            sVar16 = _strlen(pcVar1);
            iVar12 = (int)sVar16;
          }
          local_e0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
          pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_e0);
          QVariant::QVariant(&local_f0,true);
          QVariant::operator=(pQVar17,&local_f0);
          QVariant::~QVariant(&local_f0);
          bVar8 = true;
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100685706;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
          goto LAB_100685706;
        }
LAB_10068562d:
        pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_f8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_f8);
        QVariant::QVariant(&local_108,(param_4 & 0xfffffffd) == 4 || param_4 == 8);
        QVariant::operator=(pQVar17,&local_108);
        QVariant::~QVariant(&local_108);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006856ec;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
      }
      else {
        if (param_4 != 7) goto LAB_10068562d;
        pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_b8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_b8);
        pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_c0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar18 = (QVariant *)FUN_1002edf40(param_1,&local_c0);
        QVariant::operator=(pQVar17,pQVar18);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006855ea;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1006855ea:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006856ec;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_1006856ec:
      bVar8 = true;
      if (param_4 == 4) {
        bVar8 = CContentModel::isBusy();
        bVar8 = bVar8 ^ 1;
      }
    }
LAB_100685706:
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_110 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_110);
    QVariant::QVariant(&local_120,(bool)bVar8);
    QVariant::operator=(pQVar17,&local_120);
    QVariant::~QVariant(&local_120);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_110,2,8);
    }
    break;
  case 1:
    if ((param_4 == 0xc) || ((param_4 & 0xfffffff7) - 1 < 2)) {
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_128 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_128);
      QMetaObject::tr((char *)&local_140,PTR_staticMetaObject_1021e1520,0x1e0835d);
      QVariant::QVariant(&local_138,&local_140);
      QVariant::operator=(pQVar17,&local_138);
      QVariant::~QVariant(&local_138);
      if (*(int *)local_140.field0_0x0 != -1) {
        if (*(int *)local_140.field0_0x0 != 0) {
          LOCK();
          *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
          local_31 = *(int *)local_140.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006839d8;
        }
        QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
      }
LAB_1006839d8:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100683a0e;
        }
        QArrayData::deallocate(local_128,2,8);
      }
    }
LAB_100683a0e:
    if (param_4 == 0xb) {
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_168 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_168);
      QMetaObject::tr((char *)&local_180,PTR_staticMetaObject_1021e1520,0x1dca7aa);
      QVariant::QVariant(&local_178,&local_180);
      QVariant::operator=(pQVar17,&local_178);
      QVariant::~QVariant(&local_178);
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100683aec;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_100683aec:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684d5b;
        }
        QArrayData::deallocate(local_168,2,8);
      }
    }
    else if (param_4 == 7) {
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_148 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_148);
      QMetaObject::tr((char *)&local_160,PTR_staticMetaObject_1021e1520,0x1dd2f2d);
      QVariant::QVariant(&local_158,&local_160);
      QVariant::operator=(pQVar17,&local_158);
      QVariant::~QVariant(&local_158);
      if (*(int *)local_160.field0_0x0 != -1) {
        if (*(int *)local_160.field0_0x0 != 0) {
          LOCK();
          *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
          local_31 = *(int *)local_160.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684d25;
        }
        QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
      }
LAB_100684d25:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684d5b;
        }
        QArrayData::deallocate(local_148,2,8);
      }
    }
LAB_100684d5b:
    uVar14 = FUN_100675e00(param_2[3]);
    uVar14 = FUN_10016f500(uVar14);
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_188 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_188);
    bVar19 = true;
    bVar9 = false;
    if (param_4 < 0xb) {
      bVar3 = false;
      bVar2 = false;
      bVar4 = false;
      if ((0x578U >> (param_4 & 0x1f) & 1) != 0) {
        if (param_4 == 10) {
          FUN_10061abe0(&local_1a8,uVar14,0);
          iVar12 = QVariant::toInt((bool *)&local_1a8);
          if (iVar12 == -0x7ffeefff) {
            bVar4 = true;
            bVar9 = false;
            bVar3 = false;
            bVar2 = false;
            bVar19 = true;
          }
          else {
            FUN_10061abe0(&local_1b8,uVar14,0);
            iVar12 = QVariant::toInt((bool *)&local_1b8);
            if (iVar12 == -0x7ffeef8c) {
              bVar3 = false;
            }
            else {
              FUN_10061abe0(&local_1c8,uVar14,0);
              iVar12 = QVariant::toInt((bool *)&local_1c8);
              if (iVar12 != -0x7ffeef89) {
                FUN_10061abe0(&local_1d8,uVar14,0);
                iVar12 = QVariant::toInt((bool *)&local_1d8);
                bVar19 = iVar12 == -0x7ffeef9b;
                bVar9 = true;
                bVar3 = true;
                bVar2 = true;
                bVar4 = true;
                goto LAB_10068699c;
              }
              bVar3 = true;
            }
            bVar9 = true;
            bVar2 = false;
            bVar4 = true;
            bVar19 = true;
          }
        }
        else {
          bVar9 = false;
          bVar3 = false;
          bVar2 = false;
          bVar4 = false;
          bVar19 = false;
        }
      }
    }
    else {
      bVar3 = false;
      bVar2 = false;
      bVar4 = false;
      bVar9 = false;
    }
LAB_10068699c:
    QVariant::QVariant(&local_198,bVar19);
    QVariant::operator=(pQVar17,&local_198);
    QVariant::~QVariant(&local_198);
    if (bVar2) {
      QVariant::~QVariant(&local_1d8);
    }
    if (bVar3) {
      QVariant::~QVariant(&local_1c8);
    }
    if (bVar9) {
      QVariant::~QVariant(&local_1b8);
    }
    if (bVar4) {
      QVariant::~QVariant(&local_1a8);
    }
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100686a43;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100686a43:
    puVar5 = PTR_ActionEnabled_1021e14e0;
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_1e0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    FUN_1002edf40(param_1,&local_1e0);
    cVar6 = QVariant::toBool();
    if (cVar6 == '\0') {
      bVar8 = 0;
    }
    else {
      bVar8 = CContentModel::isBusy();
      bVar8 = bVar8 ^ 1;
    }
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100686ae3;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
LAB_100686ae3:
    if (param_4 == 0xc) {
      CAbstractWizardModel::currentPage();
      lVar13 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102223dd0);
      if (lVar13 == 0) {
        bVar8 = false;
      }
      else {
        bVar11 = FUN_100669d00(lVar13);
        bVar8 = bVar8 & bVar11;
      }
    }
    else if (param_4 == 1) {
      iVar12 = FUN_100678d70(param_2[3]);
      bVar9 = true;
      if ((iVar12 != 3) && (iVar12 = FUN_100678d80(param_2[3]), iVar12 == 0)) {
        iVar12 = FUN_100678d90(param_2[3]);
        bVar9 = iVar12 != 0;
      }
      bVar8 = bVar8 & bVar9;
    }
    pcVar1 = *(char **)puVar5;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_1e8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_1e8);
    QVariant::QVariant(&local_1f8,(bool)bVar8);
    QVariant::operator=(pQVar17,&local_1f8);
    QVariant::~QVariant(&local_1f8);
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
    break;
  case 3:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_200 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_200);
    QVariant::QVariant(&local_210,param_4 == 5);
    QVariant::operator=(pQVar17,&local_210);
    QVariant::~QVariant(&local_210);
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_31 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100683be0;
      }
      QArrayData::deallocate(local_200,2,8);
    }
LAB_100683be0:
    puVar5 = PTR_ActionEnabled_1021e14e0;
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_218 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    FUN_1002edf40(param_1,&local_218);
    cVar6 = QVariant::toBool();
    if (cVar6 == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = CContentModel::isBusy();
      bVar8 = bVar8 ^ 1;
    }
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100684e1a;
      }
      QArrayData::deallocate(local_218,2,8);
    }
LAB_100684e1a:
    pcVar1 = *(char **)puVar5;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_220 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_220);
    QVariant::QVariant(&local_230,(bool)bVar8);
    QVariant::operator=(pQVar17,&local_230);
    QVariant::~QVariant(&local_230);
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_31 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_220,2,8);
    }
    break;
  case 4:
    if (param_4 != 10) break;
    uVar14 = FUN_100675e00(param_2[3]);
    uVar14 = FUN_10016f500(uVar14);
    FUN_10061abe0(&local_240,uVar14,0);
    iVar12 = QVariant::toInt((bool *)&local_240);
    bVar9 = true;
    if (iVar12 != -0x7ffeefff) {
      FUN_10061abe0(&local_250,uVar14,0);
      iVar12 = QVariant::toInt((bool *)&local_250);
      bVar9 = true;
      if (iVar12 != -0x7ffeef8c) {
        FUN_10061abe0(&local_260,uVar14,0);
        iVar12 = QVariant::toInt((bool *)&local_260);
        bVar9 = true;
        if (iVar12 != -0x7ffeef89) {
          FUN_10061abe0(&local_270,uVar14,0);
          iVar12 = QVariant::toInt((bool *)&local_270);
          bVar9 = iVar12 == -0x7ffeef9b;
          QVariant::~QVariant(&local_270);
        }
        QVariant::~QVariant(&local_260);
      }
      QVariant::~QVariant(&local_250);
    }
    QVariant::~QVariant(&local_240);
    if (bVar9) break;
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_278 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_278);
    QMetaObject::tr((char *)&local_290,PTR_staticMetaObject_1021e1520,0x1de7b50);
    QVariant::QVariant(&local_288,&local_290);
    QVariant::operator=(pQVar17,&local_288);
    QVariant::~QVariant(&local_288);
    if (*(int *)local_290.field0_0x0 != -1) {
      if (*(int *)local_290.field0_0x0 != 0) {
        LOCK();
        *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
        local_31 = *(int *)local_290.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100683e1d;
      }
      QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
    }
LAB_100683e1d:
    if (*(int *)local_278 != -1) {
      if (*(int *)local_278 != 0) {
        LOCK();
        *(int *)local_278 = *(int *)local_278 + -1;
        local_31 = *(int *)local_278 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100683e53;
      }
      QArrayData::deallocate(local_278,2,8);
    }
LAB_100683e53:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_298 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_298);
    QVariant::QVariant(&local_2a8,true);
    QVariant::operator=(pQVar17,&local_2a8);
    QVariant::~QVariant(&local_2a8);
    if (*(int *)local_298 != -1) {
      if (*(int *)local_298 != 0) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + -1;
        local_31 = *(int *)local_298 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_298,2,8);
    }
    break;
  case 6:
    uVar14 = FUN_100675e00(param_2[3]);
    uVar14 = FUN_10016f500(uVar14);
    switch(param_4) {
    case 1:
      goto switchD_100683f46_caseD_1;
    case 2:
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_358 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_358);
      QMetaObject::tr((char *)&local_370,PTR_staticMetaObject_1021e1520,0x1e0d811);
      QVariant::QVariant(&local_368,&local_370);
      QVariant::operator=(pQVar17,&local_368);
      QVariant::~QVariant(&local_368);
      if (*(int *)local_370.field0_0x0 != -1) {
        if (*(int *)local_370.field0_0x0 != 0) {
          LOCK();
          *(int *)local_370.field0_0x0 = *(int *)local_370.field0_0x0 + -1;
          local_31 = *(int *)local_370.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006861f8;
        }
        QArrayData::deallocate((QArrayData *)local_370.field0_0x0,2,8);
      }
LAB_1006861f8:
      if (*(int *)local_358 != -1) {
        if (*(int *)local_358 != 0) {
          LOCK();
          *(int *)local_358 = *(int *)local_358 + -1;
          local_31 = *(int *)local_358 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068622e;
        }
        QArrayData::deallocate(local_358,2,8);
      }
LAB_10068622e:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_378 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_378);
      QVariant::QVariant(&local_388,true);
      QVariant::operator=(pQVar17,&local_388);
      QVariant::~QVariant(&local_388);
      if (*(int *)local_378 != -1) {
        if (*(int *)local_378 != 0) {
          LOCK();
          *(int *)local_378 = *(int *)local_378 + -1;
          local_31 = *(int *)local_378 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006862d4;
        }
        QArrayData::deallocate(local_378,2,8);
      }
LAB_1006862d4:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_390 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_390);
      cVar6 = CContentModel::isBusy();
      if ((cVar6 == '\0') && (cVar6 = FUN_10061b4d0(uVar14,2), cVar6 != '\0')) {
        FUN_10061abe0(&local_3b0,uVar14,0xd);
        iVar12 = QVariant::toInt((bool *)&local_3b0);
        bVar9 = 0 < iVar12;
        bVar19 = true;
      }
      else {
        bVar19 = false;
        bVar9 = false;
      }
      QVariant::QVariant(&local_3a0,bVar9);
      QVariant::operator=(pQVar17,&local_3a0);
      QVariant::~QVariant(&local_3a0);
      if (bVar19) {
        QVariant::~QVariant(&local_3b0);
      }
      if (*(int *)local_390 != -1) {
        if (*(int *)local_390 != 0) {
          LOCK();
          *(int *)local_390 = *(int *)local_390 + -1;
          local_31 = *(int *)local_390 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_390,2,8);
      }
      break;
    case 3:
      if (*(char *)(param_2[3] + 0x161) != '\0') break;
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_408 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_408);
      QMetaObject::tr((char *)&local_420,PTR_staticMetaObject_1021e1520,0x1dd2c3f);
      QVariant::QVariant(&local_418,&local_420);
      QVariant::operator=(pQVar17,&local_418);
      QVariant::~QVariant(&local_418);
      if (*(int *)local_420.field0_0x0 != -1) {
        if (*(int *)local_420.field0_0x0 != 0) {
          LOCK();
          *(int *)local_420.field0_0x0 = *(int *)local_420.field0_0x0 + -1;
          local_31 = *(int *)local_420.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100686455;
        }
        QArrayData::deallocate((QArrayData *)local_420.field0_0x0,2,8);
      }
LAB_100686455:
      if (*(int *)local_408 != -1) {
        if (*(int *)local_408 != 0) {
          LOCK();
          *(int *)local_408 = *(int *)local_408 + -1;
          local_31 = *(int *)local_408 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068648b;
        }
        QArrayData::deallocate(local_408,2,8);
      }
LAB_10068648b:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_428 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_428);
      QVariant::QVariant(&local_438,true);
      QVariant::operator=(pQVar17,&local_438);
      QVariant::~QVariant(&local_438);
      if (*(int *)local_428 != -1) {
        if (*(int *)local_428 != 0) {
          LOCK();
          *(int *)local_428 = *(int *)local_428 + -1;
          local_31 = *(int *)local_428 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100686531;
        }
        QArrayData::deallocate(local_428,2,8);
      }
LAB_100686531:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_440 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_440);
      QVariant::QVariant(&local_450,true);
      QVariant::operator=(pQVar17,&local_450);
      QVariant::~QVariant(&local_450);
      if (*(int *)local_440 != -1) {
        if (*(int *)local_440 != 0) {
          LOCK();
          *(int *)local_440 = *(int *)local_440 + -1;
          local_31 = *(int *)local_440 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_440,2,8);
      }
    default:
      break;
    case 10:
    case 0xc:
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_3b8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_3b8);
      QMetaObject::tr((char *)&local_3d0,PTR_staticMetaObject_1021e1520,0x1dd2f2d);
      QVariant::QVariant(&local_3c8,&local_3d0);
      QVariant::operator=(pQVar17,&local_3c8);
      QVariant::~QVariant(&local_3c8);
      if (*(int *)local_3d0.field0_0x0 != -1) {
        if (*(int *)local_3d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_3d0.field0_0x0 = *(int *)local_3d0.field0_0x0 + -1;
          local_31 = *(int *)local_3d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684012;
        }
        QArrayData::deallocate((QArrayData *)local_3d0.field0_0x0,2,8);
      }
LAB_100684012:
      if (*(int *)local_3b8 != -1) {
        if (*(int *)local_3b8 != 0) {
          LOCK();
          *(int *)local_3b8 = *(int *)local_3b8 + -1;
          local_31 = *(int *)local_3b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684048;
        }
        QArrayData::deallocate(local_3b8,2,8);
      }
LAB_100684048:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_3d8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_3d8);
      QVariant::QVariant(&local_3e8,true);
      QVariant::operator=(pQVar17,&local_3e8);
      QVariant::~QVariant(&local_3e8);
      if (*(int *)local_3d8 != -1) {
        if (*(int *)local_3d8 != 0) {
          LOCK();
          *(int *)local_3d8 = *(int *)local_3d8 + -1;
          local_31 = *(int *)local_3d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006840ee;
        }
        QArrayData::deallocate(local_3d8,2,8);
      }
LAB_1006840ee:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_3f0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_3f0);
      bVar8 = CContentModel::isBusy();
      QVariant::QVariant(&local_400,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar17,&local_400);
      QVariant::~QVariant(&local_400);
      if (*(int *)local_3f0 != -1) {
        if (*(int *)local_3f0 != 0) {
          LOCK();
          *(int *)local_3f0 = *(int *)local_3f0 + -1;
          local_31 = *(int *)local_3f0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_3f0,2,8);
      }
      break;
    case 0xb:
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_458 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_458);
      QMetaObject::tr((char *)&local_470,PTR_staticMetaObject_1021e1520,0x1e0d81e);
      QVariant::QVariant(&local_468,&local_470);
      QVariant::operator=(pQVar17,&local_468);
      QVariant::~QVariant(&local_468);
      if (*(int *)local_470.field0_0x0 != -1) {
        if (*(int *)local_470.field0_0x0 != 0) {
          LOCK();
          *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + -1;
          local_31 = *(int *)local_470.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006866ae;
        }
        QArrayData::deallocate((QArrayData *)local_470.field0_0x0,2,8);
      }
LAB_1006866ae:
      if (*(int *)local_458 != -1) {
        if (*(int *)local_458 != 0) {
          LOCK();
          *(int *)local_458 = *(int *)local_458 + -1;
          local_31 = *(int *)local_458 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006866e4;
        }
        QArrayData::deallocate(local_458,2,8);
      }
LAB_1006866e4:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_478 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_478);
      QVariant::QVariant(&local_488,true);
      QVariant::operator=(pQVar17,&local_488);
      QVariant::~QVariant(&local_488);
      if (*(int *)local_478 != -1) {
        if (*(int *)local_478 != 0) {
          LOCK();
          *(int *)local_478 = *(int *)local_478 + -1;
          local_31 = *(int *)local_478 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068678a;
        }
        QArrayData::deallocate(local_478,2,8);
      }
LAB_10068678a:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_490 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_490);
      bVar8 = CContentModel::isBusy();
      QVariant::QVariant(&local_4a0,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar17,&local_4a0);
      QVariant::~QVariant(&local_4a0);
      if (*(int *)local_490 != -1) {
        if (*(int *)local_490 != 0) {
          LOCK();
          *(int *)local_490 = *(int *)local_490 + -1;
          local_31 = *(int *)local_490 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_490,2,8);
      }
      break;
    }
  case 7:
    if (9 < (int)param_4) {
      if (param_4 != 10) {
        if ((param_4 != 0xc) || (cVar7 == '\0')) break;
        pcVar1 = *(char **)PTR_ActionText_1021e14c8;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_4f8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_4f8);
        QVariant::QVariant(&local_508,&local_40);
        QVariant::operator=(pQVar17,&local_508);
        QVariant::~QVariant(&local_508);
        if (*(int *)local_4f8 != -1) {
          if (*(int *)local_4f8 != 0) {
            LOCK();
            *(int *)local_4f8 = *(int *)local_4f8 + -1;
            local_31 = *(int *)local_4f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100685ae3;
          }
          QArrayData::deallocate(local_4f8,2,8);
        }
LAB_100685ae3:
        pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_510 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_510);
        QVariant::QVariant(&local_520,true);
        QVariant::operator=(pQVar17,&local_520);
        QVariant::~QVariant(&local_520);
        if (*(int *)local_510 != -1) {
          if (*(int *)local_510 != 0) {
            LOCK();
            *(int *)local_510 = *(int *)local_510 + -1;
            local_31 = *(int *)local_510 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100685b89;
          }
          QArrayData::deallocate(local_510,2,8);
        }
LAB_100685b89:
        pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_528 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_528);
        bVar8 = CContentModel::isBusy();
        QVariant::QVariant(&local_538,(bool)(bVar8 ^ 1));
        QVariant::operator=(pQVar17,&local_538);
        QVariant::~QVariant(&local_538);
        if (*(int *)local_528 != -1) {
          if (*(int *)local_528 != 0) {
            LOCK();
            *(int *)local_528 = *(int *)local_528 + -1;
            local_31 = *(int *)local_528 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate(local_528,2,8);
        }
        break;
      }
      FUN_10061abe0(&local_5e0,uVar14,0);
      iVar12 = QVariant::toInt((bool *)&local_5e0);
      bVar9 = true;
      if (iVar12 != -0x7ffeefff) {
        FUN_10061abe0(&local_5f0,uVar14,0);
        iVar12 = QVariant::toInt((bool *)&local_5f0);
        bVar9 = true;
        if (iVar12 != -0x7ffeef8c) {
          FUN_10061abe0(&local_600,uVar14,0);
          iVar12 = QVariant::toInt((bool *)&local_600);
          bVar9 = true;
          if (iVar12 != -0x7ffeef89) {
            FUN_10061abe0(&local_610,uVar14,0);
            iVar12 = QVariant::toInt((bool *)&local_610);
            bVar9 = iVar12 == -0x7ffeef9b;
            QVariant::~QVariant(&local_610);
          }
          QVariant::~QVariant(&local_600);
        }
        QVariant::~QVariant(&local_5f0);
      }
      QVariant::~QVariant(&local_5e0);
      if (bVar9) break;
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_618 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_618);
      QMetaObject::tr((char *)&local_630,PTR_staticMetaObject_1021e1520,0x1e0835d);
      QVariant::QVariant(&local_628,&local_630);
      QVariant::operator=(pQVar17,&local_628);
      QVariant::~QVariant(&local_628);
      if (*(int *)local_630.field0_0x0 != -1) {
        if (*(int *)local_630.field0_0x0 != 0) {
          LOCK();
          *(int *)local_630.field0_0x0 = *(int *)local_630.field0_0x0 + -1;
          local_31 = *(int *)local_630.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684abf;
        }
        QArrayData::deallocate((QArrayData *)local_630.field0_0x0,2,8);
      }
LAB_100684abf:
      if (*(int *)local_618 != -1) {
        if (*(int *)local_618 != 0) {
          LOCK();
          *(int *)local_618 = *(int *)local_618 + -1;
          local_31 = *(int *)local_618 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684af5;
        }
        QArrayData::deallocate(local_618,2,8);
      }
LAB_100684af5:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_638 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_638);
      QVariant::QVariant(&local_648,true);
      QVariant::operator=(pQVar17,&local_648);
      QVariant::~QVariant(&local_648);
      if (*(int *)local_638 != -1) {
        if (*(int *)local_638 != 0) {
          LOCK();
          *(int *)local_638 = *(int *)local_638 + -1;
          local_31 = *(int *)local_638 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684b9b;
        }
        QArrayData::deallocate(local_638,2,8);
      }
LAB_100684b9b:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_650 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_650);
      QVariant::QVariant(&local_660,true);
      QVariant::operator=(pQVar17,&local_660);
      QVariant::~QVariant(&local_660);
      if (*(int *)local_650 != -1) {
        if (*(int *)local_650 != 0) {
          LOCK();
          *(int *)local_650 = *(int *)local_650 + -1;
          local_31 = *(int *)local_650 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_650,2,8);
      }
      break;
    }
    if (param_4 != 1) {
      if (param_4 != 2) break;
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_4a8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_4a8);
      QMetaObject::tr((char *)&local_4c0,PTR_staticMetaObject_1021e1520,0x1e0d83a);
      QVariant::QVariant(&local_4b8,&local_4c0);
      QVariant::operator=(pQVar17,&local_4b8);
      QVariant::~QVariant(&local_4b8);
      if (*(int *)local_4c0.field0_0x0 != -1) {
        if (*(int *)local_4c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4c0.field0_0x0 = *(int *)local_4c0.field0_0x0 + -1;
          local_31 = *(int *)local_4c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068588c;
        }
        QArrayData::deallocate((QArrayData *)local_4c0.field0_0x0,2,8);
      }
LAB_10068588c:
      if (*(int *)local_4a8 != -1) {
        if (*(int *)local_4a8 != 0) {
          LOCK();
          *(int *)local_4a8 = *(int *)local_4a8 + -1;
          local_31 = *(int *)local_4a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006858c2;
        }
        QArrayData::deallocate(local_4a8,2,8);
      }
LAB_1006858c2:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_4c8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_4c8);
      QVariant::QVariant(&local_4d8,true);
      QVariant::operator=(pQVar17,&local_4d8);
      QVariant::~QVariant(&local_4d8);
      if (*(int *)local_4c8 != -1) {
        if (*(int *)local_4c8 != 0) {
          LOCK();
          *(int *)local_4c8 = *(int *)local_4c8 + -1;
          local_31 = *(int *)local_4c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100685968;
        }
        QArrayData::deallocate(local_4c8,2,8);
      }
LAB_100685968:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_4e0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_4e0);
      bVar8 = CContentModel::isBusy();
      QVariant::QVariant(&local_4f0,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar17,&local_4f0);
      QVariant::~QVariant(&local_4f0);
      if (*(int *)local_4e0 != -1) {
        if (*(int *)local_4e0 != 0) {
          LOCK();
          *(int *)local_4e0 = *(int *)local_4e0 + -1;
          local_31 = *(int *)local_4e0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_4e0,2,8);
      }
      break;
    }
    cVar6 = FUN_10061b4d0(uVar14,0x8000);
    if (cVar6 == '\0') {
      if (cVar7 == '\0') break;
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_590 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_590);
      QVariant::QVariant(&local_5a0,&local_40);
      QVariant::operator=(pQVar17,&local_5a0);
      QVariant::~QVariant(&local_5a0);
      if (*(int *)local_590 != -1) {
        if (*(int *)local_590 != 0) {
          LOCK();
          *(int *)local_590 = *(int *)local_590 + -1;
          local_31 = *(int *)local_590 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100685d0c;
        }
        QArrayData::deallocate(local_590,2,8);
      }
LAB_100685d0c:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_5a8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_5a8);
      QVariant::QVariant(&local_5b8,true);
      QVariant::operator=(pQVar17,&local_5b8);
      QVariant::~QVariant(&local_5b8);
      if (*(int *)local_5a8 != -1) {
        if (*(int *)local_5a8 != 0) {
          LOCK();
          *(int *)local_5a8 = *(int *)local_5a8 + -1;
          local_31 = *(int *)local_5a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100685db2;
        }
        QArrayData::deallocate(local_5a8,2,8);
      }
LAB_100685db2:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_5c0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_5c0);
      bVar8 = CContentModel::isBusy();
      QVariant::QVariant(&local_5d0,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar17,&local_5d0);
      QVariant::~QVariant(&local_5d0);
      if (*(int *)local_5c0 != -1) {
        if (*(int *)local_5c0 != 0) {
          LOCK();
          *(int *)local_5c0 = *(int *)local_5c0 + -1;
          local_31 = *(int *)local_5c0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_5c0,2,8);
      }
      break;
    }
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_540 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_540);
    QMetaObject::tr((char *)&local_558,PTR_staticMetaObject_1021e1520,0x1df1203);
    QVariant::QVariant(&local_550,&local_558);
    QVariant::operator=(pQVar17,&local_550);
    QVariant::~QVariant(&local_550);
    if (*(int *)local_558.field0_0x0 != -1) {
      if (*(int *)local_558.field0_0x0 != 0) {
        LOCK();
        *(int *)local_558.field0_0x0 = *(int *)local_558.field0_0x0 + -1;
        local_31 = *(int *)local_558.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006842ab;
      }
      QArrayData::deallocate((QArrayData *)local_558.field0_0x0,2,8);
    }
LAB_1006842ab:
    if (*(int *)local_540 != -1) {
      if (*(int *)local_540 != 0) {
        LOCK();
        *(int *)local_540 = *(int *)local_540 + -1;
        local_31 = *(int *)local_540 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006842e1;
      }
      QArrayData::deallocate(local_540,2,8);
    }
LAB_1006842e1:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_560 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_560);
    QVariant::QVariant(&local_570,true);
    QVariant::operator=(pQVar17,&local_570);
    QVariant::~QVariant(&local_570);
    if (*(int *)local_560 != -1) {
      if (*(int *)local_560 != 0) {
        LOCK();
        *(int *)local_560 = *(int *)local_560 + -1;
        local_31 = *(int *)local_560 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100684387;
      }
      QArrayData::deallocate(local_560,2,8);
    }
LAB_100684387:
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_578 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_578);
    bVar8 = CContentModel::isBusy();
    QVariant::QVariant(&local_588,(bool)(bVar8 ^ 1));
    QVariant::operator=(pQVar17,&local_588);
    QVariant::~QVariant(&local_588);
    if (*(int *)local_578 != -1) {
      if (*(int *)local_578 != 0) {
        LOCK();
        *(int *)local_578 = *(int *)local_578 + -1;
        local_31 = *(int *)local_578 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_578,2,8);
    }
    break;
  case 8:
    if (param_4 != 1) {
      if (param_4 != 10) {
        if (param_4 != 0xc) break;
        pcVar1 = *(char **)PTR_ActionText_1021e14c8;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_668 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_668);
        QMetaObject::tr((char *)&local_680,PTR_staticMetaObject_1021e1520,0x1e0d845);
        QVariant::QVariant(&local_678,&local_680);
        QVariant::operator=(pQVar17,&local_678);
        QVariant::~QVariant(&local_678);
        if (*(int *)local_680.field0_0x0 != -1) {
          if (*(int *)local_680.field0_0x0 != 0) {
            LOCK();
            *(int *)local_680.field0_0x0 = *(int *)local_680.field0_0x0 + -1;
            local_31 = *(int *)local_680.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100685299;
          }
          QArrayData::deallocate((QArrayData *)local_680.field0_0x0,2,8);
        }
LAB_100685299:
        if (*(int *)local_668 != -1) {
          if (*(int *)local_668 != 0) {
            LOCK();
            *(int *)local_668 = *(int *)local_668 + -1;
            local_31 = *(int *)local_668 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006852cf;
          }
          QArrayData::deallocate(local_668,2,8);
        }
LAB_1006852cf:
        pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_688 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_688);
        QVariant::QVariant(&local_698,true);
        QVariant::operator=(pQVar17,&local_698);
        QVariant::~QVariant(&local_698);
        if (*(int *)local_688 != -1) {
          if (*(int *)local_688 != 0) {
            LOCK();
            *(int *)local_688 = *(int *)local_688 + -1;
            local_31 = *(int *)local_688 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100685375;
          }
          QArrayData::deallocate(local_688,2,8);
        }
LAB_100685375:
        pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
        iVar12 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar16 = _strlen(pcVar1);
          iVar12 = (int)sVar16;
        }
        local_6a0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
        pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_6a0);
        bVar8 = CContentModel::isBusy();
        QVariant::QVariant(&local_6b0,(bool)(bVar8 ^ 1));
        QVariant::operator=(pQVar17,&local_6b0);
        QVariant::~QVariant(&local_6b0);
        if (*(int *)local_6a0 != -1) {
          if (*(int *)local_6a0 != 0) {
            LOCK();
            *(int *)local_6a0 = *(int *)local_6a0 + -1;
            local_31 = *(int *)local_6a0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate(local_6a0,2,8);
        }
        break;
      }
      if (cVar7 == '\0') break;
      pcVar1 = *(char **)PTR_ActionText_1021e14c8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_708 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_708);
      QVariant::QVariant(&local_718,&local_40);
      QVariant::operator=(pQVar17,&local_718);
      QVariant::~QVariant(&local_718);
      if (*(int *)local_708 != -1) {
        if (*(int *)local_708 != 0) {
          LOCK();
          *(int *)local_708 = *(int *)local_708 + -1;
          local_31 = *(int *)local_708 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100684513;
        }
        QArrayData::deallocate(local_708,2,8);
      }
LAB_100684513:
      pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_720 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_720);
      QVariant::QVariant(&local_730,true);
      QVariant::operator=(pQVar17,&local_730);
      QVariant::~QVariant(&local_730);
      if (*(int *)local_720 != -1) {
        if (*(int *)local_720 != 0) {
          LOCK();
          *(int *)local_720 = *(int *)local_720 + -1;
          local_31 = *(int *)local_720 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006845b9;
        }
        QArrayData::deallocate(local_720,2,8);
      }
LAB_1006845b9:
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar12 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar16 = _strlen(pcVar1);
        iVar12 = (int)sVar16;
      }
      local_738 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
      pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_738);
      bVar8 = CContentModel::isBusy();
      QVariant::QVariant(&local_748,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar17,&local_748);
      QVariant::~QVariant(&local_748);
      if (*(int *)local_738 != -1) {
        if (*(int *)local_738 != 0) {
          LOCK();
          *(int *)local_738 = *(int *)local_738 + -1;
          local_31 = *(int *)local_738 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_738,2,8);
      }
      break;
    }
    uVar14 = FUN_100675e00(param_2[3]);
    uVar14 = FUN_10016f500(uVar14);
    cVar6 = FUN_10061b500(uVar14,2);
    if (cVar6 == '\0') break;
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_6b8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_6b8);
    QMetaObject::tr((char *)&local_6d0,PTR_staticMetaObject_1021e1520,0x1e0d851);
    QVariant::QVariant(&local_6c8,&local_6d0);
    QVariant::operator=(pQVar17,&local_6c8);
    QVariant::~QVariant(&local_6c8);
    if (*(int *)local_6d0.field0_0x0 != -1) {
      if (*(int *)local_6d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_6d0.field0_0x0 = *(int *)local_6d0.field0_0x0 + -1;
        local_31 = *(int *)local_6d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100685029;
      }
      QArrayData::deallocate((QArrayData *)local_6d0.field0_0x0,2,8);
    }
LAB_100685029:
    if (*(int *)local_6b8 != -1) {
      if (*(int *)local_6b8 != 0) {
        LOCK();
        *(int *)local_6b8 = *(int *)local_6b8 + -1;
        local_31 = *(int *)local_6b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068505f;
      }
      QArrayData::deallocate(local_6b8,2,8);
    }
LAB_10068505f:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_6d8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1);
    QVariant::QVariant(&local_6e8,false);
    QVariant::operator=(pQVar17,&local_6e8);
    QVariant::~QVariant(&local_6e8);
    if (*(int *)local_6d8 != -1) {
      if (*(int *)local_6d8 != 0) {
        LOCK();
        *(int *)local_6d8 = *(int *)local_6d8 + -1;
        local_31 = *(int *)local_6d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100685102;
      }
      QArrayData::deallocate(local_6d8,2,8);
    }
LAB_100685102:
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_6f0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_6f0);
    bVar8 = CContentModel::isBusy();
    QVariant::QVariant(&local_700,(bool)(bVar8 ^ 1));
    QVariant::operator=(pQVar17,&local_700);
    QVariant::~QVariant(&local_700);
    if (*(int *)local_6f0 != -1) {
      if (*(int *)local_6f0 != 0) {
        LOCK();
        *(int *)local_6f0 = *(int *)local_6f0 + -1;
        local_31 = *(int *)local_6f0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_6f0,2,8);
    }
    break;
  case 9:
  case 10:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_750 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_750);
    QVariant::QVariant(&local_760,param_4 == 5);
    QVariant::operator=(pQVar17,&local_760);
    QVariant::~QVariant(&local_760);
    if (*(int *)local_750 != -1) {
      if (*(int *)local_750 != 0) {
        LOCK();
        *(int *)local_750 = *(int *)local_750 + -1;
        local_31 = *(int *)local_750 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_750,2,8);
    }
    break;
  case 0xb:
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_768 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_768);
    bVar9 = (bool)FUN_10067df20(param_2[3]);
    QVariant::QVariant(&local_778,bVar9);
    QVariant::operator=(pQVar17,&local_778);
    QVariant::~QVariant(&local_778);
    if (*(int *)local_768 != -1) {
      if (*(int *)local_768 != 0) {
        LOCK();
        *(int *)local_768 = *(int *)local_768 + -1;
        local_31 = *(int *)local_768 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_768,2,8);
    }
  }
switchD_100683680_caseD_2:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
switchD_100683f46_caseD_1:
  cVar6 = FUN_10061b4d0(uVar14,0x8080);
  if (cVar6 != '\0') {
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_2b0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_2b0);
    QMetaObject::tr((char *)&local_2c8,PTR_staticMetaObject_1021e1520,0x1e0d806);
    QVariant::QVariant(&local_2c0,&local_2c8);
    QVariant::operator=(pQVar17,&local_2c0);
    QVariant::~QVariant(&local_2c0);
    if (*(int *)local_2c8.field0_0x0 != -1) {
      if (*(int *)local_2c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
        local_31 = *(int *)local_2c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100685f8f;
      }
      QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
    }
LAB_100685f8f:
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_31 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100685fc5;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
LAB_100685fc5:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_2d0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_2d0);
    QVariant::QVariant(&local_2e0,true);
    QVariant::operator=(pQVar17,&local_2e0);
    QVariant::~QVariant(&local_2e0);
    if (*(int *)local_2d0 != -1) {
      if (*(int *)local_2d0 != 0) {
        LOCK();
        *(int *)local_2d0 = *(int *)local_2d0 + -1;
        local_31 = *(int *)local_2d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068606b;
      }
      QArrayData::deallocate(local_2d0,2,8);
    }
LAB_10068606b:
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar12 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar16 = _strlen(pcVar1);
      iVar12 = (int)sVar16;
    }
    local_2e8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
    pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_2e8);
    bVar8 = CContentModel::isBusy();
    QVariant::QVariant(&local_2f8,(bool)(bVar8 ^ 1));
    QVariant::operator=(pQVar17,&local_2f8);
    QVariant::~QVariant(&local_2f8);
    if (*(int *)local_2e8 != -1) {
      if (*(int *)local_2e8 != 0) {
        LOCK();
        *(int *)local_2e8 = *(int *)local_2e8 + -1;
        local_31 = *(int *)local_2e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto switchD_100683680_caseD_2;
      }
      QArrayData::deallocate(local_2e8,2,8);
    }
    goto switchD_100683680_caseD_2;
  }
  FUN_10061abe0(&local_308,uVar14,0);
  iVar12 = QVariant::toInt((bool *)&local_308);
  if (iVar12 == 0) {
    bVar9 = false;
LAB_100686c3e:
    cVar6 = FUN_10061b4d0(uVar14,0x20);
    if (bVar9) goto LAB_100686c51;
  }
  else {
    FUN_10061abe0(&local_318,uVar14,0);
    iVar12 = QVariant::toInt((bool *)&local_318);
    cVar6 = '\x01';
    bVar9 = true;
    if (iVar12 == -0x7ffeefa8) goto LAB_100686c3e;
LAB_100686c51:
    QVariant::~QVariant(&local_318);
  }
  QVariant::~QVariant(&local_308);
  if (cVar6 == '\0') goto switchD_100683680_caseD_2;
  pcVar1 = *(char **)PTR_ActionText_1021e14c8;
  iVar12 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar16 = _strlen(pcVar1);
    iVar12 = (int)sVar16;
  }
  local_320 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
  pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_320);
  QMetaObject::tr((char *)&local_338,PTR_staticMetaObject_1021e1520,0x1dd2f2d);
  QVariant::QVariant(&local_330,&local_338);
  QVariant::operator=(pQVar17,&local_330);
  QVariant::~QVariant(&local_330);
  if (*(int *)local_338.field0_0x0 != -1) {
    if (*(int *)local_338.field0_0x0 != 0) {
      LOCK();
      *(int *)local_338.field0_0x0 = *(int *)local_338.field0_0x0 + -1;
      local_31 = *(int *)local_338.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100686d37;
    }
    QArrayData::deallocate((QArrayData *)local_338.field0_0x0,2,8);
  }
LAB_100686d37:
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100686d6d;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_100686d6d:
  pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar12 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar16 = _strlen(pcVar1);
    iVar12 = (int)sVar16;
  }
  local_340 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar12);
  pQVar17 = (QVariant *)FUN_1002edf40(param_1,&local_340);
  QVariant::QVariant(&local_350,true);
  QVariant::operator=(pQVar17,&local_350);
  QVariant::~QVariant(&local_350);
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_31 = *(int *)local_340 != 0;
      UNLOCK();
      if ((bool)local_31) goto switchD_100683680_caseD_2;
    }
    QArrayData::deallocate(local_340,2,8);
  }
  goto switchD_100683680_caseD_2;
}

