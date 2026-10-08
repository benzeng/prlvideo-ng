
void FUN_1003ab1e0(long param_1,long *param_2)

{
  code *pcVar1;
  int *piVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  size_t sVar15;
  QString QVar16;
  long *plVar17;
  undefined8 uVar18;
  QVariant *pQVar19;
  CVmConfiguration *pCVar20;
  long *plVar21;
  QArrayData *pQVar22;
  QArrayData *pQVar23;
  BootingOrder *pBVar24;
  undefined8 *puVar25;
  char *pcVar26;
  int *piVar27;
  int *piVar28;
  bool bVar29;
  int iVar30;
  _func_void_Node_ptr *p_Var31;
  _func_void_Node_ptr *p_Var32;
  long *plVar33;
  long *plVar34;
  _func_void_Node_ptr *p_Var35;
  _func_void_Node_ptr *p_Var36;
  long *plVar37;
  undefined **ppuVar38;
  QVariant QVar39;
  QArrayData *local_548;
  QArrayData *local_540;
  QArrayData *local_538;
  QArrayData *local_530;
  QString local_528;
  QArrayData *local_520;
  undefined1 local_518 [16];
  int *local_508;
  int *local_500;
  int *local_4f8;
  undefined4 local_4f0;
  int *local_4e8;
  BootingOrder local_4e0 [16];
  undefined1 local_4d0 [160];
  QArrayData *local_430;
  QVariant local_428;
  QArrayData *local_418;
  bool local_409;
  QArrayData *local_408;
  undefined1 local_400 [16];
  QArrayData *local_3f0;
  QArrayData *local_3e8;
  QVariant local_3e0;
  Data_conflict local_3d0;
  undefined4 local_3c8;
  Data_conflict local_3c0;
  undefined4 local_3b8;
  QArrayData *local_3b0;
  Data *local_3a8;
  QArrayData *local_3a0;
  _func_void_Node_ptr *local_398;
  int *local_390;
  int *local_388;
  long *local_380;
  long *local_378;
  int local_370;
  CVmConfiguration local_368 [248];
  long *local_270;
  _func_void_Node_ptr *local_268;
  long local_260;
  QArrayData *local_258;
  CVmConfiguration local_250 [248];
  long local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QString local_90;
  QArrayData *local_88;
  _func_void_Node_ptr *local_80;
  QString local_78;
  _func_void_Node_ptr *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar14 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar14 == 0) {
    pcVar26 = "(!)Error: Vm instance is null.";
LAB_1003ab32d:
    FUN_100df99c0("","prl_client_app",0,pcVar26);
    return;
  }
  lVar14 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  puVar4 = PTR_s_TimeMachine_1021f1e08;
  if (lVar14 == 0) {
    pcVar26 = "(!)Error: Server instance is null.";
    goto LAB_1003ab32d;
  }
  if (*(int *)(*param_2 + 0x14) == 0) {
    return;
  }
  local_70 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar13 = -1;
  if (PTR_s_TimeMachine_1021f1e08 != (undefined *)0x0) {
    sVar15 = _strlen(PTR_s_TimeMachine_1021f1e08);
    iVar13 = (int)sVar15;
  }
  QVar16.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar4,iVar13);
  plVar17 = (long *)*param_2;
  uVar11 = *(uint *)(plVar17 + 4);
  plVar21 = plVar17;
  local_78.field0_0x0 = QVar16.field0_0x0;
  if (uVar11 != 0) {
    uVar10 = qHash(&local_78,*(uint *)((long)plVar17 + 0x24));
    uVar3 = (ulong)uVar10 % (ulong)uVar11;
    plVar33 = *(long **)(plVar17[1] + uVar3 * 8);
    if (plVar33 != plVar17) {
      plVar37 = (long *)(plVar17[1] + uVar3 * 8);
      do {
        plVar34 = plVar33;
        plVar21 = plVar17;
        if (*(uint *)(plVar33 + 1) == uVar10) {
          cVar6 = operator==(&local_78,(QString *)(plVar33 + 2));
          plVar17 = (long *)*plVar37;
          plVar34 = plVar17;
          QVar16.field0_0x0 = local_78.field0_0x0;
          plVar21 = (long *)*param_2;
          if (cVar6 != '\0') break;
        }
        plVar17 = plVar21;
        plVar33 = (long *)*plVar34;
        QVar16.field0_0x0 = local_78.field0_0x0;
        plVar21 = plVar17;
        plVar37 = plVar34;
      } while (plVar33 != plVar17);
    }
  }
  if (*(int *)QVar16.field0_0x0 != -1) {
    if (*(int *)QVar16.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar16.field0_0x0 = *(int *)QVar16.field0_0x0 + -1;
      local_31 = *(int *)QVar16.field0_0x0 != 0;
      UNLOCK();
      QVar16.field0_0x0 = local_78.field0_0x0;
      if ((bool)local_31) goto LAB_1003ab382;
    }
    QArrayData::deallocate((QArrayData *)QVar16.field0_0x0,2,8);
  }
