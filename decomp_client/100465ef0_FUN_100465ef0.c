
void FUN_100465ef0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  AnonymousUnion0 local_1d0;
  QVariant local_1c8;
  QArrayData *local_1b8;
  AnonymousUnion0 local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QArrayData *local_190;
  AnonymousUnion0 local_188;
  QVariant local_180;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  QString local_148;
  QVariant local_140;
  QString local_130;
  QVariant local_128;
  QString local_118;
  QVariant local_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  AnonymousUnion0 local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  AnonymousUnion0 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  QVariant local_98;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdGeneralDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100465f67;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100465f67:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_48,"CVmEdGeneralDialog","<b>Hard Disks</b>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100465fc8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100465fc8:
  pQVar2 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_50,"CVmEdGeneralDialog","<b>Snapshots</b>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046602c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10046602c:
  pQVar2 = *(QString **)(param_1 + 200);
  QCoreApplication::translate((char *)&local_58,"CVmEdGeneralDialog","<b>Miscellaneous</b>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466090;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100466090:
  pQVar2 = *(QString **)(param_1 + 0x100);
  QCoreApplication::translate((char *)&local_60,"CVmEdGeneralDialog","<b>Reclaimable</b>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004660f4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004660f4:
  pQVar2 = *(QString **)(param_1 + 0x118);
  QCoreApplication::translate
            ((char *)&local_68,"CVmEdGeneralDialog","<b>Reclaiming disk space...</b>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466158;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100466158:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x128);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_88,"CVmEdGeneralDialog","VmConfig",0);
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004661ef;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004661ef:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466281;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466260:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466260;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466281:
  pcVar3 = *(char **)(param_1 + 0x128);
  local_a0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_a8,"CVmEdGeneralDialog","Settings.General.Profile.Type",0);
  FUN_1000341d0(&local_a0,&local_a8);
  QCoreApplication::translate
            ((char *)&local_b0,"CVmEdGeneralDialog","Settings.General.Profile.Custom",0);
  FUN_1000341d0(&local_a0,&local_b0);
  QVariant::QVariant(&local_98,(QStringList *)&local_a0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466364;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100466364:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046639a;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10046639a:
  AVar5 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_31 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466431;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466410:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466410;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466431:
  pcVar3 = *(char **)(param_1 + 0x160);
  local_c8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_d0,"CVmEdGeneralDialog","VmConfig",0);
  FUN_1000341d0(&local_c8,&local_d0);
  QVariant::QVariant(&local_c0,(QStringList *)&local_c8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004664df;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004664df:
  AVar5 = local_c8;
  if (*(int *)local_c8.field1 != -1) {
    if (*(int *)local_c8.field1 != 0) {
      LOCK();
      *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
      local_31 = *(int *)local_c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466571;
    }
    iVar1 = *(int *)(local_c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_c8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466550:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466550;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466571:
  pcVar3 = *(char **)(param_1 + 0x160);
  local_e8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_f0,"CVmEdGeneralDialog","Settings.General.OsType",0);
  FUN_1000341d0(&local_e8,&local_f0);
  QCoreApplication::translate((char *)&local_f8,"CVmEdGeneralDialog","Settings.General.OsNumber",0);
  FUN_1000341d0(&local_e8,&local_f8);
  QCoreApplication::translate
            ((char *)&local_100,"CVmEdGeneralDialog","Settings.Tools.AutoSyncOSType.Enabled",0);
  FUN_1000341d0(&local_e8,&local_100);
  QVariant::QVariant(&local_e0,(QStringList *)&local_e8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466689;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100466689:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004666bf;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004666bf:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004666f5;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004666f5:
  AVar5 = local_e8;
  if (*(int *)local_e8.field1 != -1) {
    if (*(int *)local_e8.field1 != 0) {
      LOCK();
      *(int *)local_e8.field1 = *(int *)local_e8.field1 + -1;
      local_31 = *(int *)local_e8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466781;
    }
    iVar1 = *(int *)(local_e8.field1 + 0xc);
    if (iVar1 != *(int *)(local_e8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_e8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_e8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466760:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466760;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466781:
  pcVar3 = *(char **)(param_1 + 0x160);
  QCoreApplication::translate((char *)&local_118,"CVmEdGeneralDialog","initOsVerCombo",0);
  QVariant::QVariant(&local_110,&local_118);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466814;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_100466814:
  pcVar3 = *(char **)(param_1 + 0x160);
  QCoreApplication::translate((char *)&local_130,"CVmEdGeneralDialog","getOsVerComboValue",0);
  QVariant::QVariant(&local_128,&local_130);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004668a7;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1004668a7:
  pcVar3 = *(char **)(param_1 + 0x160);
  QCoreApplication::translate((char *)&local_148,"CVmEdGeneralDialog","setOsVerComboValue",0);
  QVariant::QVariant(&local_140,&local_148);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_140);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046693a;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_10046693a:
  pQVar2 = *(QString **)(param_1 + 0x168);
  QCoreApplication::translate((char *)&local_150,"CVmEdGeneralDialog","Name:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004669a7;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004669a7:
  pcVar3 = *(char **)(param_1 + 0x170);
  local_168.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_170,"CVmEdGeneralDialog","Identification.VmName",0);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466a55;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100466a55:
  AVar5 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466ae1;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar8 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466ac0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466ac0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466ae1:
  pcVar3 = *(char **)(param_1 + 0x170);
  local_188.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_190,"CVmEdGeneralDialog","VmConfig",0);
  FUN_1000341d0(&local_188,&local_190);
  QVariant::QVariant(&local_180,(QStringList *)&local_188.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466b8f;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100466b8f:
  AVar5 = local_188;
  if (*(int *)local_188.field1 != -1) {
    if (*(int *)local_188.field1 != 0) {
      LOCK();
      *(int *)local_188.field1 = *(int *)local_188.field1 + -1;
      local_31 = *(int *)local_188.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466c21;
    }
    iVar1 = *(int *)(local_188.field1 + 0xc);
    if (iVar1 != *(int *)(local_188.field1 + 8)) {
      lVar8 = (long)*(int *)(local_188.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_188.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466c00:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466c00;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466c21:
  pQVar2 = *(QString **)(param_1 + 0x178);
  QCoreApplication::translate((char *)&local_198,"CVmEdGeneralDialog","Description:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466c8e;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100466c8e:
  pcVar3 = *(char **)(param_1 + 0x180);
  local_1b0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1b8,"CVmEdGeneralDialog","VmConfig",0);
  FUN_1000341d0(&local_1b0,&local_1b8);
  QVariant::QVariant(&local_1a8,(QStringList *)&local_1b0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466d3c;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100466d3c:
  AVar5 = local_1b0;
  if (*(int *)local_1b0.field1 != -1) {
    if (*(int *)local_1b0.field1 != 0) {
      LOCK();
      *(int *)local_1b0.field1 = *(int *)local_1b0.field1 + -1;
      local_31 = *(int *)local_1b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466dd1;
    }
    iVar1 = *(int *)(local_1b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466db0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466db0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466dd1:
  pcVar3 = *(char **)(param_1 + 0x180);
  local_1d0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_1d8,"CVmEdGeneralDialog","Settings.General.VmDescription",0);
  FUN_1000341d0(&local_1d0,&local_1d8);
  QVariant::QVariant(&local_1c8,(QStringList *)&local_1d0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466e7f;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100466e7f:
  AVar5 = local_1d0;
  if (*(int *)local_1d0.field1 != -1) {
    if (*(int *)local_1d0.field1 != 0) {
      LOCK();
      *(int *)local_1d0.field1 = *(int *)local_1d0.field1 + -1;
      local_31 = *(int *)local_1d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466f11;
    }
    iVar1 = *(int *)(local_1d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1d0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100466ef0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100466ef0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100466f11:
  pQVar2 = *(QString **)(param_1 + 400);
  QCoreApplication::translate((char *)&local_1e0,"CVmEdGeneralDialog","Total Size",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466f7e;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100466f7e:
  local_1e8 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x198));
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100466fd5;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100466fd5:
  pQVar2 = *(QString **)(param_1 + 0x1e8);
  QCoreApplication::translate((char *)&local_1f0,"CVmEdGeneralDialog","Reclaim...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100467042;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_100467042:
  pQVar2 = *(QString **)(param_1 + 0x1f0);
  QCoreApplication::translate((char *)&local_1f8,"CVmEdGeneralDialog","Configure for:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004670af;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_1004670af:
  pQVar2 = *(QString **)(param_1 + 0x1f8);
  QCoreApplication::translate((char *)&local_200,"CVmEdGeneralDialog","Change...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      UNLOCK();
      if (*(int *)local_200 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_200,2,8);
  }
  return;
}

