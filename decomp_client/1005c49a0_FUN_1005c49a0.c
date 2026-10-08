
void FUN_1005c49a0(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  code *pcVar1;
  Node *pNVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  size_t sVar13;
  QVariant *pQVar14;
  Node *pNVar15;
  Node *pNVar16;
  Node *pNVar17;
  long *plVar18;
  uint uVar19;
  _func_void_Node_ptr *p_Var20;
  _func_void_Node_ptr *p_Var21;
  _func_void_Node_ptr *p_Var22;
  long lVar23;
  _func_void_Node_ptr *p_Var24;
  _func_void_Node_ptr *p_Var25;
  bool bVar26;
  _func_void_Node_ptr *local_760;
  _func_void_Node_ptr *local_758;
  _func_void_Node_ptr *local_750;
  _func_void_Node_ptr *local_748;
  _func_void_Node_ptr *local_740;
  _func_void_Node_ptr *local_738;
  _func_void_Node_ptr *local_730;
  _func_void_Node_ptr *local_728;
  _func_void_Node_ptr *local_720;
  _func_void_Node_ptr *local_718;
  _func_void_Node_ptr *local_710;
  _func_void_Node_ptr *local_708;
  _func_void_Node_ptr *local_700;
  _func_void_Node_ptr *local_6f8;
  QVariant local_6f0;
  QArrayData *local_6e0;
  QString local_6d8;
  QVariant local_6d0;
  QArrayData *local_6c0;
  QVariant local_6b8;
  QArrayData *local_6a8;
  QString local_6a0;
  QVariant local_698;
  QArrayData *local_688;
  QVariant local_680;
  QArrayData *local_670;
  QString local_668;
  QVariant local_660;
  QArrayData *local_650;
  QVariant local_648;
  QArrayData *local_638;
  QVariant local_630;
  QArrayData *local_620;
  int local_618 [26];
  undefined1 local_5b0 [8];
  long local_5a8;
  undefined8 *local_5a0;
  undefined8 *local_598;
  uint local_590;
  QArrayData *local_588;
  undefined4 local_580;
  int local_578 [26];
  QArrayData *local_510;
  undefined4 local_508;
  int local_500 [26];
  QString local_498;
  undefined4 local_490;
  _func_void_Node_ptr *local_488;
  QString local_480;
  QVariant local_478;
  QArrayData *local_468;
  QString local_460;
  QVariant local_458;
  QArrayData *local_448;
  undefined1 local_440 [88];
  undefined1 local_3e8 [40];
  QVariant local_3c0;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QVariant local_3a0;
  QArrayData *local_390;
  QVariant local_388;
  QArrayData *local_378;
  QVariant local_370;
  QArrayData *local_360;
  QVariant local_358;
  QArrayData *local_348;
  QArrayData *local_340;
  QVariant local_338;
  QArrayData *local_328;
  QArrayData *local_320;
  QVariant local_318;
  QArrayData *local_308;
  QArrayData *local_300;
  QVariant local_2f8;
  QArrayData *local_2e8;
  QVariant local_2e0;
  QArrayData *local_2d0;
  QString local_2c8;
  QVariant local_2c0;
  QArrayData *local_2b0;
  QString local_2a8;
  QVariant local_2a0;
  QArrayData *local_290;
  QVariant local_288;
  QArrayData *local_278;
  QArrayData *local_270;
  QVariant local_268;
  QArrayData *local_258;
  QString local_250;
  QVariant local_248;
  QArrayData *local_238;
  QVariant local_230;
  QArrayData *local_220;
  QVariant local_218;
  QArrayData *local_208;
  QString local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  QVariant local_1e0;
  QArrayData *local_1d0;
  QVariant local_1c8;
  QArrayData *local_1b8;
  QString local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QVariant local_190;
  QArrayData *local_180;
  QString local_178;
  QVariant local_170;
  QArrayData *local_160;
  QVariant local_158;
  QArrayData *local_148;
  QVariant local_140;
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QString local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QString local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  bool local_49;
  QUuid local_48 [16];
  long local_38;
  
  lVar23 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar23;
  if (param_2 != 0) goto switchD_1005c49ea_default;
  switch(param_3) {
  case 0:
    FUN_100076800(&local_700,param_4[1]);
    iVar11 = *(int *)param_4[2];
    QMetaObject::cast((QObject *)&DAT_1021f4160);
    pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar9 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar9 = (int)sVar13;
    }
    local_670 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_700,&local_670);
    if ((iVar11 - 7U < 0xd) && ((0x1305U >> (iVar11 - 7U & 0x1f) & 1) != 0)) {
      bVar6 = false;
    }
    else {
      CAbstractWizardActionStateProvider::wizardModel();
      CAbstractWizardModel::pageFlow();
      uVar12 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221e420);
      iVar9 = FUN_1005c33f0(uVar12);
      bVar6 = iVar9 != iVar11;
    }
    QVariant::QVariant(&local_680,bVar6);
    QVariant::operator=(pQVar14,&local_680);
    QVariant::~QVariant(&local_680);
    if (*(int *)local_670 != -1) {
      if (*(int *)local_670 != 0) {
        LOCK();
        *(int *)local_670 = *(int *)local_670 + -1;
        local_49 = *(int *)local_670 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c5932;
      }
      QArrayData::deallocate(local_670,2,8);
    }
LAB_1005c5932:
    pcVar3 = *(char **)PTR_ActionText_1021e14c8;
    iVar9 = -1;
    if (iVar11 == 0xd) {
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar9 = (int)sVar13;
      }
      local_688 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_700,&local_688);
      QMetaObject::tr((char *)&local_6a0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10226ee78)
      ;
      QVariant::QVariant(&local_698,&local_6a0);
      QVariant::operator=(pQVar14,&local_698);
      QVariant::~QVariant(&local_698);
      if (*(int *)local_6a0.field0_0x0 != -1) {
        if (*(int *)local_6a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_6a0.field0_0x0 = *(int *)local_6a0.field0_0x0 + -1;
          local_49 = *(int *)local_6a0.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5a09;
        }
        QArrayData::deallocate((QArrayData *)local_6a0.field0_0x0,2,8);
      }
LAB_1005c5a09:
      if (*(int *)local_688 != -1) {
        if (*(int *)local_688 != 0) {
          LOCK();
          *(int *)local_688 = *(int *)local_688 + -1;
          local_49 = *(int *)local_688 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5a3f;
        }
        QArrayData::deallocate(local_688,2,8);
      }