LAB_1003ab382:
  if (plVar17 != plVar21) {
    iVar13 = -1;
    if (puVar4 != (undefined *)0x0) {
      sVar15 = _strlen(puVar4);
      iVar13 = (int)sVar15;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
    FUN_1003ae3b0(&local_80,param_2,&local_88);
    puVar5 = PTR_s_DoNotBackupVm_102273e40;
    iVar13 = -1;
    if (PTR_s_DoNotBackupVm_102273e40 != (undefined *)0x0) {
      sVar15 = _strlen(PTR_s_DoNotBackupVm_102273e40);
      iVar13 = (int)sVar15;
    }
    QVar16.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar13);
    uVar11 = *(uint *)(local_80 + 0x20);
    p_Var35 = local_80;
    local_90.field0_0x0 = QVar16.field0_0x0;
    if (uVar11 != 0) {
      uVar10 = qHash(&local_90,*(uint *)(local_80 + 0x24));
      uVar3 = (ulong)uVar10 % (ulong)uVar11;
      p_Var31 = *(_func_void_Node_ptr **)(*(long *)(local_80 + 8) + uVar3 * 8);
      if (p_Var31 != local_80) {
        p_Var36 = (_func_void_Node_ptr *)(*(long *)(local_80 + 8) + uVar3 * 8);
        do {
          p_Var32 = p_Var31;
          if (*(uint *)(p_Var31 + 8) == uVar10) {
            cVar6 = operator==(&local_90,(QString *)(p_Var31 + 0x10));
            p_Var32 = *(_func_void_Node_ptr **)p_Var36;
            QVar16.field0_0x0 = local_90.field0_0x0;
            p_Var35 = p_Var32;
            if (cVar6 != '\0') break;
          }
          p_Var31 = *(_func_void_Node_ptr **)p_Var32;
          QVar16.field0_0x0 = local_90.field0_0x0;
          p_Var35 = local_80;
          p_Var36 = p_Var32;
        } while (p_Var31 != local_80);
      }
    }
    if (*(int *)QVar16.field0_0x0 != -1) {
      if (*(int *)QVar16.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar16.field0_0x0 = *(int *)QVar16.field0_0x0 + -1;
        local_31 = *(int *)QVar16.field0_0x0 != 0;
        UNLOCK();
        QVar16.field0_0x0 = local_90.field0_0x0;
        if ((bool)local_31) goto LAB_1003ab4b2;
      }
      QArrayData::deallocate((QArrayData *)QVar16.field0_0x0,2,8);
    }
LAB_1003ab4b2:
    if (*(int *)(local_80 + 0x10) != -1) {
      if (*(int *)(local_80 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_80 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003ab4de;
      }
      QHashData::free_helper(local_80);
    }
LAB_1003ab4de:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003ab50e;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1003ab50e:
    if (p_Var35 != local_80) {
      plVar17 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
      pcVar1 = *(code **)(*plVar17 + 0x60);
      iVar13 = -1;
      if (puVar4 != (undefined *)0x0) {
        sVar15 = _strlen(puVar4);
        iVar13 = (int)sVar15;
      }
      local_b8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
      puVar5 = PTR_s_DoNotBackupVm_102273e40;
      iVar13 = -1;
      if (PTR_s_DoNotBackupVm_102273e40 != (undefined *)0x0) {
        sVar15 = _strlen(PTR_s_DoNotBackupVm_102273e40);
        iVar13 = (int)sVar15;
      }
      local_c0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar13);
      (*pcVar1)(&local_b0,plVar17,&local_b8,&local_c0);
      bVar7 = (bool)QVariant::toBool();
      QVariant::QVariant(&local_a0,bVar7);
      QVariant::~QVariant(&local_b0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ab5fc;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1003ab5fc:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ab632;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1003ab632:
      QVariant::QVariant(&local_d0,false);
      bVar8 = QVariant::toBool();
      bVar9 = QVariant::toBool();
      if ((bVar8 ^ bVar9) == 1) {
        iVar13 = -1;
        if (puVar4 != (undefined *)0x0) {
          sVar15 = _strlen(puVar4);
          iVar13 = (int)sVar15;
        }
        local_d8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
        uVar18 = FUN_1003ae480(&local_70,&local_d8);
        puVar4 = PTR_s_DoNotBackupVm_102273e40;
        iVar13 = -1;
        if (PTR_s_DoNotBackupVm_102273e40 != (undefined *)0x0) {
          sVar15 = _strlen(PTR_s_DoNotBackupVm_102273e40);
          iVar13 = (int)sVar15;
        }
        local_e0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
        pQVar19 = (QVariant *)FUN_1002edf40(uVar18,&local_e0);
        QVariant::operator=(pQVar19,&local_d0);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003ab721;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1003ab721:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003ab757;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
      }
LAB_1003ab757:
      QVariant::~QVariant(&local_d0);
      QVariant::~QVariant(&local_a0);
    }
  }
  puVar4 = PTR_s_VmConfig_1021f1e00;
  iVar13 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar15 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar13 = (int)sVar15;
  }
  QVar16.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar4,iVar13);
  plVar17 = (long *)*param_2;
  uVar11 = *(uint *)(plVar17 + 4);
  plVar21 = plVar17;
  local_e8.field0_0x0 = QVar16.field0_0x0;
  if (uVar11 != 0) {
    uVar10 = qHash(&local_e8,*(uint *)((long)plVar17 + 0x24));
    uVar3 = (ulong)uVar10 % (ulong)uVar11;
    plVar33 = *(long **)(plVar17[1] + uVar3 * 8);
    if (plVar33 != plVar17) {
      plVar37 = (long *)(plVar17[1] + uVar3 * 8);
      do {
        plVar34 = plVar33;
        plVar21 = plVar17;
        if (*(uint *)(plVar33 + 1) == uVar10) {
          cVar6 = operator==(&local_e8,(QString *)(plVar33 + 2));
          plVar17 = (long *)*plVar37;
          plVar34 = plVar17;
          plVar21 = (long *)*param_2;
          QVar16.field0_0x0 = local_e8.field0_0x0;
          if (cVar6 != '\0') break;
        }
        plVar17 = plVar21;
        plVar33 = (long *)*plVar34;
        plVar21 = plVar17;
        QVar16.field0_0x0 = local_e8.field0_0x0;
        plVar37 = plVar34;
      } while (plVar33 != plVar17);
    }
  }
  if (*(int *)QVar16.field0_0x0 != -1) {
    if (*(int *)QVar16.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar16.field0_0x0 = *(int *)QVar16.field0_0x0 + -1;
      local_31 = *(int *)QVar16.field0_0x0 != 0;
      UNLOCK();
      QVar16.field0_0x0 = local_e8.field0_0x0;
      if ((bool)local_31) goto LAB_1003ab869;
    }
    QArrayData::deallocate((QArrayData *)QVar16.field0_0x0,2,8);
  }
