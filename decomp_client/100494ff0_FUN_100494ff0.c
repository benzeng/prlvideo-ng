
void FUN_100494ff0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  AnonymousUnion0 local_290;
  QVariant local_288;
  QArrayData *local_278;
  AnonymousUnion0 local_270;
  QVariant local_268;
  QArrayData *local_258;
  QArrayData *local_250;
  AnonymousUnion0 local_248;
  QVariant local_240;
  QArrayData *local_230;
  AnonymousUnion0 local_228;
  QVariant local_220;
  QArrayData *local_210;
  QArrayData *local_208;
  AnonymousUnion0 local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  AnonymousUnion0 local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  AnonymousUnion0 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  AnonymousUnion0 local_198;
  QVariant local_190;
  QArrayData *local_180;
  QArrayData *local_178;
  AnonymousUnion0 local_170;
  QVariant local_168;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QVariant local_148;
  QString local_138;
  QVariant local_130;
  QString local_120;
  QVariant local_118;
  QArrayData *local_108;
  QString local_100;
  QVariant local_f8;
  QString local_e8;
  QVariant local_e0;
  QString local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
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
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdServicesDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495067;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100495067:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_48,"CVmEdServicesDialog","Time:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004950c8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004950c8:
  QComboBox::clear();
  puVar5 = PTR_shared_null_1021e15e8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_58,"CVmEdServicesDialog","Auto-sync guest OS to OS X",0);
  FUN_1000341d0(&local_50,&local_58);
  QCoreApplication::translate((char *)&local_60,"CVmEdServicesDialog","Two-way synchronization",0);
  FUN_1000341d0(&local_50,&local_60);
  QCoreApplication::translate((char *)&local_68,"CVmEdServicesDialog","Do not synchronize",0);
  FUN_1000341d0(&local_50);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004951a2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004951a2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004951d2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004951d2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495202;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100495202:
  pDVar8 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495291;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100495270:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100495270;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100495291:
  pcVar4 = *(char **)(param_1 + 0x20);
  local_80.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_88,"CVmEdServicesDialog","VmConfig",0);
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049531e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10049531e:
  AVar6 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004953b1;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar10 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100495390:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100495390;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004953b1:
  pcVar4 = *(char **)(param_1 + 0x20);
  local_a0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_a8,"CVmEdServicesDialog","Settings.Tools.TimeSync.Enabled",0);
  FUN_1000341d0(&local_a0,&local_a8);
  QCoreApplication::translate
            ((char *)&local_b0,"CVmEdServicesDialog","Settings.Tools.TimeSync.KeepTimeDiff",0);
  FUN_1000341d0(&local_a0,&local_b0);
  QCoreApplication::translate
            ((char *)&local_b8,"CVmEdServicesDialog","Settings.Tools.TimeSync.SyncHostToGuest",0);
  FUN_1000341d0(&local_a0,&local_b8);
  QVariant::QVariant(&local_98,(QStringList *)&local_a0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004954c6;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004954c6:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004954fc;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004954fc:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495532;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100495532:
  AVar6 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_31 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004955c1;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004955a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004955a0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004955c1:
  pcVar4 = *(char **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_d0,"CVmEdServicesDialog","initTimeSyncCombo",0);
  QVariant::QVariant(&local_c8,&local_d0);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495651;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100495651:
  pcVar4 = *(char **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_e8,"CVmEdServicesDialog","getTimeSyncComboValue",0);
  QVariant::QVariant(&local_e0,&local_e8);
  QObject::setProperty(pcVar4,(QVariant *)"getter");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004956e1;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1004956e1:
  pcVar4 = *(char **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_100,"CVmEdServicesDialog","setTimeSyncComboValue",0);
  QVariant::QVariant(&local_f8,&local_100);
  QObject::setProperty(pcVar4,(QVariant *)"setter");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495771;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100495771:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_108,"CVmEdServicesDialog","Share clipboard",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004957db;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004957db:
  pcVar4 = *(char **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_120,"CVmEdServicesDialog","Share Mac clipboard",0);
  QVariant::QVariant(&local_118,&local_120);
  QObject::setProperty(pcVar4,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_118);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049586b;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_10049586b:
  pcVar4 = *(char **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_138,"CVmEdServicesDialog","Share host clipboard",0);
  QVariant::QVariant(&local_130,&local_138);
  QObject::setProperty(pcVar4,(QVariant *)"DynProm_WinLinText");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004958fb;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_1004958fb:
  pcVar4 = *(char **)(param_1 + 0x28);
  local_150.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_158,"CVmEdServicesDialog","VmConfig",0);
  FUN_1000341d0(&local_150,&local_158);
  QVariant::QVariant(&local_148,(QStringList *)&local_150.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004959a6;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004959a6:
  AVar6 = local_150;
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_31 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495a31;
    }
    iVar1 = *(int *)(local_150.field1 + 0xc);
    if (iVar1 != *(int *)(local_150.field1 + 8)) {
      lVar10 = (long)*(int *)(local_150.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_150.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100495a10:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100495a10;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100495a31:
  pcVar4 = *(char **)(param_1 + 0x28);
  local_170.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_178,"CVmEdServicesDialog","Settings.Tools.ClipboardSync.Enabled",0);
  FUN_1000341d0(&local_170,&local_178);
  QVariant::QVariant(&local_168,(QStringList *)&local_170.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495adc;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100495adc:
  AVar6 = local_170;
  if (*(int *)local_170.field1 != -1) {
    if (*(int *)local_170.field1 != 0) {
      LOCK();
      *(int *)local_170.field1 = *(int *)local_170.field1 + -1;
      local_31 = *(int *)local_170.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495b71;
    }
    iVar1 = *(int *)(local_170.field1 + 0xc);
    if (iVar1 != *(int *)(local_170.field1 + 8)) {
      lVar10 = (long)*(int *)(local_170.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_170.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100495b50:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100495b50;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100495b71:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_180,"CVmEdServicesDialog","Preserve text formatting",0)
  ;
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495bdb;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_100495bdb:
  pcVar4 = *(char **)(param_1 + 0x30);
  local_198.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1a0,"CVmEdServicesDialog","VmConfig",0);
  FUN_1000341d0(&local_198,&local_1a0);
  QVariant::QVariant(&local_190,(QStringList *)&local_198.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495c86;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100495c86:
  AVar6 = local_198;
  if (*(int *)local_198.field1 != -1) {
    if (*(int *)local_198.field1 != 0) {
      LOCK();
      *(int *)local_198.field1 = *(int *)local_198.field1 + -1;
      local_31 = *(int *)local_198.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495d11;
    }
    iVar1 = *(int *)(local_198.field1 + 0xc);
    if (iVar1 != *(int *)(local_198.field1 + 8)) {
      lVar10 = (long)*(int *)(local_198.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_198.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100495cf0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100495cf0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100495d11:
  pcVar4 = *(char **)(param_1 + 0x30);
  local_1b8.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_1c0,"CVmEdServicesDialog",
             "Settings.Tools.ClipboardSync.PreserveTextFormatting",0);
  FUN_1000341d0(&local_1b8,&local_1c0);
  QVariant::QVariant(&local_1b0,(QStringList *)&local_1b8.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495dbc;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100495dbc:
  AVar6 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_31 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495e51;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100495e30:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100495e30;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100495e51:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_1c8,"CVmEdServicesDialog","Enable swipe from edges",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495ebb;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100495ebb:
  pcVar4 = *(char **)(param_1 + 0x40);
  local_1e0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_1e8,"CVmEdServicesDialog","Settings.Tools.Gestures.OneFingerSwipe",0);
  FUN_1000341d0(&local_1e0,&local_1e8);
  QVariant::QVariant(&local_1d8,(QStringList *)&local_1e0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495f66;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100495f66:
  AVar6 = local_1e0;
  if (*(int *)local_1e0.field1 != -1) {
    if (*(int *)local_1e0.field1 != 0) {
      LOCK();
      *(int *)local_1e0.field1 = *(int *)local_1e0.field1 + -1;
      local_31 = *(int *)local_1e0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100495ff1;
    }
    iVar1 = *(int *)(local_1e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100495fd0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100495fd0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100495ff1:
  pcVar4 = *(char **)(param_1 + 0x40);
  local_200.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_208,"CVmEdServicesDialog","VmConfig",0);
  FUN_1000341d0(&local_200,&local_208);
  QVariant::QVariant(&local_1f8,(QStringList *)&local_200.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_1f8);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049609c;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10049609c:
  AVar6 = local_200;
  if (*(int *)local_200.field1 != -1) {
    if (*(int *)local_200.field1 != 0) {
      LOCK();
      *(int *)local_200.field1 = *(int *)local_200.field1 + -1;
      local_31 = *(int *)local_200.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100496131;
    }
    iVar1 = *(int *)(local_200.field1 + 0xc);
    if (iVar1 != *(int *)(local_200.field1 + 8)) {
      lVar10 = (long)*(int *)(local_200.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_200.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100496110:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100496110;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100496131:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_210,"CVmEdServicesDialog","Enable Apple Remote",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049619b;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10049619b:
  pcVar4 = *(char **)(param_1 + 0x48);
  local_228.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_230,"CVmEdServicesDialog","VmConfig",0);
  FUN_1000341d0(&local_228,&local_230);
  QVariant::QVariant(&local_220,(QStringList *)&local_228.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100496246;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100496246:
  AVar6 = local_228;
  if (*(int *)local_228.field1 != -1) {
    if (*(int *)local_228.field1 != 0) {
      LOCK();
      *(int *)local_228.field1 = *(int *)local_228.field1 + -1;
      local_31 = *(int *)local_228.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004962d1;
    }
    iVar1 = *(int *)(local_228.field1 + 0xc);
    if (iVar1 != *(int *)(local_228.field1 + 8)) {
      lVar10 = (long)*(int *)(local_228.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_228.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004962b0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004962b0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004962d1:
  pcVar4 = *(char **)(param_1 + 0x48);
  local_248.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_250,"CVmEdServicesDialog","Settings.Tools.RemoteControl.Enabled",0);
  FUN_1000341d0(&local_248,&local_250);
  QVariant::QVariant(&local_240,(QStringList *)&local_248.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_240);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049637c;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_10049637c:
  AVar6 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100496411;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar10 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004963f0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004963f0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100496411:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_258,"CVmEdServicesDialog",
             "Allow Windows to access your Mac\'s current location",0);
  CMultilineCheckBox::setText(pQVar2);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049647b;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_10049647b:
  pcVar4 = *(char **)(param_1 + 0x50);
  local_270.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_278,"CVmEdServicesDialog","VmConfig",0);
  FUN_1000341d0(&local_270,&local_278);
  QVariant::QVariant(&local_268,(QStringList *)&local_270.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_268);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100496526;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_100496526:
  AVar6 = local_270;
  if (*(int *)local_270.field1 != -1) {
    if (*(int *)local_270.field1 != 0) {
      LOCK();
      *(int *)local_270.field1 = *(int *)local_270.field1 + -1;
      local_31 = *(int *)local_270.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004965b1;
    }
    iVar1 = *(int *)(local_270.field1 + 0xc);
    if (iVar1 != *(int *)(local_270.field1 + 8)) {
      lVar10 = (long)*(int *)(local_270.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_270.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100496590:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100496590;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004965b1:
  pcVar4 = *(char **)(param_1 + 0x50);
  local_290.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_298,"CVmEdServicesDialog","Settings.Tools.LocationProvider.Enabled",0);
  FUN_1000341d0(&local_290,&local_298);
  QVariant::QVariant(&local_288,(QStringList *)&local_290.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_288);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049665c;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_10049665c:
  AVar6 = local_290;
  if (*(int *)local_290.field1 != -1) {
    if (*(int *)local_290.field1 != 0) {
      LOCK();
      *(int *)local_290.field1 = *(int *)local_290.field1 + -1;
      local_31 = *(int *)local_290.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004966f1;
    }
    iVar1 = *(int *)(local_290.field1 + 0xc);
    if (iVar1 != *(int *)(local_290.field1 + 8)) {
      lVar10 = (long)*(int *)(local_290.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_290.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004966d0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004966d0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004966f1:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_2a0,"CVmEdServicesDialog",
             "To enable, you must enable Location Services for @@PRODUCT_NAME:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049675b;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_10049675b:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_2a8,"CVmEdServicesDialog","Open Security && Privacy Preferences...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      UNLOCK();
      if (*(int *)local_2a8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
  return;
}