LAB_1005c5a3f:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_6a8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_700,&local_6a8);
      QVariant::QVariant(&local_6b8,*(char *)(*(long *)(param_1 + 0x10) + 0x138) == '\0');
      QVariant::operator=(pQVar14,&local_6b8);
      QVariant::~QVariant(&local_6b8);
      if (*(int *)local_6a8 != -1) {
        if (*(int *)local_6a8 != 0) {
          LOCK();
          *(int *)local_6a8 = *(int *)local_6a8 + -1;
          local_49 = *(int *)local_6a8 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5ca9;
        }
        QArrayData::deallocate(local_6a8,2,8);
      }
    }
    else {
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar9 = (int)sVar13;
      }
      local_6c0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_700,&local_6c0);
      QMetaObject::tr((char *)&local_6d8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Go_Back_10226ee68
                     );
      QVariant::QVariant(&local_6d0,&local_6d8);
      QVariant::operator=(pQVar14,&local_6d0);
      QVariant::~QVariant(&local_6d0);
      if (*(int *)local_6d8.field0_0x0 != -1) {
        if (*(int *)local_6d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_6d8.field0_0x0 = *(int *)local_6d8.field0_0x0 + -1;
          local_49 = *(int *)local_6d8.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5bbc;
        }
        QArrayData::deallocate((QArrayData *)local_6d8.field0_0x0,2,8);
      }
LAB_1005c5bbc:
      if (*(int *)local_6c0 != -1) {
        if (*(int *)local_6c0 != 0) {
          LOCK();
          *(int *)local_6c0 = *(int *)local_6c0 + -1;
          local_49 = *(int *)local_6c0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5bf2;
        }
        QArrayData::deallocate(local_6c0,2,8);
      }
LAB_1005c5bf2:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar9 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar9 = (int)sVar13;
      }
      local_6e0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_700,&local_6e0);
      QVariant::QVariant(&local_6f0,iVar11 != 8 && 1 < iVar11 - 5U);
      QVariant::operator=(pQVar14,&local_6f0);
      QVariant::~QVariant(&local_6f0);
      if (*(int *)local_6e0 != -1) {
        if (*(int *)local_6e0 != 0) {
          LOCK();
          *(int *)local_6e0 = *(int *)local_6e0 + -1;
          local_49 = *(int *)local_6e0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5ca9;
        }
        QArrayData::deallocate(local_6e0,2,8);
      }
    }
LAB_1005c5ca9:
    FUN_100076800(&local_6f8,&local_700);
    lVar23 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (*(int *)(local_700 + 0x10) != -1) {
      if (*(int *)(local_700 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_700 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c5cf5;
      }
      QHashData::free_helper(local_700);
    }
LAB_1005c5cf5:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_6f8);
    }
    if (*(int *)(local_6f8 + 0x10) == -1) goto switchD_1005c49ea_default;
    local_758 = local_6f8;
    if (*(int *)(local_6f8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_6f8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
LAB_1005c7a4c:
      if (local_49 != false) goto switchD_1005c49ea_default;
    }
    break;
  case 1:
    FUN_100076800(&local_710,param_4[1]);
    iVar11 = *(int *)param_4[2];
    pcVar3 = *(char **)PTR_ActionText_1021e14c8;
    iVar9 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar9 = (int)sVar13;
    }
    local_2b0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_2b0);
    QMetaObject::tr((char *)&local_2c8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Continue_10226ee70)
    ;
    QVariant::QVariant(&local_2c0,&local_2c8);
    QVariant::operator=(pQVar14,&local_2c0);
    QVariant::~QVariant(&local_2c0);
    if (*(int *)local_2c8.field0_0x0 != -1) {
      if (*(int *)local_2c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
        local_49 = *(int *)local_2c8.field0_0x0 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c4b9a;
      }
      QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
    }
LAB_1005c4b9a:
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_49 = *(int *)local_2b0 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c4bd0;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
LAB_1005c4bd0:
    puVar5 = PTR_ActionVisible_1021e14e8;
    pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar9 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar9 = (int)sVar13;
    }
    local_2d0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_2d0);
    bVar6 = true;
    if (iVar11 - 9U < 0xb) {
      bVar6 = (bool)((byte)(0x36e >> ((byte)(iVar11 - 9U) & 0x1f)) & 1);
    }
    QVariant::QVariant(&local_2e0,bVar6);
    QVariant::operator=(pQVar14,&local_2e0);
    QVariant::~QVariant(&local_2e0);
    if (*(int *)local_2d0 != -1) {
      if (*(int *)local_2d0 != 0) {
        LOCK();
        *(int *)local_2d0 = *(int *)local_2d0 + -1;
        local_49 = *(int *)local_2d0 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c4c8b;
      }
      QArrayData::deallocate(local_2d0,2,8);
    }
LAB_1005c4c8b:
    if (iVar11 == 0xf) {
      pcVar3 = *(char **)puVar5;
      iVar9 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar9 = (int)sVar13;
      }
      local_2e8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_2e8);
      QVariant::QVariant(&local_2f8,*(int *)(*(long *)(param_1 + 0x10) + 0x50) != 0);
      QVariant::operator=(pQVar14,&local_2f8);
      QVariant::~QVariant(&local_2f8);
      if (*(int *)local_2e8 != -1) {
        if (*(int *)local_2e8 != 0) {
          LOCK();
          *(int *)local_2e8 = *(int *)local_2e8 + -1;
          local_49 = *(int *)local_2e8 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c4d3e;
        }
        QArrayData::deallocate(local_2e8,2,8);
      }
    }
LAB_1005c4d3e:
    pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar9 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar9 = (int)sVar13;
    }
    local_300 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
    FUN_1002edf40(&local_710,&local_300);
    cVar7 = QVariant::toBool();
    if (cVar7 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      if (iVar11 - 5U < 4) {
        bVar6 = (iVar11 - 5U & 0xf) == 2;
      }
    }
    if (*(int *)local_300 != -1) {
      if (*(int *)local_300 != 0) {
        LOCK();
        *(int *)local_300 = *(int *)local_300 + -1;
        local_49 = *(int *)local_300 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c5725;
      }
      QArrayData::deallocate(local_300,2,8);
    }
