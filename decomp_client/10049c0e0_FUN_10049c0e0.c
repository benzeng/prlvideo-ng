
void FUN_10049c0e0(long param_1)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined8 uVar4;
  QWidget *pQVar5;
  undefined *puVar6;
  AnonymousUnion0 AVar7;
  uint uVar8;
  Data *pDVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  long lVar12;
  QArrayData *local_498;
  QArrayData *local_490;
  AnonymousUnion0 local_488;
  QVariant local_480;
  QArrayData *local_470;
  AnonymousUnion0 local_468;
  QVariant local_460;
  QArrayData *local_450;
  QArrayData *local_448;
  AnonymousUnion0 local_440;
  QVariant local_438;
  QArrayData *local_428;
  AnonymousUnion0 local_420;
  QVariant local_418;
  QArrayData *local_408;
  QArrayData *local_400;
  QArrayData *local_3f8;
  AnonymousUnion0 local_3f0;
  QVariant local_3e8;
  QArrayData *local_3d8;
  AnonymousUnion0 local_3d0;
  QVariant local_3c8;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  AnonymousUnion0 local_3a8;
  QVariant local_3a0;
  QArrayData *local_390;
  AnonymousUnion0 local_388;
  QVariant local_380;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  AnonymousUnion0 local_358;
  QVariant local_350;
  QArrayData *local_340;
  AnonymousUnion0 local_338;
  QVariant local_330;
  QArrayData *local_320;
  QArrayData *local_318;
  AnonymousUnion0 local_310;
  QVariant local_308;
  QArrayData *local_2f8;
  AnonymousUnion0 local_2f0;
  QVariant local_2e8;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  AnonymousUnion0 local_2c8;
  QVariant local_2c0;
  QArrayData *local_2b0;
  AnonymousUnion0 local_2a8;
  QVariant local_2a0;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  AnonymousUnion0 local_278;
  QVariant local_270;
  QArrayData *local_260;
  AnonymousUnion0 local_258;
  QVariant local_250;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  AnonymousUnion0 local_210;
  QVariant local_208;
  QArrayData *local_1f8;
  AnonymousUnion0 local_1f0;
  QVariant local_1e8;
  QString local_1d8;
  QVariant local_1d0;
  QString local_1c0;
  QVariant local_1b8;
  QString local_1a8;
  QVariant local_1a0;
  QArrayData *local_190;
  QString local_188;
  QVariant local_180;
  QString local_170;
  QVariant local_168;
  QString local_158;
  QVariant local_150;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  AnonymousUnion0 local_128;
  QVariant local_120;
  QArrayData *local_110;
  AnonymousUnion0 local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  Data *local_d8;
  QArrayData *local_d0;
  AnonymousUnion0 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  AnonymousUnion0 local_a8;
  QVariant local_a0;
  QString local_90;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_40,"CVmEdSharedFoldersDialog","Configure...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c158;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10049c158:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdSharedFoldersDialog","Share Mac user folders with @GUEST_TYPE@"
             ,0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c1b9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10049c1b9:
  pcVar3 = *(char **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdSharedFoldersDialog","Share Mac user folders with @GUEST_TYPE@"
             ,0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c237;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10049c237:
  pcVar3 = *(char **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_78,"CVmEdSharedFoldersDialog",
             "Share the user folders with the virtual machine",0);
  QVariant::QVariant(&local_70,&local_78);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinText");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c2b5;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10049c2b5:
  pcVar3 = *(char **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdSharedFoldersDialog",
             "Share the user folders with the virtual machine",0);
  QVariant::QVariant(&local_88,&local_90);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_LinText");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c33c;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10049c33c:
  puVar6 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x38);
  local_a8.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_b0,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_a8,&local_b0);
  QVariant::QVariant(&local_a0,(QStringList *)&local_a8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c3ee;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10049c3ee:
  AVar7 = local_a8;
  if (*(int *)local_a8.field1 != -1) {
    if (*(int *)local_a8.field1 != 0) {
      LOCK();
      *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
      local_31 = *(int *)local_a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c481;
    }
    iVar1 = *(int *)(local_a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_a8.field1 + 8)) {
      lVar12 = (long)*(int *)(local_a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049c460:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049c460;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049c481:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_c8.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_d0,"CVmEdSharedFoldersDialog","Settings.Tools.SharedProfile.Enabled",0);
  FUN_1000341d0(&local_c8,&local_d0);
  QVariant::QVariant(&local_c0,(QStringList *)&local_c8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c52c;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10049c52c:
  AVar7 = local_c8;
  if (*(int *)local_c8.field1 != -1) {
    if (*(int *)local_c8.field1 != 0) {
      LOCK();
      *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
      local_31 = *(int *)local_c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c5c1;
    }
    iVar1 = *(int *)(local_c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_c8.field1 + 8)) {
      lVar12 = (long)*(int *)(local_c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049c5a0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049c5a0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049c5c1:
  QComboBox::clear();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  local_d8 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_e0,"CVmEdSharedFoldersDialog","None",0);
  FUN_1000341d0(&local_d8,&local_e0);
  QCoreApplication::translate((char *)&local_e8,"CVmEdSharedFoldersDialog","Home folder only",0);
  FUN_1000341d0(&local_d8,&local_e8);
  QCoreApplication::translate((char *)&local_f0,"CVmEdSharedFoldersDialog","All disks",0);
  FUN_1000341d0(&local_d8);
  QComboBox::insertItems((int)uVar4,(QStringList *)0x0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c6bb;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10049c6bb:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c6f1;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10049c6f1:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c727;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10049c727:
  pDVar9 = local_d8;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c7c1;
    }
    iVar1 = *(int *)(local_d8 + 0xc);
    if (iVar1 != *(int *)(local_d8 + 8)) {
      lVar12 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_d8 + (long)iVar1 * 8 + 8;
      do {
        pQVar11 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar11 == 0) {
LAB_10049c7a0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar10;
            goto LAB_10049c7a0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_10049c7c1:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_108.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_110,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_108,&local_110);
  QVariant::QVariant(&local_100,(QStringList *)&local_108.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_100);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c86c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10049c86c:
  AVar7 = local_108;
  if (*(int *)local_108.field1 != -1) {
    if (*(int *)local_108.field1 != 0) {
      LOCK();
      *(int *)local_108.field1 = *(int *)local_108.field1 + -1;
      local_31 = *(int *)local_108.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049c901;
    }
    iVar1 = *(int *)(local_108.field1 + 0xc);
    if (iVar1 != *(int *)(local_108.field1 + 8)) {
      lVar12 = (long)*(int *)(local_108.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_108.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049c8e0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049c8e0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049c901:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_128.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_130,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.Enabled",0);
  FUN_1000341d0(&local_128,&local_130);
  QCoreApplication::translate
            ((char *)&local_138,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.ShareAllMacDisks",0);
  FUN_1000341d0(&local_128,&local_138);
  QCoreApplication::translate
            ((char *)&local_140,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.ShareUserHomeDir",0);
  FUN_1000341d0(&local_128,&local_140);
  QVariant::QVariant(&local_120,(QStringList *)&local_128.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_120);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ca16;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10049ca16:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ca4c;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10049ca4c:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ca82;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10049ca82:
  AVar7 = local_128;
  if (*(int *)local_128.field1 != -1) {
    if (*(int *)local_128.field1 != 0) {
      LOCK();
      *(int *)local_128.field1 = *(int *)local_128.field1 + -1;
      local_31 = *(int *)local_128.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cb11;
    }
    iVar1 = *(int *)(local_128.field1 + 0xc);
    if (iVar1 != *(int *)(local_128.field1 + 8)) {
      lVar12 = (long)*(int *)(local_128.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_128.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049caf0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049caf0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049cb11:
  pcVar3 = *(char **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_158,"CVmEdSharedFoldersDialog","initHostSharingTypeCombo",0);
  QVariant::QVariant(&local_150,&local_158);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_150);
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cba1;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_10049cba1:
  pcVar3 = *(char **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_170,"CVmEdSharedFoldersDialog","getHostSharingTypeComboValue",0);
  QVariant::QVariant(&local_168,&local_170);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cc31;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_10049cc31:
  pcVar3 = *(char **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_188,"CVmEdSharedFoldersDialog","setHostSharingTypeComboValue",0);
  QVariant::QVariant(&local_180,&local_188);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ccc1;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_10049ccc1:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_190,"CVmEdSharedFoldersDialog","Map Mac volumes to virtual machine",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cd2b;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10049cd2b:
  pcVar3 = *(char **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_1a8,"CVmEdSharedFoldersDialog","Map Mac volumes to @GUEST_TYPE@",0);
  QVariant::QVariant(&local_1a0,&local_1a8);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_1a0);
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      local_31 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cdbb;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
LAB_10049cdbb:
  pcVar3 = *(char **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_1c0,"CVmEdSharedFoldersDialog","Map host volumes to virtual machine",0);
  QVariant::QVariant(&local_1b8,&local_1c0);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinLinText");
  QVariant::~QVariant(&local_1b8);
  if (*(int *)local_1c0.field0_0x0 != -1) {
    if (*(int *)local_1c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
      local_31 = *(int *)local_1c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ce4b;
    }
    QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
  }
LAB_10049ce4b:
  pcVar3 = *(char **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_1d8,"CVmEdSharedFoldersDialog","Map Mac volumes to virtual machine",0);
  QVariant::QVariant(&local_1d0,&local_1d8);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacTextGeneric");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_31 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cedb;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_10049cedb:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_1f0.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_1f8,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_1f0,&local_1f8);
  QVariant::QVariant(&local_1e8,(QStringList *)&local_1f0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049cf86;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_10049cf86:
  AVar7 = local_1f0;
  if (*(int *)local_1f0.field1 != -1) {
    if (*(int *)local_1f0.field1 != 0) {
      LOCK();
      *(int *)local_1f0.field1 = *(int *)local_1f0.field1 + -1;
      local_31 = *(int *)local_1f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d011;
    }
    iVar1 = *(int *)(local_1f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1f0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_1f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_1f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049cff0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049cff0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049d011:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_210.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_218,"CVmEdSharedFoldersDialog","Settings.Tools.SharedVolumes.Enabled",0)
  ;
  FUN_1000341d0(&local_210,&local_218);
  QVariant::QVariant(&local_208,(QStringList *)&local_210.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_208);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d0bc;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_10049d0bc:
  AVar7 = local_210;
  if (*(int *)local_210.field1 != -1) {
    if (*(int *)local_210.field1 != 0) {
      LOCK();
      *(int *)local_210.field1 = *(int *)local_210.field1 + -1;
      local_31 = *(int *)local_210.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d151;
    }
    iVar1 = *(int *)(local_210.field1 + 0xc);
    if (iVar1 != *(int *)(local_210.field1 + 8)) {
      lVar12 = (long)*(int *)(local_210.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_210.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049d130:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049d130;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049d151:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_220,"CVmEdSharedFoldersDialog","Share Folders:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_31 = *(int *)local_220 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d1bb;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_10049d1bb:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_228,"CVmEdSharedFoldersDialog","Shared Cloud:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d225;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_10049d225:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_230,"CVmEdSharedFoldersDialog","SmartMount:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d28f;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_10049d28f:
  pQVar2 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_238,"CVmEdSharedFoldersDialog","Custom Folders...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d2fc;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_10049d2fc:
  pQVar2 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate
            ((char *)&local_240,"CVmEdSharedFoldersDialog","Share iCloud, Dropbox, and Google Drive"
             ,0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d369;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_10049d369:
  pcVar3 = *(char **)(param_1 + 0x90);
  local_258.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_260,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_258,&local_260);
  QVariant::QVariant(&local_250,(QStringList *)&local_258.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_250);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d417;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_10049d417:
  AVar7 = local_258;
  if (*(int *)local_258.field1 != -1) {
    if (*(int *)local_258.field1 != 0) {
      LOCK();
      *(int *)local_258.field1 = *(int *)local_258.field1 + -1;
      local_31 = *(int *)local_258.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d4b1;
    }
    iVar1 = *(int *)(local_258.field1 + 0xc);
    if (iVar1 != *(int *)(local_258.field1 + 8)) {
      lVar12 = (long)*(int *)(local_258.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_258.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049d490:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049d490;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049d4b1:
  pcVar3 = *(char **)(param_1 + 0x90);
  local_278.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_280,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.SharedCloud",0);
  FUN_1000341d0(&local_278,&local_280);
  QVariant::QVariant(&local_270,(QStringList *)&local_278.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_270);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d55f;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_10049d55f:
  AVar7 = local_278;
  if (*(int *)local_278.field1 != -1) {
    if (*(int *)local_278.field1 != 0) {
      LOCK();
      *(int *)local_278.field1 = *(int *)local_278.field1 + -1;
      local_31 = *(int *)local_278.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d5f1;
    }
    iVar1 = *(int *)(local_278.field1 + 0xc);
    if (iVar1 != *(int *)(local_278.field1 + 8)) {
      lVar12 = (long)*(int *)(local_278.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_278.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049d5d0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049d5d0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049d5f1:
  pQVar2 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_288,"CVmEdSharedFoldersDialog","Shared Profile:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d65e;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_10049d65e:
  pQVar2 = *(QString **)(param_1 + 200);
  QCoreApplication::translate
            ((char *)&local_290,"CVmEdSharedFoldersDialog","Assign a drive letter to shared folders"
             ,0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d6cb;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_10049d6cb:
  pcVar3 = *(char **)(param_1 + 200);
  local_2a8.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_2b0,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_2a8,&local_2b0);
  QVariant::QVariant(&local_2a0,(QStringList *)&local_2a8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_2a0);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d779;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_10049d779:
  AVar7 = local_2a8;
  if (*(int *)local_2a8.field1 != -1) {
    if (*(int *)local_2a8.field1 != 0) {
      LOCK();
      *(int *)local_2a8.field1 = *(int *)local_2a8.field1 + -1;
      local_31 = *(int *)local_2a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d811;
    }
    iVar1 = *(int *)(local_2a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2a8.field1 + 8)) {
      lVar12 = (long)*(int *)(local_2a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_2a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049d7f0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049d7f0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049d811:
  pcVar3 = *(char **)(param_1 + 200);
  local_2c8.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_2d0,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.MapSharedFoldersOnLetters",0);
  FUN_1000341d0(&local_2c8,&local_2d0);
  QVariant::QVariant(&local_2c0,(QStringList *)&local_2c8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_2c0);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d8bf;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_10049d8bf:
  AVar7 = local_2c8;
  if (*(int *)local_2c8.field1 != -1) {
    if (*(int *)local_2c8.field1 != 0) {
      LOCK();
      *(int *)local_2c8.field1 = *(int *)local_2c8.field1 + -1;
      local_31 = *(int *)local_2c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d951;
    }
    iVar1 = *(int *)(local_2c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2c8.field1 + 8)) {
      lVar12 = (long)*(int *)(local_2c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_2c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049d930:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049d930;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049d951:
  pQVar2 = *(QString **)(param_1 + 0xd0);
  QCoreApplication::translate
            ((char *)&local_2d8,"CVmEdSharedFoldersDialog","Allow creating executables",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049d9be;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_10049d9be:
  pcVar3 = *(char **)(param_1 + 0xd0);
  local_2f0.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_2f8,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_2f0,&local_2f8);
  QVariant::QVariant(&local_2e8,(QStringList *)&local_2f0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_2e8);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049da6c;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_10049da6c:
  AVar7 = local_2f0;
  if (*(int *)local_2f0.field1 != -1) {
    if (*(int *)local_2f0.field1 != 0) {
      LOCK();
      *(int *)local_2f0.field1 = *(int *)local_2f0.field1 + -1;
      local_31 = *(int *)local_2f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049db01;
    }
    iVar1 = *(int *)(local_2f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2f0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_2f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_2f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049dae0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049dae0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049db01:
  pcVar3 = *(char **)(param_1 + 0xd0);
  local_310.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_318,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.SetExecBitForFiles",0);
  FUN_1000341d0(&local_310,&local_318);
  QVariant::QVariant(&local_308,(QStringList *)&local_310.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_308);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_31 = *(int *)local_318 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049dbaf;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_10049dbaf:
  AVar7 = local_310;
  if (*(int *)local_310.field1 != -1) {
    if (*(int *)local_310.field1 != 0) {
      LOCK();
      *(int *)local_310.field1 = *(int *)local_310.field1 + -1;
      local_31 = *(int *)local_310.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049dc41;
    }
    iVar1 = *(int *)(local_310.field1 + 0xc);
    if (iVar1 != *(int *)(local_310.field1 + 8)) {
      lVar12 = (long)*(int *)(local_310.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_310.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049dc20:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049dc20;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049dc41:
  pQVar2 = *(QString **)(param_1 + 0xd8);
  QCoreApplication::translate
            ((char *)&local_320,"CVmEdSharedFoldersDialog","Enable DOS 8.3 filenames",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049dcae;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_10049dcae:
  pcVar3 = *(char **)(param_1 + 0xd8);
  local_338.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_340,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_338,&local_340);
  QVariant::QVariant(&local_330,(QStringList *)&local_338.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_330);
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_31 = *(int *)local_340 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049dd5c;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_10049dd5c:
  AVar7 = local_338;
  if (*(int *)local_338.field1 != -1) {
    if (*(int *)local_338.field1 != 0) {
      LOCK();
      *(int *)local_338.field1 = *(int *)local_338.field1 + -1;
      local_31 = *(int *)local_338.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ddf1;
    }
    iVar1 = *(int *)(local_338.field1 + 0xc);
    if (iVar1 != *(int *)(local_338.field1 + 8)) {
      lVar12 = (long)*(int *)(local_338.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_338.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049ddd0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049ddd0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049ddf1:
  pcVar3 = *(char **)(param_1 + 0xd8);
  local_358.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_360,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.HostSharing.EnableDos8dot3Names",0);
  FUN_1000341d0(&local_358,&local_360);
  QVariant::QVariant(&local_350,(QStringList *)&local_358.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_350);
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_31 = *(int *)local_360 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049de9f;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_10049de9f:
  AVar7 = local_358;
  if (*(int *)local_358.field1 != -1) {
    if (*(int *)local_358.field1 != 0) {
      LOCK();
      *(int *)local_358.field1 = *(int *)local_358.field1 + -1;
      local_31 = *(int *)local_358.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049df31;
    }
    iVar1 = *(int *)(local_358.field1 + 0xc);
    if (iVar1 != *(int *)(local_358.field1 + 8)) {
      lVar12 = (long)*(int *)(local_358.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_358.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049df10:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049df10;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049df31:
  pQVar5 = *(QWidget **)(param_1 + 8);
  uVar8 = QTabWidget::indexOf(pQVar5);
  QCoreApplication::translate((char *)&local_368,"CVmEdSharedFoldersDialog","Share Mac",0);
  QTabWidget::setTabText((int)pQVar5,(QString *)(ulong)uVar8);
  if (*(int *)local_368 != -1) {
    if (*(int *)local_368 != 0) {
      LOCK();
      *(int *)local_368 = *(int *)local_368 + -1;
      local_31 = *(int *)local_368 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049dfad;
    }
    QArrayData::deallocate(local_368,2,8);
  }
LAB_10049dfad:
  pQVar2 = *(QString **)(param_1 + 0x100);
  QCoreApplication::translate
            ((char *)&local_370,"CVmEdSharedFoldersDialog","Access Windows folders from Mac",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e01a;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_10049e01a:
  pcVar3 = *(char **)(param_1 + 0x100);
  local_388.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_390,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_388,&local_390);
  QVariant::QVariant(&local_380,(QStringList *)&local_388.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_380);
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_31 = *(int *)local_390 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e0c8;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_10049e0c8:
  AVar7 = local_388;
  if (*(int *)local_388.field1 != -1) {
    if (*(int *)local_388.field1 != 0) {
      LOCK();
      *(int *)local_388.field1 = *(int *)local_388.field1 + -1;
      local_31 = *(int *)local_388.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e161;
    }
    iVar1 = *(int *)(local_388.field1 + 0xc);
    if (iVar1 != *(int *)(local_388.field1 + 8)) {
      lVar12 = (long)*(int *)(local_388.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_388.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049e140:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049e140;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049e161:
  pcVar3 = *(char **)(param_1 + 0x100);
  local_3a8.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_3b0,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.GuestSharing.Enabled",0);
  FUN_1000341d0(&local_3a8,&local_3b0);
  QVariant::QVariant(&local_3a0,(QStringList *)&local_3a8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_3a0);
  if (*(int *)local_3b0 != -1) {
    if (*(int *)local_3b0 != 0) {
      LOCK();
      *(int *)local_3b0 = *(int *)local_3b0 + -1;
      local_31 = *(int *)local_3b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e20f;
    }
    QArrayData::deallocate(local_3b0,2,8);
  }
LAB_10049e20f:
  AVar7 = local_3a8;
  if (*(int *)local_3a8.field1 != -1) {
    if (*(int *)local_3a8.field1 != 0) {
      LOCK();
      *(int *)local_3a8.field1 = *(int *)local_3a8.field1 + -1;
      local_31 = *(int *)local_3a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e2a1;
    }
    iVar1 = *(int *)(local_3a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_3a8.field1 + 8)) {
      lVar12 = (long)*(int *)(local_3a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_3a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049e280:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049e280;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049e2a1:
  pQVar2 = *(QString **)(param_1 + 0x108);
  QCoreApplication::translate
            ((char *)&local_3b8,"CVmEdSharedFoldersDialog",
             "Shortcuts to virtual disks on Mac desktop",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_3b8 != -1) {
    if (*(int *)local_3b8 != 0) {
      LOCK();
      *(int *)local_3b8 = *(int *)local_3b8 + -1;
      local_31 = *(int *)local_3b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e30e;
    }
    QArrayData::deallocate(local_3b8,2,8);
  }
LAB_10049e30e:
  pcVar3 = *(char **)(param_1 + 0x108);
  local_3d0.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_3d8,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_3d0,&local_3d8);
  QVariant::QVariant(&local_3c8,(QStringList *)&local_3d0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_3c8);
  if (*(int *)local_3d8 != -1) {
    if (*(int *)local_3d8 != 0) {
      LOCK();
      *(int *)local_3d8 = *(int *)local_3d8 + -1;
      local_31 = *(int *)local_3d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e3bc;
    }
    QArrayData::deallocate(local_3d8,2,8);
  }
LAB_10049e3bc:
  AVar7 = local_3d0;
  if (*(int *)local_3d0.field1 != -1) {
    if (*(int *)local_3d0.field1 != 0) {
      LOCK();
      *(int *)local_3d0.field1 = *(int *)local_3d0.field1 + -1;
      local_31 = *(int *)local_3d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e451;
    }
    iVar1 = *(int *)(local_3d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_3d0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_3d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_3d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049e430:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049e430;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049e451:
  pcVar3 = *(char **)(param_1 + 0x108);
  local_3f0.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_3f8,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.GuestSharing.AutoMount",0);
  FUN_1000341d0(&local_3f0,&local_3f8);
  QVariant::QVariant(&local_3e8,(QStringList *)&local_3f0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_3e8);
  if (*(int *)local_3f8 != -1) {
    if (*(int *)local_3f8 != 0) {
      LOCK();
      *(int *)local_3f8 = *(int *)local_3f8 + -1;
      local_31 = *(int *)local_3f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e4ff;
    }
    QArrayData::deallocate(local_3f8,2,8);
  }
LAB_10049e4ff:
  AVar7 = local_3f0;
  if (*(int *)local_3f0.field1 != -1) {
    if (*(int *)local_3f0.field1 != 0) {
      LOCK();
      *(int *)local_3f0.field1 = *(int *)local_3f0.field1 + -1;
      local_31 = *(int *)local_3f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e591;
    }
    iVar1 = *(int *)(local_3f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_3f0.field1 + 8)) {
      lVar12 = (long)*(int *)(local_3f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_3f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049e570:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049e570;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049e591:
  local_400 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x118));
  if (*(int *)local_400 != -1) {
    if (*(int *)local_400 != 0) {
      LOCK();
      *(int *)local_400 = *(int *)local_400 + -1;
      local_31 = *(int *)local_400 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e5e8;
    }
    QArrayData::deallocate(local_400,2,8);
  }
LAB_10049e5e8:
  pQVar2 = *(QString **)(param_1 + 0x128);
  QCoreApplication::translate
            ((char *)&local_408,"CVmEdSharedFoldersDialog","Map Windows network drives to Mac",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_408 != -1) {
    if (*(int *)local_408 != 0) {
      LOCK();
      *(int *)local_408 = *(int *)local_408 + -1;
      local_31 = *(int *)local_408 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e655;
    }
    QArrayData::deallocate(local_408,2,8);
  }
LAB_10049e655:
  pcVar3 = *(char **)(param_1 + 0x128);
  local_420.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_428,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_420,&local_428);
  QVariant::QVariant(&local_418,(QStringList *)&local_420.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_418);
  if (*(int *)local_428 != -1) {
    if (*(int *)local_428 != 0) {
      LOCK();
      *(int *)local_428 = *(int *)local_428 + -1;
      local_31 = *(int *)local_428 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e703;
    }
    QArrayData::deallocate(local_428,2,8);
  }
LAB_10049e703:
  AVar7 = local_420;
  if (*(int *)local_420.field1 != -1) {
    if (*(int *)local_420.field1 != 0) {
      LOCK();
      *(int *)local_420.field1 = *(int *)local_420.field1 + -1;
      local_31 = *(int *)local_420.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e791;
    }
    iVar1 = *(int *)(local_420.field1 + 0xc);
    if (iVar1 != *(int *)(local_420.field1 + 8)) {
      lVar12 = (long)*(int *)(local_420.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_420.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049e770:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049e770;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049e791:
  pcVar3 = *(char **)(param_1 + 0x128);
  local_440.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_448,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.GuestSharing.AutoMountNetworkDrives",0);
  FUN_1000341d0(&local_440,&local_448);
  QVariant::QVariant(&local_438,(QStringList *)&local_440.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_438);
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_31 = *(int *)local_448 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e83f;
    }
    QArrayData::deallocate(local_448,2,8);
  }
LAB_10049e83f:
  AVar7 = local_440;
  if (*(int *)local_440.field1 != -1) {
    if (*(int *)local_440.field1 != 0) {
      LOCK();
      *(int *)local_440.field1 = *(int *)local_440.field1 + -1;
      local_31 = *(int *)local_440.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e8d1;
    }
    iVar1 = *(int *)(local_440.field1 + 0xc);
    if (iVar1 != *(int *)(local_440.field1 + 8)) {
      lVar12 = (long)*(int *)(local_440.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_440.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049e8b0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049e8b0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049e8d1:
  pQVar2 = *(QString **)(param_1 + 0x130);
  QCoreApplication::translate
            ((char *)&local_450,"CVmEdSharedFoldersDialog","Share OneDrive with Mac",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_31 = *(int *)local_450 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e93e;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_10049e93e:
  pcVar3 = *(char **)(param_1 + 0x130);
  local_468.field1 = (Data *)puVar6;
  QCoreApplication::translate((char *)&local_470,"CVmEdSharedFoldersDialog","VmConfig",0);
  FUN_1000341d0(&local_468,&local_470);
  QVariant::QVariant(&local_460,(QStringList *)&local_468.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_460);
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_31 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049e9ec;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_10049e9ec:
  AVar7 = local_468;
  if (*(int *)local_468.field1 != -1) {
    if (*(int *)local_468.field1 != 0) {
      LOCK();
      *(int *)local_468.field1 = *(int *)local_468.field1 + -1;
      local_31 = *(int *)local_468.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ea81;
    }
    iVar1 = *(int *)(local_468.field1 + 0xc);
    if (iVar1 != *(int *)(local_468.field1 + 8)) {
      lVar12 = (long)*(int *)(local_468.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_468.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049ea60:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049ea60;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049ea81:
  pcVar3 = *(char **)(param_1 + 0x130);
  local_488.field1 = (Data *)puVar6;
  QCoreApplication::translate
            ((char *)&local_490,"CVmEdSharedFoldersDialog",
             "Settings.Tools.SharedFolders.GuestSharing.AutoMountCloudDrives",0);
  FUN_1000341d0(&local_488,&local_490);
  QVariant::QVariant(&local_480,(QStringList *)&local_488.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_480);
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_31 = *(int *)local_490 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049eb2f;
    }
    QArrayData::deallocate(local_490,2,8);
  }
LAB_10049eb2f:
  AVar7 = local_488;
  if (*(int *)local_488.field1 != -1) {
    if (*(int *)local_488.field1 != 0) {
      LOCK();
      *(int *)local_488.field1 = *(int *)local_488.field1 + -1;
      local_31 = *(int *)local_488.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049ebc1;
    }
    iVar1 = *(int *)(local_488.field1 + 0xc);
    if (iVar1 != *(int *)(local_488.field1 + 8)) {
      lVar12 = (long)*(int *)(local_488.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = (Data *)(local_488.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10049eba0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10049eba0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar7.field1);
  }
LAB_10049ebc1:
  pQVar5 = *(QWidget **)(param_1 + 8);
  uVar8 = QTabWidget::indexOf(pQVar5);
  QCoreApplication::translate((char *)&local_498,"CVmEdSharedFoldersDialog","Share Windows",0);
  QTabWidget::setTabText((int)pQVar5,(QString *)(ulong)uVar8);
  if (*(int *)local_498 != -1) {
    if (*(int *)local_498 != 0) {
      LOCK();
      *(int *)local_498 = *(int *)local_498 + -1;
      UNLOCK();
      if (*(int *)local_498 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_498,2,8);
  }
  return;
}

