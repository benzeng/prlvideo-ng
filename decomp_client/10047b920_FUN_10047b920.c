
void FUN_10047b920(long param_1)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  undefined8 uVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  QArrayData *local_3c0;
  QString local_3b8;
  QVariant local_3b0;
  QString local_3a0;
  QVariant local_398;
  QString local_388;
  QVariant local_380;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  AnonymousUnion0 local_338;
  QVariant local_330;
  QArrayData *local_320;
  AnonymousUnion0 local_318;
  QVariant local_310;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  AnonymousUnion0 local_2b8;
  QVariant local_2b0;
  QArrayData *local_2a0;
  AnonymousUnion0 local_298;
  QVariant local_290;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  AnonymousUnion0 local_248;
  QVariant local_240;
  QArrayData *local_230;
  AnonymousUnion0 local_228;
  QVariant local_220;
  QString local_210;
  QVariant local_208;
  QString local_1f8;
  QVariant local_1f0;
  QString local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  AnonymousUnion0 local_1c0;
  QVariant local_1b8;
  QArrayData *local_1a8;
  AnonymousUnion0 local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  QArrayData *local_180;
  Data *local_178;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  AnonymousUnion0 local_148;
  QVariant local_140;
  QString local_130;
  QVariant local_128;
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
  AnonymousUnion0 local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  AnonymousUnion0 local_98;
  QVariant local_90;
  QString local_80;
  QVariant local_78;
  QString local_68;
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_50,"CVmEdNetworkDialog","initNetworkConditionerProfileComboBox",0);
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047b9b5;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10047b9b5:
  pcVar2 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_68,"CVmEdNetworkDialog","getNetworkConditionerProfileComboBoxValue",0);
  QVariant::QVariant(&local_60,&local_68);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ba33;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10047ba33:
  pcVar2 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_80,"CVmEdNetworkDialog","setNetworkConditionerProfileComboBoxValue",0);
  QVariant::QVariant(&local_78,&local_80);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bab1;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10047bab1:
  puVar5 = PTR_shared_null_1021e15e8;
  pcVar2 = *(char **)(param_1 + 0x18);
  local_98.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_a0,"CVmEdNetworkDialog","VmConfig",0);
  FUN_1000341d0(&local_98,&local_a0);
  QVariant::QVariant(&local_90,(QStringList *)&local_98.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bb63;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10047bb63:
  AVar6 = local_98;
  if (*(int *)local_98.field1 != -1) {
    if (*(int *)local_98.field1 != 0) {
      LOCK();
      *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
      local_31 = *(int *)local_98.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bbf1;
    }
    iVar1 = *(int *)(local_98.field1 + 0xc);
    if (iVar1 != *(int *)(local_98.field1 + 8)) {
      lVar10 = (long)*(int *)(local_98.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_98.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047bbd0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047bbd0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047bbf1:
  pcVar2 = *(char **)(param_1 + 0x18);
  local_b8.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_c0,"CVmEdNetworkDialog","DYNAMIC_PART.NetProfile.Type",0);
  FUN_1000341d0(&local_b8,&local_c0);
  QCoreApplication::translate
            ((char *)&local_c8,"CVmEdNetworkDialog","DYNAMIC_PART.NetProfile.Custom",0);
  FUN_1000341d0(&local_b8,&local_c8);
  QCoreApplication::translate
            ((char *)&local_d0,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.RxBps",0);
  FUN_1000341d0(&local_b8,&local_d0);
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.GUIRxScale",0);
  FUN_1000341d0(&local_b8,&local_d8);
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.RxLossPpm",0);
  FUN_1000341d0(&local_b8,&local_e0);
  QCoreApplication::translate
            ((char *)&local_e8,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.RxDelayMs",0);
  FUN_1000341d0(&local_b8,&local_e8);
  QCoreApplication::translate
            ((char *)&local_f0,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.TxBps",0);
  FUN_1000341d0(&local_b8,&local_f0);
  QCoreApplication::translate
            ((char *)&local_f8,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.GUITxScale",0);
  FUN_1000341d0(&local_b8,&local_f8);
  QCoreApplication::translate
            ((char *)&local_100,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.TxLossPpm",0);
  FUN_1000341d0(&local_b8,&local_100);
  QCoreApplication::translate
            ((char *)&local_108,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.TxDelayMs",0);
  FUN_1000341d0(&local_b8,&local_108);
  QVariant::QVariant(&local_b0,(QStringList *)&local_b8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047be79;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10047be79:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047beaf;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10047beaf:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bee5;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10047bee5:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bf1b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10047bf1b:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bf51;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10047bf51:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bf87;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10047bf87:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bfbd;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10047bfbd:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047bff3;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10047bff3:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c029;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10047c029:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c05f;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10047c05f:
  AVar6 = local_b8;
  if (*(int *)local_b8.field1 != -1) {
    if (*(int *)local_b8.field1 != 0) {
      LOCK();
      *(int *)local_b8.field1 = *(int *)local_b8.field1 + -1;
      local_31 = *(int *)local_b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c0f1;
    }
    iVar1 = *(int *)(local_b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_b8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047c0d0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047c0d0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047c0f1:
  pQVar3 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_110,"CVmEdNetworkDialog","Configure...",0);
  QAbstractButton::setText(pQVar3);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c15b;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10047c15b:
  pQVar3 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_118,"CVmEdNetworkDialog","Profile:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c1c5;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10047c1c5:
  pcVar2 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_130,"CVmEdNetworkDialog","initWiFiDHCPRuleCombo",0);
  QVariant::QVariant(&local_128,&local_130);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c255;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_10047c255:
  pcVar2 = *(char **)(param_1 + 0x40);
  local_148.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_150,"CVmEdNetworkDialog","VmConfig",0);
  FUN_1000341d0(&local_148,&local_150);
  QVariant::QVariant(&local_140,(QStringList *)&local_148.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_140);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c300;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10047c300:
  AVar6 = local_148;
  if (*(int *)local_148.field1 != -1) {
    if (*(int *)local_148.field1 != 0) {
      LOCK();
      *(int *)local_148.field1 = *(int *)local_148.field1 + -1;
      local_31 = *(int *)local_148.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c391;
    }
    iVar1 = *(int *)(local_148.field1 + 0xc);
    if (iVar1 != *(int *)(local_148.field1 + 8)) {
      lVar10 = (long)*(int *)(local_148.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_148.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047c370:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047c370;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047c391:
  pcVar2 = *(char **)(param_1 + 0x40);
  local_168.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_170,"CVmEdNetworkDialog","DYNAMIC_PART.DHCPUseHostMac",0);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c43c;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10047c43c:
  AVar6 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c4d1;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar10 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047c4b0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047c4b0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047c4d1:
  QComboBox::clear();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  local_178 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_180,"CVmEdNetworkDialog","Intel Ether Express 1000",0);
  FUN_1000341d0(&local_178,&local_180);
  QCoreApplication::translate((char *)&local_188,"CVmEdNetworkDialog","Realtek NE2000",0);
  FUN_1000341d0(&local_178);
  QComboBox::insertItems((int)uVar4,(QStringList *)0x0);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c596;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10047c596:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c5cc;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10047c5cc:
  pDVar7 = local_178;
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c661;
    }
    iVar1 = *(int *)(local_178 + 0xc);
    if (iVar1 != *(int *)(local_178 + 8)) {
      lVar10 = (long)*(int *)(local_178 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_178 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_10047c640:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_10047c640;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_10047c661:
  pcVar2 = *(char **)(param_1 + 0x48);
  local_1a0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1a8,"CVmEdNetworkDialog","VmConfig",0);
  FUN_1000341d0(&local_1a0,&local_1a8);
  QVariant::QVariant(&local_198,(QStringList *)&local_1a0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_198);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c70c;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10047c70c:
  AVar6 = local_1a0;
  if (*(int *)local_1a0.field1 != -1) {
    if (*(int *)local_1a0.field1 != 0) {
      LOCK();
      *(int *)local_1a0.field1 = *(int *)local_1a0.field1 + -1;
      local_31 = *(int *)local_1a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c7a1;
    }
    iVar1 = *(int *)(local_1a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1a0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_1a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047c780:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047c780;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047c7a1:
  pcVar2 = *(char **)(param_1 + 0x48);
  local_1c0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1c8,"CVmEdNetworkDialog","DYNAMIC_PART.AdapterType",0);
  FUN_1000341d0(&local_1c0,&local_1c8);
  QVariant::QVariant(&local_1b8,(QStringList *)&local_1c0.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1b8);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c84c;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10047c84c:
  AVar6 = local_1c0;
  if (*(int *)local_1c0.field1 != -1) {
    if (*(int *)local_1c0.field1 != 0) {
      LOCK();
      *(int *)local_1c0.field1 = *(int *)local_1c0.field1 + -1;
      local_31 = *(int *)local_1c0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c8e1;
    }
    iVar1 = *(int *)(local_1c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1c0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_1c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047c8c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047c8c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047c8e1:
  pcVar2 = *(char **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_1e0,"CVmEdNetworkDialog","initNICTypeCombo",0);
  QVariant::QVariant(&local_1d8,&local_1e0);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1e0.field0_0x0 != -1) {
    if (*(int *)local_1e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
      local_31 = *(int *)local_1e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047c971;
    }
    QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
  }
LAB_10047c971:
  pcVar2 = *(char **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_1f8,"CVmEdNetworkDialog","getNICTypeValue",0);
  QVariant::QVariant(&local_1f0,&local_1f8);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_1f0);
  if (*(int *)local_1f8.field0_0x0 != -1) {
    if (*(int *)local_1f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
      local_31 = *(int *)local_1f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ca01;
    }
    QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
  }
LAB_10047ca01:
  pcVar2 = *(char **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_210,"CVmEdNetworkDialog","setNICTypeValue",0);
  QVariant::QVariant(&local_208,&local_210);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_208);
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      local_31 = *(int *)local_210.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ca91;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_10047ca91:
  pcVar2 = *(char **)(param_1 + 0x58);
  local_228.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_230,"CVmEdNetworkDialog","VmConfig",0);
  FUN_1000341d0(&local_228,&local_230);
  QVariant::QVariant(&local_220,(QStringList *)&local_228.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cb3c;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_10047cb3c:
  AVar6 = local_228;
  if (*(int *)local_228.field1 != -1) {
    if (*(int *)local_228.field1 != 0) {
      LOCK();
      *(int *)local_228.field1 = *(int *)local_228.field1 + -1;
      local_31 = *(int *)local_228.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cbd1;
    }
    iVar1 = *(int *)(local_228.field1 + 0xc);
    if (iVar1 != *(int *)(local_228.field1 + 8)) {
      lVar10 = (long)*(int *)(local_228.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_228.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047cbb0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047cbb0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047cbd1:
  pcVar2 = *(char **)(param_1 + 0x58);
  local_248.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_250,"CVmEdNetworkDialog","DYNAMIC_PART.MAC",0);
  FUN_1000341d0(&local_248,&local_250);
  QVariant::QVariant(&local_240,(QStringList *)&local_248.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_240);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cc7c;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_10047cc7c:
  AVar6 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cd11;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar10 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047ccf0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047ccf0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047cd11:
  pQVar3 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_258,"CVmEdNetworkDialog","Generate",0);
  QAbstractButton::setText(pQVar3);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cd7b;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_10047cd7b:
  pQVar3 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_260,"CVmEdNetworkDialog","DHCP:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cde5;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_10047cde5:
  pQVar3 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_268,"CVmEdNetworkDialog","Type:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ce4f;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_10047ce4f:
  pQVar3 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_270,"CVmEdNetworkDialog","MAC:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ceb9;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_10047ceb9:
  local_278 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x88));
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cf10;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_10047cf10:
  pQVar3 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_280,"CVmEdNetworkDialog","Network Conditioner",0);
  QAbstractButton::setText(pQVar3);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047cf7d;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_10047cf7d:
  pcVar2 = *(char **)(param_1 + 0xb0);
  local_298.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_2a0,"CVmEdNetworkDialog","VmConfig",0);
  FUN_1000341d0(&local_298,&local_2a0);
  QVariant::QVariant(&local_290,(QStringList *)&local_298.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_290);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d02b;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_10047d02b:
  AVar6 = local_298;
  if (*(int *)local_298.field1 != -1) {
    if (*(int *)local_298.field1 != 0) {
      LOCK();
      *(int *)local_298.field1 = *(int *)local_298.field1 + -1;
      local_31 = *(int *)local_298.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d0c1;
    }
    iVar1 = *(int *)(local_298.field1 + 0xc);
    if (iVar1 != *(int *)(local_298.field1 + 8)) {
      lVar10 = (long)*(int *)(local_298.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_298.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047d0a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047d0a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047d0c1:
  pcVar2 = *(char **)(param_1 + 0xb0);
  local_2b8.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_2c0,"CVmEdNetworkDialog","DYNAMIC_PART.LinkRateLimit.Enable",0);
  FUN_1000341d0(&local_2b8,&local_2c0);
  QVariant::QVariant(&local_2b0,(QStringList *)&local_2b8.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_2b0);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d16f;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_10047d16f:
  AVar6 = local_2b8;
  if (*(int *)local_2b8.field1 != -1) {
    if (*(int *)local_2b8.field1 != 0) {
      LOCK();
      *(int *)local_2b8.field1 = *(int *)local_2b8.field1 + -1;
      local_31 = *(int *)local_2b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d201;
    }
    iVar1 = *(int *)(local_2b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2b8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_2b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_2b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047d1e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047d1e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047d201:
  pQVar3 = *(QString **)(param_1 + 0xd8);
  QCoreApplication::translate((char *)&local_2c8,"CVmEdNetworkDialog","Packet Loss:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d26e;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_10047d26e:
  pQVar3 = *(QString **)(param_1 + 0xe0);
  QCoreApplication::translate((char *)&local_2d0,"CVmEdNetworkDialog","Bandwidth:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d2db;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_10047d2db:
  pQVar3 = *(QString **)(param_1 + 0xf0);
  QCoreApplication::translate((char *)&local_2d8,"CVmEdNetworkDialog","Delay:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d348;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_10047d348:
  pQVar3 = *(QString **)(param_1 + 0x100);
  QCoreApplication::translate((char *)&local_2e0,"CVmEdNetworkDialog","Outbound",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d3b5;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_10047d3b5:
  pQVar3 = *(QString **)(param_1 + 0x108);
  QCoreApplication::translate((char *)&local_2e8,"CVmEdNetworkDialog","Inbound",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d422;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_10047d422:
  pQVar3 = *(QString **)(param_1 + 0x118);
  QCoreApplication::translate((char *)&local_2f0,"CVmEdNetworkDialog","Bandwidth:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d48f;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_10047d48f:
  pQVar3 = *(QString **)(param_1 + 0x128);
  QCoreApplication::translate((char *)&local_2f8,"CVmEdNetworkDialog","Packet Loss:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d4fc;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_10047d4fc:
  pQVar3 = *(QString **)(param_1 + 0x138);
  QCoreApplication::translate((char *)&local_300,"CVmEdNetworkDialog","Delay:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d569;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_10047d569:
  pcVar2 = *(char **)(param_1 + 0x148);
  local_318.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_320,"CVmEdNetworkDialog","VmConfig",0);
  FUN_1000341d0(&local_318,&local_320);
  QVariant::QVariant(&local_310,(QStringList *)&local_318.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_310);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d617;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_10047d617:
  AVar6 = local_318;
  if (*(int *)local_318.field1 != -1) {
    if (*(int *)local_318.field1 != 0) {
      LOCK();
      *(int *)local_318.field1 = *(int *)local_318.field1 + -1;
      local_31 = *(int *)local_318.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d6b1;
    }
    iVar1 = *(int *)(local_318.field1 + 0xc);
    if (iVar1 != *(int *)(local_318.field1 + 8)) {
      lVar10 = (long)*(int *)(local_318.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_318.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047d690:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047d690;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047d6b1:
  pcVar2 = *(char **)(param_1 + 0x148);
  local_338.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_340,"CVmEdNetworkDialog","DYNAMIC_PART.SystemName",0);
  FUN_1000341d0(&local_338,&local_340);
  QCoreApplication::translate
            ((char *)&local_348,"CVmEdNetworkDialog","DYNAMIC_PART.UserFriendlyName",0);
  FUN_1000341d0(&local_338,&local_348);
  QCoreApplication::translate((char *)&local_350,"CVmEdNetworkDialog","DYNAMIC_PART.EmulatedType",0)
  ;
  FUN_1000341d0(&local_338,&local_350);
  QCoreApplication::translate
            ((char *)&local_358,"CVmEdNetworkDialog","DYNAMIC_PART.AdapterNumber",0);
  FUN_1000341d0(&local_338,&local_358);
  QCoreApplication::translate((char *)&local_360,"CVmEdNetworkDialog","DYNAMIC_PART.AdapterName",0);
  FUN_1000341d0(&local_338,&local_360);
  QCoreApplication::translate
            ((char *)&local_368,"CVmEdNetworkDialog","DYNAMIC_PART.VirtualNetworkID",0);
  FUN_1000341d0(&local_338,&local_368);
  QCoreApplication::translate((char *)&local_370,"CVmEdNetworkDialog","DYNAMIC_PART.Connected",0);
  FUN_1000341d0(&local_338,&local_370);
  QVariant::QVariant(&local_330,(QStringList *)&local_338.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_330);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d89d;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_10047d89d:
  if (*(int *)local_368 != -1) {
    if (*(int *)local_368 != 0) {
      LOCK();
      *(int *)local_368 = *(int *)local_368 + -1;
      local_31 = *(int *)local_368 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d8d3;
    }
    QArrayData::deallocate(local_368,2,8);
  }
LAB_10047d8d3:
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_31 = *(int *)local_360 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d909;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_10047d909:
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_31 = *(int *)local_358 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d93f;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_10047d93f:
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_31 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d975;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_10047d975:
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_31 = *(int *)local_348 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d9ab;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_10047d9ab:
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_31 = *(int *)local_340 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047d9e1;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_10047d9e1:
  AVar6 = local_338;
  if (*(int *)local_338.field1 != -1) {
    if (*(int *)local_338.field1 != 0) {
      LOCK();
      *(int *)local_338.field1 = *(int *)local_338.field1 + -1;
      local_31 = *(int *)local_338.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047da71;
    }
    iVar1 = *(int *)(local_338.field1 + 0xc);
    if (iVar1 != *(int *)(local_338.field1 + 8)) {
      lVar10 = (long)*(int *)(local_338.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_338.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10047da50:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10047da50;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10047da71:
  pcVar2 = *(char **)(param_1 + 0x148);
  QCoreApplication::translate
            ((char *)&local_388,"CVmEdNetworkDialog","getDeviceSelectorComboBoxValue",0);
  QVariant::QVariant(&local_380,&local_388);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_380);
  if (*(int *)local_388.field0_0x0 != -1) {
    if (*(int *)local_388.field0_0x0 != 0) {
      LOCK();
      *(int *)local_388.field0_0x0 = *(int *)local_388.field0_0x0 + -1;
      local_31 = *(int *)local_388.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047db04;
    }
    QArrayData::deallocate((QArrayData *)local_388.field0_0x0,2,8);
  }
LAB_10047db04:
  pcVar2 = *(char **)(param_1 + 0x148);
  QCoreApplication::translate
            ((char *)&local_3a0,"CVmEdNetworkDialog","setDeviceSelectorComboBoxValue",0);
  QVariant::QVariant(&local_398,&local_3a0);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_398);
  if (*(int *)local_3a0.field0_0x0 != -1) {
    if (*(int *)local_3a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3a0.field0_0x0 = *(int *)local_3a0.field0_0x0 + -1;
      local_31 = *(int *)local_3a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047db97;
    }
    QArrayData::deallocate((QArrayData *)local_3a0.field0_0x0,2,8);
  }
LAB_10047db97:
  pcVar2 = *(char **)(param_1 + 0x148);
  QCoreApplication::translate
            ((char *)&local_3b8,"CVmEdNetworkDialog","initDeviceSelectorComboBox",0);
  QVariant::QVariant(&local_3b0,&local_3b8);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_3b0);
  if (*(int *)local_3b8.field0_0x0 != -1) {
    if (*(int *)local_3b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
      local_31 = *(int *)local_3b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047dc2a;
    }
    QArrayData::deallocate((QArrayData *)local_3b8.field0_0x0,2,8);
  }
LAB_10047dc2a:
  pQVar3 = *(QString **)(param_1 + 0x158);
  QCoreApplication::translate((char *)&local_3c0,"CVmEdNetworkDialog","Source:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_3c0 != -1) {
    if (*(int *)local_3c0 != 0) {
      LOCK();
      *(int *)local_3c0 = *(int *)local_3c0 + -1;
      UNLOCK();
      if (*(int *)local_3c0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_3c0,2,8);
  }
  return;
}