LAB_1005c5725:
    pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar9 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar9 = (int)sVar13;
    }
    local_308 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_308);
    QVariant::QVariant(&local_318,bVar6);
    QVariant::operator=(pQVar14,&local_318);
    QVariant::~QVariant(&local_318);
    if (*(int *)local_308 != -1) {
      if (*(int *)local_308 != 0) {
        LOCK();
        *(int *)local_308 = *(int *)local_308 + -1;
        local_49 = *(int *)local_308 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c57ca;
      }
      QArrayData::deallocate(local_308,2,8);
    }
LAB_1005c57ca:
    switch(iVar11) {
    case 2:
      pcVar3 = *(char **)puVar5;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_378 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_378);
      QVariant::QVariant(&local_388,*(int *)(*(long *)(param_1 + 0x10) + 0x50) != 9);
      QVariant::operator=(pQVar14,&local_388);
      QVariant::~QVariant(&local_388);
      if (*(int *)local_378 != -1) {
        if (*(int *)local_378 != 0) {
          LOCK();
          *(int *)local_378 = *(int *)local_378 + -1;
          local_49 = *(int *)local_378 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_378,2,8);
      }
      break;
    case 4:
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 8) {
        pcVar3 = *(char **)PTR_ActionText_1021e14c8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_468 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_468);
        QMetaObject::tr((char *)&local_480,PTR_staticMetaObject_1021e1520,0x1e04483);
        QVariant::QVariant(&local_478,&local_480);
        QVariant::operator=(pQVar14,&local_478);
        QVariant::~QVariant(&local_478);
        if (*(int *)local_480.field0_0x0 != -1) {
          if (*(int *)local_480.field0_0x0 != 0) {
            LOCK();
            *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + -1;
            local_49 = *(int *)local_480.field0_0x0 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c6992;
          }
          QArrayData::deallocate((QArrayData *)local_480.field0_0x0,2,8);
        }
LAB_1005c6992:
        if (*(int *)local_468 != -1) {
          if (*(int *)local_468 != 0) {
            LOCK();
            *(int *)local_468 = *(int *)local_468 + -1;
            local_49 = *(int *)local_468 != 0;
            UNLOCK();
            if (local_49) break;
          }
          QArrayData::deallocate(local_468,2,8);
        }
      }
      break;
    case 7:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_320 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      FUN_1002edf40(&local_710,&local_320);
      cVar7 = QVariant::toBool();
      if (*(int *)local_320 != -1) {
        if (*(int *)local_320 != 0) {
          LOCK();
          *(int *)local_320 = *(int *)local_320 + -1;
          local_49 = *(int *)local_320 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6a57;
        }
        QArrayData::deallocate(local_320,2,8);
      }
LAB_1005c6a57:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_328 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_328);
      if (cVar7 == '\0') {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x50) != -1;
      }
      QVariant::QVariant(&local_338,bVar6);
      QVariant::operator=(pQVar14,&local_338);
      QVariant::~QVariant(&local_338);
      if (*(int *)local_328 != -1) {
        if (*(int *)local_328 != 0) {
          LOCK();
          *(int *)local_328 = *(int *)local_328 + -1;
          local_49 = *(int *)local_328 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c71ea;
        }
        QArrayData::deallocate(local_328,2,8);
      }
LAB_1005c71ea:
      pcVar3 = *(char **)puVar5;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_340 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      FUN_1002edf40(&local_710,&local_340);
      cVar7 = QVariant::toBool();
      if (*(int *)local_340 != -1) {
        if (*(int *)local_340 != 0) {
          LOCK();
          *(int *)local_340 = *(int *)local_340 + -1;
          local_49 = *(int *)local_340 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c7266;
        }
        QArrayData::deallocate(local_340,2,8);
      }
LAB_1005c7266:
      pcVar3 = *(char **)puVar5;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_348 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_348);
      if (cVar7 == '\0') {
        bVar6 = false;
      }
      else {
        bVar6 = (*(uint *)(*(long *)(param_1 + 0x10) + 0x50) & 0xfffffffe) != 2;
      }
      QVariant::QVariant(&local_358,bVar6);
      QVariant::operator=(pQVar14,&local_358);
      QVariant::~QVariant(&local_358);
      if (*(int *)local_348 != -1) {
        if (*(int *)local_348 != 0) {
          LOCK();
          *(int *)local_348 = *(int *)local_348 + -1;
          local_49 = *(int *)local_348 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_348,2,8);
      }
      break;
    case 0xb:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_390 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_390);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      local_3a8 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
      uVar12 = FUN_1005b8a40(uVar12,&local_3a8);
      iVar11 = FUN_100746a60(uVar12);
      QVariant::QVariant(&local_3a0,iVar11 == 2);
      QVariant::operator=(pQVar14,&local_3a0);
      QVariant::~QVariant(&local_3a0);
      if (*(int *)local_3a8 != -1) {
        if (*(int *)local_3a8 != 0) {
          LOCK();
          *(int *)local_3a8 = *(int *)local_3a8 + -1;
          local_49 = *(int *)local_3a8 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6b91;
        }
        QArrayData::deallocate(local_3a8,2,8);
      }