LAB_1003ab869:
  if (plVar17 == plVar21) goto LAB_1003ac8b7;
  local_150 = 0xff;
  local_14c = 0;
  local_148 = 0;
  local_140._8_4_ = (int)PTR_shared_null_1021e1288;
  local_140._0_8_ = PTR_shared_null_1021e1288;
  local_140._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_130._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_130._0_8_ = PTR_shared_null_1021e15e8;
  local_130._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_120 = 0;
  local_118 = PTR_shared_null_1021e1288;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  local_150 = CVmCommonOptions::getOsVersion();
  uVar18 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015b140(&local_158,uVar18,local_150,1);
  local_260 = local_158;
  if (local_158 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_10018d690(&local_258,&local_260);
  FUN_100129dd0(local_250,&local_258);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ab9c9;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1003ab9c9:
  if (local_260 != 0) {
    _PrlHandle_Free();
  }
  uVar18 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_1001bad90(local_250,uVar18,0,&local_150);
  uVar18 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_100110c60(&local_270,uVar18,local_250,10);
  uVar11 = (**(code **)(*local_270 + 0x68))();
  lVar14 = CVmConfiguration::getVmHardwareList();
  FUN_1001296d0(*(undefined8 *)(lVar14 + 0xa8 + (ulong)uVar11 * 8),&local_270);
  if (*(int *)(local_268 + 0x10) != -1) {
    if (*(int *)(local_268 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_268 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aba88;
    }
    QHashData::free_helper(local_268);
  }
LAB_1003aba88:
  uVar18 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_100110c60(&local_270,uVar18,local_250,0xb);
  uVar11 = (**(code **)(*local_270 + 0x68))();
  lVar14 = CVmConfiguration::getVmHardwareList();
  FUN_1001296d0(*(undefined8 *)(lVar14 + 0xa8 + (ulong)uVar11 * 8),&local_270);
  if (*(int *)(local_268 + 0x10) != -1) {
    if (*(int *)(local_268 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_268 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003abb15;
    }
    QHashData::free_helper(local_268);
  }
LAB_1003abb15:
  uVar18 = FUN_1003b0b10(*(undefined8 *)(param_1 + 0x18));
  cVar6 = FUN_1003be8b0(uVar18);
  if (cVar6 != '\0') {
    FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    CVmCommonOptions::getProfile();
    uVar12 = CVmProfile::getType();
    uVar18 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    FUN_1001bc010(uVar12,uVar18,local_250);
  }
  pCVar20 = (CVmConfiguration *)FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  CVmConfiguration::CVmConfiguration(local_368,pCVar20);
  iVar13 = -1;
  if (puVar4 != (undefined *)0x0) {
    sVar15 = _strlen(puVar4);
    iVar13 = (int)sVar15;
  }
  local_3a0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
  FUN_1003ae3b0(&local_398,param_2,&local_3a0);
  FUN_1000626e0(&local_390,&local_398);
  local_388 = local_390;
  if (*local_390 != -1) {
    if (*local_390 == 0) {
      QListData::detach((int)&local_388);
      iVar13 = local_388[2];
      if (iVar13 != local_388[3]) {
        local_390 = local_390 + (long)local_390[2] * 2 + 4;
        piVar27 = local_388 + (long)iVar13 * 2 + 4;
        lVar14 = (long)local_388[3] * 8 + (long)iVar13 * -8;
        do {
          piVar28 = *(int **)local_390;
          *(int **)piVar27 = piVar28;
          if (1 < *piVar28 + 1U) {
            LOCK();
            *piVar28 = *piVar28 + 1;
            local_31 = *piVar28 != 0;
            UNLOCK();
          }
          piVar27 = piVar27 + 2;
          local_390 = local_390 + 2;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    else {
      LOCK();
      *local_390 = *local_390 + 1;
      local_31 = *local_390 != 0;
      UNLOCK();
    }
  }
  local_380 = (long *)(local_388 + (long)local_388[2] * 2 + 4);
  local_378 = (long *)(local_388 + (long)local_388[3] * 2 + 4);
  local_370 = 1;
  FUN_100039a80(&local_390);
  if (*(int *)(local_398 + 0x10) != -1) {
    if (*(int *)(local_398 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_398 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003abcda;
    }
    QHashData::free_helper(local_398);
  }
LAB_1003abcda:
  if (*(int *)local_3a0 != -1) {
    if (*(int *)local_3a0 != 0) {
      LOCK();
      *(int *)local_3a0 = *(int *)local_3a0 + -1;
      local_31 = *(int *)local_3a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003abd10;
    }
    QArrayData::deallocate(local_3a0,2,8);
  }
LAB_1003abd10:
  if ((local_370 == 0) || (bVar7 = false, local_380 == local_378)) {
    bVar29 = false;
  }
  else {
    do {
      plVar17 = local_380;
      lVar14 = *local_380;
      iVar13 = QString::compare_helper
                         (*(long *)(lVar14 + 0x10) + lVar14,*(undefined4 *)(lVar14 + 4),
                          PTR_s_Settings_Startup_BootingOrder_Bo_102273e38,0xffffffff,1);
      bVar29 = true;
      if (iVar13 != 0) {
        lVar14 = *plVar17;
        iVar13 = QString::compare_helper
                           (*(long *)(lVar14 + 0x10) + lVar14,*(undefined4 *)(lVar14 + 4),
                            PTR_s_Settings_Tools_SharedFolders_Hos_102273e48,0xffffffff,1);
        bVar29 = bVar7;
        if (iVar13 == 0) {
          uVar18 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
          FUN_1003e17d0(&local_3a8,uVar18,plVar17);
          iVar13 = *(int *)(local_3a8 + 0xc);
          iVar30 = *(int *)(local_3a8 + 8);
          if (*(int *)local_3a8 != -1) {
            if (*(int *)local_3a8 != 0) {
              LOCK();
              *(int *)local_3a8 = *(int *)local_3a8 + -1;
              local_31 = *(int *)local_3a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003abf4e;
            }
            QListData::dispose(local_3a8);
          }
LAB_1003abf4e:
          if (iVar30 < iVar13) {
            iVar13 = -1;
            if (puVar4 != (undefined *)0x0) {
              sVar15 = _strlen(puVar4);
              iVar13 = (int)sVar15;
            }
            local_3b0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
            uVar18 = FUN_1003ae480(&local_70,&local_3b0);
            pQVar19 = (QVariant *)FUN_1002edf40(uVar18,plVar17);
            local_3b8 = 0x80000000;
            local_3c0.field7 = 0;
            QVariant::operator=(pQVar19,(QVariant *)&local_3c0);
            QVariant::~QVariant((QVariant *)&local_3c0);
            if (*(int *)local_3b0 != -1) {
              if (*(int *)local_3b0 != 0) {
                LOCK();
                *(int *)local_3b0 = *(int *)local_3b0 + -1;
                local_31 = *(int *)local_3b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ac430;
              }
              QArrayData::deallocate(local_3b0,2,8);
            }
          }
        }
        else {
          local_3c8 = 0x80000000;
          local_3d0.field7 = 0;
          plVar21 = (long *)FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
          pcVar1 = *(code **)(*plVar21 + 0x80);
          local_3e8 = (QArrayData *)*plVar17;
          if (1 < *(int *)local_3e8 + 1U) {
            LOCK();
            *(int *)local_3e8 = *(int *)local_3e8 + 1;
            local_31 = *(int *)local_3e8 != 0;
            UNLOCK();
          }
          (*pcVar1)(&local_3e0,plVar21,&local_3e8);
          QVariant::operator=((QVariant *)&local_3d0,&local_3e0);
          QVariant::~QVariant(&local_3e0);
          if (*(int *)local_3e8 != -1) {
            if (*(int *)local_3e8 != 0) {
              LOCK();
              *(int *)local_3e8 = *(int *)local_3e8 + -1;
              local_31 = *(int *)local_3e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003abe49;
            }
            QArrayData::deallocate(local_3e8,2,8);
          }
LAB_1003abe49:
          local_3f0 = (QArrayData *)*plVar17;
          ppuVar38 = &PTR_s_Hardware_Fdd_1021f1d00;
          iVar13 = 0;
          if (1 < *(int *)local_3f0 + 1U) {
            LOCK();
            *(int *)local_3f0 = *(int *)local_3f0 + 1;
            local_31 = *(int *)local_3f0 != 0;
            UNLOCK();
            ppuVar38 = &PTR_s_Hardware_Fdd_1021f1d00;
            iVar13 = 0;
          }
          do {
            pcVar26 = *ppuVar38;
            sVar15 = _strlen(pcVar26);
            local_50 = (QArrayData *)QString::fromAscii_helper(pcVar26,(int)sVar15);
            cVar6 = QString::startsWith(&local_3f0,&local_50,1);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003abee0;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_1003abee0:
            if (cVar6 != '\0') {
              pcVar26 = *ppuVar38;
              iVar30 = -1;
              if (iVar13 != 7) {
                sVar15 = _strlen(pcVar26);
                iVar30 = (int)sVar15;
              }
              pQVar22 = (QArrayData *)QString::fromAscii_helper(pcVar26,iVar30);
              if (1 < *(int *)pQVar22 + 1U) {
                LOCK();
                *(int *)pQVar22 = *(int *)pQVar22 + 1;
                local_31 = *(int *)pQVar22 != 0;
                UNLOCK();
              }
              local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar22;
              QString::fromUtf8_helper((char *)&local_48,0x1df1a91);
              QString::append(&local_60);
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ac077;
                }
                QArrayData::deallocate(local_48,2,8);
              }
LAB_1003ac077:
              QRegExp::QRegExp((QRegExp *)&local_58,&local_60,1,0);
              pcVar26 = *ppuVar38;
              iVar30 = -1;
              if (iVar13 != 7) {
                sVar15 = _strlen(pcVar26);
                iVar30 = (int)sVar15;
              }
              pQVar23 = (QArrayData *)QString::fromAscii_helper(pcVar26,iVar30);
              if (1 < *(int *)pQVar23 + 1U) {
                LOCK();
                *(int *)pQVar23 = *(int *)pQVar23 + 1;
                local_31 = *(int *)pQVar23 != 0;
                UNLOCK();
              }
              local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar23;
              QString::fromUtf8_helper((char *)&local_40,0x1df1a99);
              QString::append(&local_68);
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ac11a;
                }
                QArrayData::deallocate(local_40,2,8);
              }
LAB_1003ac11a:
              QString::replace((QRegExp *)&local_3f0,&local_58);
              if (*(int *)local_68.field0_0x0 != -1) {
                if (*(int *)local_68.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                  local_31 = *(int *)local_68.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ac15e;
                }
                QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
              }
LAB_1003ac15e:
              if (*(int *)pQVar23 != -1) {
                if (*(int *)pQVar23 != 0) {
                  LOCK();
                  *(int *)pQVar23 = *(int *)pQVar23 + -1;
                  local_31 = *(int *)pQVar23 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ac18b;
                }
                QArrayData::deallocate(pQVar23,2,8);
              }
LAB_1003ac18b:
              QRegExp::~QRegExp((QRegExp *)&local_58);
              if (*(int *)local_60.field0_0x0 != -1) {
                if (*(int *)local_60.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                  local_31 = *(int *)local_60.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ac1c4;
                }
                QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
              }
LAB_1003ac1c4:
              if (*(int *)pQVar22 == -1) break;
              if (*(int *)pQVar22 != 0) {
                LOCK();
                *(int *)pQVar22 = *(int *)pQVar22 + -1;
                local_31 = *(int *)pQVar22 != 0;
                UNLOCK();
                if ((bool)local_31) break;
              }
              QArrayData::deallocate(pQVar22,2,8);
              break;
            }
            iVar13 = iVar13 + 1;
            ppuVar38 = ppuVar38 + 1;
          } while (iVar13 != 7);
          local_408 = local_3f0;
          if (1 < *(int *)local_3f0 + 1U) {
            LOCK();
            *(int *)local_3f0 = *(int *)local_3f0 + 1;
            local_31 = *(int *)local_3f0 != 0;
            UNLOCK();
          }
          CVmConfiguration::getPropertyValue((QTypedArrayData<unsigned_short> *)local_400);
          if (*(int *)local_408 != -1) {
            if (*(int *)local_408 != 0) {
              LOCK();
              *(int *)local_408 = *(int *)local_408 + -1;
              local_31 = *(int *)local_408 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac27c;
            }
            QArrayData::deallocate(local_408,2,8);
          }
LAB_1003ac27c:
          local_409 = false;
          local_418 = (QArrayData *)*plVar17;
          if (1 < *(int *)local_418 + 1U) {
            LOCK();
            *(int *)local_418 = *(int *)local_418 + 1;
            local_31 = *(int *)local_418 != 0;
            UNLOCK();
          }
          QVariant::QVariant(&local_428,(QVariant *)local_400);
          QVar39.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)&local_428;
          QVar39.field0_0x0.field0_0x0.field15 = (QObject *)&local_418;
          CVmConfiguration::setPropertyValue
                    ((QTypedArrayData<unsigned_short> *)local_368,QVar39,&local_409);
          QVariant::~QVariant(&local_428);
          if (*(int *)local_418 != -1) {
            if (*(int *)local_418 != 0) {
              LOCK();
              *(int *)local_418 = *(int *)local_418 + -1;
              local_31 = *(int *)local_418 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac30c;
            }
            QArrayData::deallocate(local_418,2,8);
          }
LAB_1003ac30c:
          if (local_409 != false) {
            iVar13 = -1;
            if (puVar4 != (undefined *)0x0) {
              sVar15 = _strlen(puVar4);
              iVar13 = (int)sVar15;
            }
            local_430 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
            uVar18 = FUN_1003ae480(&local_70,&local_430);
            pQVar19 = (QVariant *)FUN_1002edf40(uVar18,plVar17);
            QVariant::operator=(pQVar19,(QVariant *)local_400);
            if (*(int *)local_430 != -1) {
              if (*(int *)local_430 != 0) {
                LOCK();
                *(int *)local_430 = *(int *)local_430 + -1;
                local_31 = *(int *)local_430 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ac399;
              }
              QArrayData::deallocate(local_430,2,8);
            }
          }
LAB_1003ac399:
          QVariant::~QVariant((QVariant *)local_400);
          if (*(int *)local_3f0 != -1) {
            if (*(int *)local_3f0 != 0) {
              LOCK();
              *(int *)local_3f0 = *(int *)local_3f0 + -1;
              local_31 = *(int *)local_3f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac3de;
            }
            QArrayData::deallocate(local_3f0,2,8);
          }
LAB_1003ac3de:
          QVariant::~QVariant((QVariant *)&local_3d0);
        }
      }
LAB_1003ac430:
      local_380 = local_380 + 1;
      local_370 = 1;
      bVar7 = bVar29;
    } while (local_380 != local_378);
  }
  FUN_100039a80(&local_388);
  CVmConfiguration::~CVmConfiguration(local_368);
  CVmConfiguration::~CVmConfiguration(local_250);
  if (local_158 != 0) {
    _PrlHandle_Free();
  }
  FUN_10005e410(&local_150);
  if (bVar29) {
    FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmStartupOptions();
    pBVar24 = (BootingOrder *)CVmStartupOptionsBase::getBootingOrder();
    BootingOrder::BootingOrder(local_4e0,pBVar24);
    cVar6 = FUN_1001bbd60(local_4e0);
    if (cVar6 != '\0') {
      local_4e8 = (int *)PTR_shared_null_1021e15e8;
      FUN_1003ae690(local_4d0,pBVar24,&local_4e8);
      local_508 = local_4e8;
      if (*local_4e8 != -1) {
        if (*local_4e8 == 0) {
          QListData::detach((int)&local_508);
          iVar13 = local_508[2];
          if (iVar13 != local_508[3]) {
            piVar27 = local_4e8 + (long)local_4e8[2] * 2 + 4;
            piVar28 = local_508 + (long)iVar13 * 2 + 4;
            lVar14 = (long)local_508[3] * 8 + (long)iVar13 * -8;
            do {
              piVar2 = *(int **)piVar27;
              *(int **)piVar28 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              piVar28 = piVar28 + 2;
              piVar27 = piVar27 + 2;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
        }
        else {
          LOCK();
          *local_4e8 = *local_4e8 + 1;
          local_31 = *local_4e8 != 0;
          UNLOCK();
        }
      }
      local_500 = local_508 + (long)local_508[2] * 2 + 4;
      local_4f8 = local_508 + (long)local_508[3] * 2 + 4;
      if (local_508[2] != local_508[3]) {
        do {
          local_4f0 = 1;
          local_520 = *(QArrayData **)local_500;
          if (1 < *(int *)local_520 + 1U) {
            LOCK();
            *(int *)local_520 = *(int *)local_520 + 1;
            local_31 = *(int *)local_520 != 0;
            UNLOCK();
          }
          BootingOrder::getPropertyValue((QTypedArrayData<unsigned_short> *)local_518);
          if (*(int *)local_520 != -1) {
            if (*(int *)local_520 != 0) {
              LOCK();
              *(int *)local_520 = *(int *)local_520 + -1;
              local_31 = *(int *)local_520 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac667;
            }
            QArrayData::deallocate(local_520,2,8);
          }
LAB_1003ac667:
          puVar5 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
          iVar13 = -1;
          if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
            sVar15 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
            iVar13 = (int)sVar15;
          }
          local_530 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar13);
          local_538 = (QArrayData *)QString::fromAscii_helper("BootDevice",10);
          local_540 = (QArrayData *)QString::fromAscii_helper("",0);
          puVar25 = (undefined8 *)QString::replace(&local_530,&local_538,&local_540,1);
          local_528.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar25;
          if (1 < *(int *)local_528.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_528.field0_0x0 = *(int *)local_528.field0_0x0 + 1;
            local_31 = *(int *)local_528.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_528);
          if (*(int *)local_540 != -1) {
            if (*(int *)local_540 != 0) {
              LOCK();
              *(int *)local_540 = *(int *)local_540 + -1;
              local_31 = *(int *)local_540 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac73d;
            }
            QArrayData::deallocate(local_540,2,8);
          }
LAB_1003ac73d:
          if (*(int *)local_538 != -1) {
            if (*(int *)local_538 != 0) {
              LOCK();
              *(int *)local_538 = *(int *)local_538 + -1;
              local_31 = *(int *)local_538 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac773;
            }
            QArrayData::deallocate(local_538,2,8);
          }
LAB_1003ac773:
          if (*(int *)local_530 != -1) {
            if (*(int *)local_530 != 0) {
              LOCK();
              *(int *)local_530 = *(int *)local_530 + -1;
              local_31 = *(int *)local_530 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac7a9;
            }
            QArrayData::deallocate(local_530,2,8);
          }
LAB_1003ac7a9:
          iVar13 = -1;
          if (puVar4 != (undefined *)0x0) {
            sVar15 = _strlen(puVar4);
            iVar13 = (int)sVar15;
          }
          local_548 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar13);
          uVar18 = FUN_1003ae480(&local_70,&local_548);
          pQVar19 = (QVariant *)FUN_1002edf40(uVar18,&local_528);
          QVariant::operator=(pQVar19,(QVariant *)local_518);
          if (*(int *)local_548 != -1) {
            if (*(int *)local_548 != 0) {
              LOCK();
              *(int *)local_548 = *(int *)local_548 + -1;
              local_31 = *(int *)local_548 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac82c;
            }
            QArrayData::deallocate(local_548,2,8);
          }
LAB_1003ac82c:
          if (*(int *)local_528.field0_0x0 != -1) {
            if (*(int *)local_528.field0_0x0 != 0) {
              LOCK();
              *(int *)local_528.field0_0x0 = *(int *)local_528.field0_0x0 + -1;
              local_31 = *(int *)local_528.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ac862;
            }
            QArrayData::deallocate((QArrayData *)local_528.field0_0x0,2,8);
          }
LAB_1003ac862:
          QVariant::~QVariant((QVariant *)local_518);
          local_500 = local_500 + 2;
        } while (local_500 != local_4f8);
      }
      local_4f0 = 1;
      FUN_100039a80(&local_508);
      FUN_100039a80(&local_4e8);
    }
    BootingOrder::~BootingOrder(local_4e0);
  }
LAB_1003ac8b7:
  if (*(int *)(local_70 + 0x14) != 0) {
    plVar17 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar17 + 0x78))(plVar17,&local_70);
  }
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_70);
  }
  return;
}