LAB_1005c6b91:
      if (*(int *)local_390 != -1) {
        if (*(int *)local_390 != 0) {
          LOCK();
          *(int *)local_390 = *(int *)local_390 + -1;
          local_49 = *(int *)local_390 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_390,2,8);
      }
      break;
    case 0xc:
    case 0xe:
    case 0x14:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_3b0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_3b0);
      FUN_1005b69c0(local_440,*(undefined8 *)(param_1 + 0x10));
      bVar6 = (bool)FUN_10073dd70(local_440);
      QVariant::QVariant(&local_3c0,bVar6);
      QVariant::operator=(pQVar14,&local_3c0);
      QVariant::~QVariant(&local_3c0);
      FUN_100252c80(local_3e8);
      FUN_100252e70(local_440);
      if (*(int *)local_3b0 != -1) {
        if (*(int *)local_3b0 != 0) {
          LOCK();
          *(int *)local_3b0 = *(int *)local_3b0 + -1;
          local_49 = *(int *)local_3b0 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_3b0,2,8);
      }
      break;
    case 0x12:
      pcVar3 = *(char **)puVar5;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_360 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_360);
      QVariant::QVariant(&local_370,*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 9);
      QVariant::operator=(pQVar14,&local_370);
      QVariant::~QVariant(&local_370);
      if (*(int *)local_360 != -1) {
        if (*(int *)local_360 != 0) {
          LOCK();
          *(int *)local_360 = *(int *)local_360 + -1;
          local_49 = *(int *)local_360 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_360,2,8);
      }
      break;
    case 0x15:
      lVar23 = *(long *)(param_1 + 0x10);
      if (*(int *)(lVar23 + 0x14c) == 1) {
        pNVar16 = *(Node **)(lVar23 + 0x140);
        if (1 < *(int *)(pNVar16 + 0x10) + 1U) {
          LOCK();
          pNVar15 = pNVar16 + 0x10;
          *(int *)pNVar15 = *(int *)pNVar15 + 1;
          local_49 = *(int *)pNVar15 != 0;
          UNLOCK();
        }
        pNVar15 = pNVar16;
        if ((((byte)pNVar16[0x28] & 1) == 0) && (1 < *(uint *)(pNVar16 + 0x10))) {
          pNVar15 = (Node *)QHashData::detach_helper
                                      ((_func_void_Node_ptr_void_ptr *)pNVar16,FUN_100287c60,
                                       0x286900,0x88);
          if (*(int *)(pNVar16 + 0x10) != -1) {
            if (*(int *)(pNVar16 + 0x10) != 0) {
              LOCK();
              pNVar17 = pNVar16 + 0x10;
              *(int *)pNVar17 = *(int *)pNVar17 + -1;
              local_49 = *(int *)pNVar17 != 0;
              UNLOCK();
              if (local_49) goto LAB_1005c7448;
            }
            QHashData::free_helper((_func_void_Node_ptr *)pNVar16);
          }
        }
LAB_1005c7448:
        pNVar16 = pNVar15;
        if (1 < *(uint *)(pNVar15 + 0x10)) {
          pNVar16 = (Node *)QHashData::detach_helper
                                      ((_func_void_Node_ptr_void_ptr *)pNVar15,FUN_100287c60,
                                       0x286900,0x88);
          if (*(int *)(pNVar15 + 0x10) != -1) {
            if (*(int *)(pNVar15 + 0x10) != 0) {
              LOCK();
              pNVar17 = pNVar15 + 0x10;
              *(int *)pNVar17 = *(int *)pNVar17 + -1;
              local_49 = *(int *)pNVar17 != 0;
              UNLOCK();
              if (local_49) goto LAB_1005c74af;
            }
            QHashData::free_helper((_func_void_Node_ptr *)pNVar15);
          }
        }
LAB_1005c74af:
        iVar11 = *(int *)(pNVar16 + 0x20);
        pNVar15 = pNVar16;
        if (iVar11 != 0) {
          plVar18 = *(long **)(pNVar16 + 8);
          do {
            pNVar15 = (Node *)*plVar18;
            if ((Node *)*plVar18 != pNVar16) break;
            iVar11 = iVar11 + -1;
            plVar18 = plVar18 + 1;
            pNVar15 = pNVar16;
          } while (iVar11 != 0);
        }
LAB_1005c74d5:
        pNVar17 = pNVar16;
        if (1 < *(uint *)(pNVar16 + 0x10)) {
          pNVar17 = (Node *)QHashData::detach_helper
                                      ((_func_void_Node_ptr_void_ptr *)pNVar16,FUN_100287c60,
                                       0x286900,0x88);
          if (*(int *)(pNVar16 + 0x10) != -1) {
            if (*(int *)(pNVar16 + 0x10) != 0) {
              LOCK();
              pNVar2 = pNVar16 + 0x10;
              *(int *)pNVar2 = *(int *)pNVar2 + -1;
              local_49 = *(int *)pNVar2 != 0;
              UNLOCK();
              if (local_49) goto LAB_1005c7531;
            }
            QHashData::free_helper((_func_void_Node_ptr *)pNVar16);
          }
        }
LAB_1005c7531:
        if (pNVar15 != pNVar17) {
          bVar26 = *(int *)(pNVar15 + 0x20) == 0x80f;
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) != 4) {
            bVar26 = *(int *)(pNVar15 + 0x20) != 0xff;
          }
          bVar6 = true;
          if (bVar26) goto LAB_1005c75b3;
          pNVar15 = (Node *)QHashData::nextNode(pNVar15);
          pNVar16 = pNVar17;
          goto LAB_1005c74d5;
        }
        bVar6 = false;
LAB_1005c75b3:
        bVar26 = (bool)(bVar6 ^ 1);
        if (*(int *)(pNVar17 + 0x10) != -1) {
          if (*(int *)(pNVar17 + 0x10) != 0) {
            LOCK();
            pNVar16 = pNVar17 + 0x10;
            *(int *)pNVar16 = *(int *)pNVar16 + -1;
            local_49 = *(int *)pNVar16 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c77e3;
          }
          QHashData::free_helper((_func_void_Node_ptr *)pNVar17);
        }
      }
      else {
        FUN_1005bca20(&local_488,lVar23,*(undefined4 *)(lVar23 + 0x158));
        p_Var20 = local_488;
        lVar23 = *(long *)(param_1 + 0x10);
        if (*(int *)(lVar23 + 0x158) == 2) {
          local_498.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar23 + 0x150);
          local_490 = 2;
          if (1 < *(int *)local_498.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_498.field0_0x0 = *(int *)local_498.field0_0x0 + 1;
            local_49 = *(int *)local_498.field0_0x0 != 0;
            UNLOCK();
            local_490 = *(undefined4 *)(lVar23 + 0x158);
          }
          uVar19 = *(uint *)(local_488 + 0x20);
          p_Var25 = p_Var20;
          if (uVar19 != 0) {
            uVar10 = qHash(&local_498,*(uint *)(local_488 + 0x24));
            uVar4 = (ulong)uVar10 % (ulong)uVar19;
            p_Var21 = *(_func_void_Node_ptr **)(*(long *)(p_Var20 + 8) + uVar4 * 8);
            if (p_Var21 != p_Var20) {
              p_Var24 = (_func_void_Node_ptr *)(*(long *)(p_Var20 + 8) + uVar4 * 8);
              do {
                p_Var22 = p_Var21;
                p_Var25 = p_Var20;
                if (*(uint *)(p_Var21 + 8) == uVar10) {
                  cVar7 = operator==(&local_498,(QString *)(p_Var21 + 0x10));
                  p_Var20 = *(_func_void_Node_ptr **)p_Var24;
                  p_Var22 = p_Var20;
                  p_Var25 = local_488;
                  if (cVar7 != '\0') break;
                }
                p_Var20 = p_Var25;
                p_Var21 = *(_func_void_Node_ptr **)p_Var22;
                p_Var24 = p_Var22;
                p_Var25 = p_Var20;
              } while (p_Var21 != p_Var20);
            }
          }
          if (*(int *)local_498.field0_0x0 != -1) {
            if (*(int *)local_498.field0_0x0 != 0) {
              LOCK();
              *(int *)local_498.field0_0x0 = *(int *)local_498.field0_0x0 + -1;
              local_49 = *(int *)local_498.field0_0x0 != 0;
              UNLOCK();
              if (local_49) goto LAB_1005c7647;
            }
            QArrayData::deallocate((QArrayData *)local_498.field0_0x0,2,8);
          }
LAB_1005c7647:
          if (p_Var20 == p_Var25) {
            bVar6 = false;
          }
          else {
            lVar23 = *(long *)(param_1 + 0x10);
            if (*(int *)(lVar23 + 0x50) == 4) {
              local_510 = *(QArrayData **)(lVar23 + 0x150);
              if (1 < *(int *)local_510 + 1U) {
                LOCK();
                *(int *)local_510 = *(int *)local_510 + 1;
                local_49 = *(int *)local_510 != 0;
                UNLOCK();
              }
              local_508 = *(undefined4 *)(lVar23 + 0x158);
              FUN_1005c95e0(local_500,&local_488,&local_510);
              FUN_10005e410(local_500);
              bVar6 = local_500[0] == 0x80f;
              if (*(int *)local_510 != -1) {
                if (*(int *)local_510 != 0) {
                  LOCK();
                  *(int *)local_510 = *(int *)local_510 + -1;
                  local_49 = *(int *)local_510 != 0;
                  UNLOCK();
                  if (local_49) goto LAB_1005c77a1;
                }
                QArrayData::deallocate(local_510,2,8);
              }
            }
            else {
              local_588 = *(QArrayData **)(lVar23 + 0x150);
              if (1 < *(int *)local_588 + 1U) {
                LOCK();
                *(int *)local_588 = *(int *)local_588 + 1;
                local_49 = *(int *)local_588 != 0;
                UNLOCK();
              }
              local_580 = *(undefined4 *)(lVar23 + 0x158);
              FUN_1005c95e0(local_578,&local_488,&local_588);
              FUN_10005e410(local_578);
              bVar6 = local_578[0] != 0xff;
              if (*(int *)local_588 != -1) {
                if (*(int *)local_588 != 0) {
                  LOCK();
                  *(int *)local_588 = *(int *)local_588 + -1;
                  local_49 = *(int *)local_588 != 0;
                  UNLOCK();
                  if (local_49) goto LAB_1005c77a1;
                }
                QArrayData::deallocate(local_588,2,8);
              }
            }
          }
        }
        else {
          FUN_1005c9700(local_5b0,&local_488);
          FUN_1005c9d20(&local_5a8,local_5b0);
          local_5a0 = (undefined8 *)(local_5a8 + 0x10 + (long)*(int *)(local_5a8 + 8) * 8);
          local_598 = (undefined8 *)(local_5a8 + 0x10 + (long)*(int *)(local_5a8 + 0xc) * 8);
          local_590 = 1;
          FUN_1005c97c0(local_5b0);
          if (local_590 == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = false;
            do {
              if (local_5a0 == local_598) break;
              FUN_100260700(local_618,*local_5a0);
              if (local_590 != 0) {
                bVar26 = local_618[0] == 0x80f;
                if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) != 4) {
                  bVar26 = local_618[0] != 0xff;
                }
                bVar6 = true;
                if (!bVar26) {
                  local_590 = 0;
                  bVar6 = false;
                }
              }
              FUN_10005e410(local_618);
              local_5a0 = local_5a0 + 1;
              uVar19 = local_590 ^ 1;
              bVar26 = local_590 != 1;
              local_590 = uVar19;
            } while (bVar26);
          }
          FUN_1005c97c0(&local_5a8);
        }
LAB_1005c77a1:
        if (*(int *)(local_488 + 0x10) == -1) {
          bVar26 = false;
        }
        else {
          if (*(int *)(local_488 + 0x10) != 0) {
            LOCK();
            pcVar1 = local_488 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_49 = *(int *)pcVar1 != 0;
            UNLOCK();
            if (local_49) {
              bVar26 = false;
              goto LAB_1005c77e3;
            }
          }
          QHashData::free_helper(local_488);
          bVar26 = false;
        }
      }
LAB_1005c77e3:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 4) {
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_620 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_620);
        if (bVar6) {
          cVar7 = FUN_1005be8e0(*(undefined8 *)(param_1 + 0x10));
          if (cVar7 == '\0') {
            bVar8 = false;
            if ((!bVar26) && (lVar23 = *(long *)(param_1 + 0x10), *(int *)(lVar23 + 0x14c) == 1))
            goto LAB_1005c795b;
          }
          else if (bVar26) {
            bVar8 = false;
          }
          else {
            lVar23 = *(long *)(param_1 + 0x10);
LAB_1005c795b:
            bVar8 = FUN_1005bec90(lVar23);
            bVar8 = bVar8 ^ 1;
          }
        }
        else {
          bVar8 = false;
        }
        QVariant::QVariant(&local_630,(bool)bVar8);
        QVariant::operator=(pQVar14,&local_630);
        QVariant::~QVariant(&local_630);
        if (*(int *)local_620 != -1) {
          if (*(int *)local_620 != 0) {
            LOCK();
            *(int *)local_620 = *(int *)local_620 + -1;
            local_49 = *(int *)local_620 != 0;
            UNLOCK();
            if (local_49) break;
          }
          QArrayData::deallocate(local_620,2,8);
        }
      }
      else {
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_638 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_638);
        lVar23 = *(long *)(param_1 + 0x10);
        if (bVar6 || *(char *)(lVar23 + 0x148) != '\0') {
          if (bVar26) {
            bVar8 = false;
          }
          else {
LAB_1005c78c8:
            bVar8 = FUN_1005bec90(lVar23);
            bVar8 = bVar8 ^ 1;
          }
        }
        else {
          bVar8 = FUN_1005be8e0();
          if ((!bVar26 & bVar8) == 1) {
            lVar23 = *(long *)(param_1 + 0x10);
            goto LAB_1005c78c8;
          }
          bVar8 = false;
        }
        QVariant::QVariant(&local_648,(bool)bVar8);
        QVariant::operator=(pQVar14,&local_648);
        QVariant::~QVariant(&local_648);
        if (*(int *)local_638 != -1) {
          if (*(int *)local_638 != 0) {
            LOCK();
            *(int *)local_638 = *(int *)local_638 + -1;
            local_49 = *(int *)local_638 != 0;
            UNLOCK();
            if (local_49) break;
          }
          QArrayData::deallocate(local_638,2,8);
        }
      }
      break;
    case 0x16:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_448 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_448);
      local_460.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x10) + 0x98)
      ;
      if (1 < *(int *)local_460.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + 1;
        local_49 = *(int *)local_460.field0_0x0 != 0;
        UNLOCK();
      }
      QUuid::QUuid(local_48,&local_460);
      bVar8 = QUuid::isNull();
      QVariant::QVariant(&local_458,(bool)(bVar8 ^ 1));
      QVariant::operator=(pQVar14,&local_458);
      QVariant::~QVariant(&local_458);
      if (*(int *)local_460.field0_0x0 != -1) {
        if (*(int *)local_460.field0_0x0 != 0) {
          LOCK();
          *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
          local_49 = *(int *)local_460.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6e06;
        }
        QArrayData::deallocate((QArrayData *)local_460.field0_0x0,2,8);
      }
LAB_1005c6e06:
      if (*(int *)local_448 != -1) {
        if (*(int *)local_448 != 0) {
          LOCK();
          *(int *)local_448 = *(int *)local_448 + -1;
          local_49 = *(int *)local_448 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_448,2,8);
      }
      break;
    case 0x17:
      pcVar3 = *(char **)PTR_ActionText_1021e14c8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_650 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_710,&local_650);
      QMetaObject::tr((char *)&local_668,PTR_staticMetaObject_1021e1520,0x1de7b3a);
      QVariant::QVariant(&local_660,&local_668);
      QVariant::operator=(pQVar14,&local_660);
      QVariant::~QVariant(&local_660);
      if (*(int *)local_668.field0_0x0 != -1) {
        if (*(int *)local_668.field0_0x0 != 0) {
          LOCK();
          *(int *)local_668.field0_0x0 = *(int *)local_668.field0_0x0 + -1;
          local_49 = *(int *)local_668.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6f13;
        }
        QArrayData::deallocate((QArrayData *)local_668.field0_0x0,2,8);
      }
LAB_1005c6f13:
      if (*(int *)local_650 != -1) {
        if (*(int *)local_650 != 0) {
          LOCK();
          *(int *)local_650 = *(int *)local_650 + -1;
          local_49 = *(int *)local_650 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_650,2,8);
      }
    }
    FUN_100076800(&local_708,&local_710);
    lVar23 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (*(int *)(local_710 + 0x10) != -1) {
      if (*(int *)(local_710 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_710 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c7a1c;
      }
      QHashData::free_helper(local_710);
    }
LAB_1005c7a1c:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_708);
    }
    if (*(int *)(local_708 + 0x10) == -1) goto switchD_1005c49ea_default;
    local_758 = local_708;
    if (*(int *)(local_708 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_708 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      goto LAB_1005c7a4c;
    }
    break;
  case 2:
    FUN_100076800(&local_720,param_4[1]);
    switch(*(undefined4 *)param_4[2]) {
    case 2:
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 9) {
        pcVar3 = *(char **)PTR_ActionText_1021e14c8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_198 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_198);
        QMetaObject::tr((char *)&local_1b0,PTR_staticMetaObject_1021e1520,0x1e04483);
        QVariant::QVariant(&local_1a8,&local_1b0);
        QVariant::operator=(pQVar14,&local_1a8);
        QVariant::~QVariant(&local_1a8);
        if (*(int *)local_1b0.field0_0x0 != -1) {
          if (*(int *)local_1b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
            local_49 = *(int *)local_1b0.field0_0x0 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c5e12;
          }
          QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
        }
LAB_1005c5e12:
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_49 = *(int *)local_198 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c5e48;
          }
          QArrayData::deallocate(local_198,2,8);
        }
LAB_1005c5e48:
        pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_1b8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_1b8);
        QVariant::QVariant(&local_1c8,*(long *)(*(long *)(param_1 + 0x10) + 0xa0) != 0);
        QVariant::operator=(pQVar14,&local_1c8);
        QVariant::~QVariant(&local_1c8);
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_49 = *(int *)local_1b8 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c5efb;
          }
          QArrayData::deallocate(local_1b8,2,8);
        }
LAB_1005c5efb:
        pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_1d0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_1d0);
        QVariant::QVariant(&local_1e0,true);
        QVariant::operator=(pQVar14,&local_1e0);
        QVariant::~QVariant(&local_1e0);
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_49 = *(int *)local_1d0 != 0;
            UNLOCK();
            if (local_49) break;
          }
          QArrayData::deallocate(local_1d0,2,8);
        }
      }
      break;
    default:
      pcVar3 = *(char **)PTR_ActionText_1021e14c8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_290 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_290);
      QMetaObject::tr((char *)&local_2a8,PTR_staticMetaObject_1021e1520,0x1dccf37);
      QVariant::QVariant(&local_2a0,&local_2a8);
      QVariant::operator=(pQVar14,&local_2a0);
      QVariant::~QVariant(&local_2a0);
      if (*(int *)local_2a8.field0_0x0 != -1) {
        if (*(int *)local_2a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
          local_49 = *(int *)local_2a8.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c562a;
        }
        QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
      }
LAB_1005c562a:
      if (*(int *)local_290 != -1) {
        if (*(int *)local_290 != 0) {
          LOCK();
          *(int *)local_290 = *(int *)local_290 + -1;
          local_49 = *(int *)local_290 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_290,2,8);
      }
      break;
    case 7:
      pcVar3 = *(char **)PTR_ActionText_1021e14c8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_238 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_238);
      QMetaObject::tr((char *)&local_250,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Continue_10226ee70);
      QVariant::QVariant(&local_248,&local_250);
      QVariant::operator=(pQVar14,&local_248);
      QVariant::~QVariant(&local_248);
      if (*(int *)local_250.field0_0x0 != -1) {
        if (*(int *)local_250.field0_0x0 != 0) {
          LOCK();
          *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
          local_49 = *(int *)local_250.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6082;
        }
        QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
      }
LAB_1005c6082:
      if (*(int *)local_238 != -1) {
        if (*(int *)local_238 != 0) {
          LOCK();
          *(int *)local_238 = *(int *)local_238 + -1;
          local_49 = *(int *)local_238 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c60b8;
        }
        QArrayData::deallocate(local_238,2,8);
      }
LAB_1005c60b8:
      puVar5 = PTR_ActionEnabled_1021e14e0;
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_258 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_258);
      pcVar3 = *(char **)puVar5;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_270 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      FUN_1002edf40(&local_720,&local_270);
      cVar7 = QVariant::toBool();
      if (cVar7 == '\0') {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x50) != -1;
      }
      QVariant::QVariant(&local_268,bVar6);
      QVariant::operator=(pQVar14,&local_268);
      QVariant::~QVariant(&local_268);
      if (*(int *)local_270 != -1) {
        if (*(int *)local_270 != 0) {
          LOCK();
          *(int *)local_270 = *(int *)local_270 + -1;
          local_49 = *(int *)local_270 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6fb8;
        }
        QArrayData::deallocate(local_270,2,8);
      }
LAB_1005c6fb8:
      if (*(int *)local_258 != -1) {
        if (*(int *)local_258 != 0) {
          LOCK();
          *(int *)local_258 = *(int *)local_258 + -1;
          local_49 = *(int *)local_258 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6fee;
        }
        QArrayData::deallocate(local_258,2,8);
      }
LAB_1005c6fee:
      pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_278 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_278);
      QVariant::QVariant(&local_288,(*(uint *)(*(long *)(param_1 + 0x10) + 0x50) & 0xfffffffe) == 2)
      ;
      QVariant::operator=(pQVar14,&local_288);
      QVariant::~QVariant(&local_288);
      if (*(int *)local_278 != -1) {
        if (*(int *)local_278 != 0) {
          LOCK();
          *(int *)local_278 = *(int *)local_278 + -1;
          local_49 = *(int *)local_278 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_278,2,8);
      }
      break;
    case 9:
    case 0x10:
    case 0x15:
      pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_180 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720);
      QVariant::QVariant(&local_190,false);
      QVariant::operator=(pQVar14,&local_190);
      QVariant::~QVariant(&local_190);
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_49 = *(int *)local_180 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_180,2,8);
      }
      break;
    case 0xf:
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 9) {
        pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_148 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720);
        QVariant::QVariant(&local_158,false);
        QVariant::operator=(pQVar14,&local_158);
        QVariant::~QVariant(&local_158);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_49 = *(int *)local_148 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c620e;
          }
          QArrayData::deallocate(local_148,2,8);
        }
      }
LAB_1005c620e:
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) == 0) {
        pcVar3 = *(char **)PTR_ActionText_1021e14c8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_160 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_160);
        QMetaObject::tr((char *)&local_178,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Continue_10226ee70);
        QVariant::QVariant(&local_170,&local_178);
        QVariant::operator=(pQVar14,&local_170);
        QVariant::~QVariant(&local_170);
        if (*(int *)local_178.field0_0x0 != -1) {
          if (*(int *)local_178.field0_0x0 != 0) {
            LOCK();
            *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
            local_49 = *(int *)local_178.field0_0x0 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c62e9;
          }
          QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
        }
LAB_1005c62e9:
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_49 = *(int *)local_160 != 0;
            UNLOCK();
            if (local_49) break;
          }
          QArrayData::deallocate(local_160,2,8);
        }
      }
      break;
    case 0x12:
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x50) != 9) {
        pcVar3 = *(char **)PTR_ActionText_1021e14c8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_1e8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_1e8);
        QMetaObject::tr((char *)&local_200,PTR_staticMetaObject_1021e1520,0x1e04483);
        QVariant::QVariant(&local_1f8,&local_200);
        QVariant::operator=(pQVar14,&local_1f8);
        QVariant::~QVariant(&local_1f8);
        if (*(int *)local_200.field0_0x0 != -1) {
          if (*(int *)local_200.field0_0x0 != 0) {
            LOCK();
            *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
            local_49 = *(int *)local_200.field0_0x0 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c640b;
          }
          QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
        }
LAB_1005c640b:
        if (*(int *)local_1e8 != -1) {
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            local_49 = *(int *)local_1e8 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c6441;
          }
          QArrayData::deallocate(local_1e8,2,8);
        }
LAB_1005c6441:
        pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_208 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_208);
        QVariant::QVariant(&local_218,*(long *)(*(long *)(param_1 + 0x10) + 0xa0) != 0);
        QVariant::operator=(pQVar14,&local_218);
        QVariant::~QVariant(&local_218);
        if (*(int *)local_208 != -1) {
          if (*(int *)local_208 != 0) {
            LOCK();
            *(int *)local_208 = *(int *)local_208 + -1;
            local_49 = *(int *)local_208 != 0;
            UNLOCK();
            if (local_49) goto LAB_1005c64f4;
          }
          QArrayData::deallocate(local_208,2,8);
        }
LAB_1005c64f4:
        pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
        iVar11 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar13 = _strlen(pcVar3);
          iVar11 = (int)sVar13;
        }
        local_220 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
        pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_220);
        QVariant::QVariant(&local_230,true);
        QVariant::operator=(pQVar14,&local_230);
        QVariant::~QVariant(&local_230);
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 != 0) {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + -1;
            local_49 = *(int *)local_220 != 0;
            UNLOCK();
            if (local_49) break;
          }
          QArrayData::deallocate(local_220,2,8);
        }
      }
      break;
    case 0x13:
      pcVar3 = *(char **)PTR_ActionText_1021e14c8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_f8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_f8);
      QMetaObject::tr((char *)&local_110,PTR_staticMetaObject_1021e1520,0x1dc5159);
      QVariant::QVariant(&local_108,&local_110);
      QVariant::operator=(pQVar14,&local_108);
      QVariant::~QVariant(&local_108);
      if (*(int *)local_110.field0_0x0 != -1) {
        if (*(int *)local_110.field0_0x0 != 0) {
          LOCK();
          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
          local_49 = *(int *)local_110.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6678;
        }
        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
      }
LAB_1005c6678:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_49 = *(int *)local_f8 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c66ae;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1005c66ae:
      pcVar3 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_118 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720);
      QVariant::QVariant(&local_128,false);
      QVariant::operator=(pQVar14,&local_128);
      QVariant::~QVariant(&local_128);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_49 = *(int *)local_118 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c6751;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1005c6751:
      pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_130 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_720,&local_130);
      QVariant::QVariant(&local_140,true);
      QVariant::operator=(pQVar14,&local_140);
      QVariant::~QVariant(&local_140);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_49 = *(int *)local_130 != 0;
          UNLOCK();
          if (local_49) break;
        }
        QArrayData::deallocate(local_130,2,8);
      }
    }
    FUN_100076800(&local_718,&local_720);
    if (*(int *)(local_720 + 0x10) != -1) {
      if (*(int *)(local_720 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_720 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c56af;
      }
      QHashData::free_helper(local_720);
    }
LAB_1005c56af:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_718);
    }
    if (*(int *)(local_718 + 0x10) == -1) goto switchD_1005c49ea_default;
    local_758 = local_718;
    if (*(int *)(local_718 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_718 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      goto LAB_1005c7a4c;
    }
    break;
  case 3:
    FUN_100076800(&local_730,param_4[1]);
    iVar11 = *(int *)param_4[2];
    pcVar3 = *(char **)PTR_ActionText_1021e14c8;
    iVar9 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar9 = (int)sVar13;
    }
    local_c0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar9);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_730,&local_c0);
    QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10226ee78);
    QVariant::QVariant(&local_d0,&local_d8);
    QVariant::operator=(pQVar14,&local_d0);
    QVariant::~QVariant(&local_d0);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_49 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c4f80;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_1005c4f80:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c4fb6;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1005c4fb6:
    if (iVar11 == 9) {
      pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_e0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_730,&local_e0);
      QVariant::QVariant(&local_f0,true);
      QVariant::operator=(pQVar14,&local_f0);
      QVariant::~QVariant(&local_f0);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_49 = *(int *)local_e0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c5066;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
    }
LAB_1005c5066:
    FUN_100076800(&local_728,&local_730);
    if (*(int *)(local_730 + 0x10) != -1) {
      if (*(int *)(local_730 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_730 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c50a7;
      }
      QHashData::free_helper(local_730);
    }
LAB_1005c50a7:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_728);
    }
    if (*(int *)(local_728 + 0x10) == -1) goto switchD_1005c49ea_default;
    local_758 = local_728;
    if (*(int *)(local_728 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_728 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      goto LAB_1005c7a4c;
    }
    break;
  case 4:
    FUN_100076800(&local_740,param_4[1]);
    if (*(int *)param_4[2] == 7) {
      pcVar3 = *(char **)PTR_ActionText_1021e14c8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_88 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_740,&local_88);
      QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,0x1e0448c);
      QVariant::QVariant(&local_98,&local_a0);
      QVariant::operator=(pQVar14,&local_98);
      QVariant::~QVariant(&local_98);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_49 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c51c8;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_1005c51c8:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_49 = *(int *)local_88 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c51f8;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1005c51f8:
      pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar11 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar13 = _strlen(pcVar3);
        iVar11 = (int)sVar13;
      }
      local_a8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
      pQVar14 = (QVariant *)FUN_1002edf40(&local_740,&local_a8);
      QVariant::QVariant(&local_b8,true);
      QVariant::operator=(pQVar14,&local_b8);
      QVariant::~QVariant(&local_b8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_49 = *(int *)local_a8 != 0;
          UNLOCK();
          if (local_49) goto LAB_1005c529e;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_1005c529e:
    FUN_100076800(&local_738,&local_740);
    if (*(int *)(local_740 + 0x10) != -1) {
      if (*(int *)(local_740 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_740 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c52df;
      }
      QHashData::free_helper(local_740);
    }
LAB_1005c52df:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_738);
    }
    if (*(int *)(local_738 + 0x10) == -1) goto switchD_1005c49ea_default;
    local_758 = local_738;
    if (*(int *)(local_738 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_738 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      goto LAB_1005c7a4c;
    }
    break;
  case 5:
    FUN_100076800(&local_750,param_4[1]);
    pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar11 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar11 = (int)sVar13;
    }
    local_70 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_750);
    QVariant::QVariant(&local_80,false);
    QVariant::operator=(pQVar14,&local_80);
    QVariant::~QVariant(&local_80);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c53bc;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005c53bc:
    FUN_100076800(&local_748,&local_750);
    if (*(int *)(local_750 + 0x10) != -1) {
      if (*(int *)(local_750 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_750 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c53fd;
      }
      QHashData::free_helper(local_750);
    }
LAB_1005c53fd:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_748);
    }
    if (*(int *)(local_748 + 0x10) == -1) goto switchD_1005c49ea_default;
    local_758 = local_748;
    if (*(int *)(local_748 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_748 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      goto LAB_1005c7a4c;
    }
    break;
  case 6:
    FUN_100076800(&local_760,param_4[1]);
    pcVar3 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar11 = -1;
    if (pcVar3 != (char *)0x0) {
      sVar13 = _strlen(pcVar3);
      iVar11 = (int)sVar13;
    }
    local_58 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar11);
    pQVar14 = (QVariant *)FUN_1002edf40(&local_760);
    QVariant::QVariant(&local_68,false);
    QVariant::operator=(pQVar14,&local_68);
    QVariant::~QVariant(&local_68);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c54da;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1005c54da:
    FUN_100076800(&local_758,&local_760);
    if (*(int *)(local_760 + 0x10) != -1) {
      if (*(int *)(local_760 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_760 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_49) goto LAB_1005c551b;
      }
      QHashData::free_helper(local_760);
    }
LAB_1005c551b:
    if (*param_4 != 0) {
      FUN_100076af0(*param_4,&local_758);
    }
    if (*(int *)(local_758 + 0x10) == -1) goto switchD_1005c49ea_default;
    if (*(int *)(local_758 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_758 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      goto LAB_1005c7a4c;
    }
    break;
  default:
    goto switchD_1005c49ea_default;
  }
  QHashData::free_helper(local_758);
switchD_1005c49ea_default:
  if (lVar23 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

