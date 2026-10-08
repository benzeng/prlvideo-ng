
void FUN_1004a2a10(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_348;
  AnonymousUnion0 local_340;
  QVariant local_338;
  QArrayData *local_328;
  AnonymousUnion0 local_320;
  QVariant local_318;
  QString local_308;
  QVariant local_300;
  QString local_2f0;
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
  AnonymousUnion0 local_280;
  QVariant local_278;
  QArrayData *local_268;
  AnonymousUnion0 local_260;
  QVariant local_258;
  QArrayData *local_248;
  QString local_240;
  QVariant local_238;
  QString local_228;
  QVariant local_220;
  QArrayData *local_210;
  AnonymousUnion0 local_208;
  QVariant local_200;
  QArrayData *local_1f0;
  AnonymousUnion0 local_1e8;
  QVariant local_1e0;
  QString local_1d0;
  QVariant local_1c8;
  QString local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  AnonymousUnion0 local_188;
  QVariant local_180;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QString local_150;
  QVariant local_148;
  QString local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  AnonymousUnion0 local_110;
  QVariant local_108;
  QArrayData *local_f8;
  AnonymousUnion0 local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  AnonymousUnion0 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  AnonymousUnion0 local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdSmartSelectDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2a87;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004a2a87:
  pQVar2 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdSmartSelectDialog","Allow apps to auto-switch to full screen",0
            );
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2ae8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004a2ae8:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 8);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_68,"CVmEdSmartSelectDialog","VmConfig",0);
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2b7c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004a2b7c:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2c01;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a2be0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a2be0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a2c01:
  pcVar3 = *(char **)(param_1 + 8);
  local_80.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_88,"CVmEdSmartSelectDialog",
             "Settings.Tools.Coherence.SwitchToFullscreenOnDemand",0);
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2c8e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004a2c8e:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2d21;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a2d00:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a2d00;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a2d21:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdSmartSelectDialog","Dock icons bounce to alert",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2d8b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004a2d8b:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_a8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_b0,"CVmEdSmartSelectDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004a2e36;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004a2e36:
  AVar5 = local_a8;
  if (*(int *)local_a8.field1 != -1) {
    if (*(int *)local_a8.field1 != 0) {
      LOCK();
      *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
      local_31 = *(int *)local_a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2ec1;
    }
    iVar1 = *(int *)(local_a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_a8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a2ea0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a2ea0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a2ec1:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_c8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_d0,"CVmEdSmartSelectDialog",
             "Settings.Tools.SharedApplications.BounceDockIconWhenAppFlashes",0);
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
      if ((bool)local_31) goto LAB_1004a2f6c;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004a2f6c:
  AVar5 = local_c8;
  if (*(int *)local_c8.field1 != -1) {
    if (*(int *)local_c8.field1 != 0) {
      LOCK();
      *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
      local_31 = *(int *)local_c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3001;
    }
    iVar1 = *(int *)(local_c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_c8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a2fe0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a2fe0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a3001:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdSmartSelectDialog","Add new applications to Launchpad",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a306b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004a306b:
  pcVar3 = *(char **)(param_1 + 0x20);
  local_f0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_f8,"CVmEdSmartSelectDialog","VmConfig",0);
  FUN_1000341d0(&local_f0,&local_f8);
  QVariant::QVariant(&local_e8,(QStringList *)&local_f0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3116;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004a3116:
  AVar5 = local_f0;
  if (*(int *)local_f0.field1 != -1) {
    if (*(int *)local_f0.field1 != 0) {
      LOCK();
      *(int *)local_f0.field1 = *(int *)local_f0.field1 + -1;
      local_31 = *(int *)local_f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a31a1;
    }
    iVar1 = *(int *)(local_f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_f0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a3180:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a3180;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a31a1:
  pcVar3 = *(char **)(param_1 + 0x20);
  local_110.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_118,"CVmEdSmartSelectDialog",
             "Settings.Tools.SharedApplications.AddInstalledApplicationsToLaunchpad",0);
  FUN_1000341d0(&local_110,&local_118);
  QVariant::QVariant(&local_108,(QStringList *)&local_110.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_108);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a324c;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004a324c:
  AVar5 = local_110;
  if (*(int *)local_110.field1 != -1) {
    if (*(int *)local_110.field1 != 0) {
      LOCK();
      *(int *)local_110.field1 = *(int *)local_110.field1 + -1;
      local_31 = *(int *)local_110.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a32e1;
    }
    iVar1 = *(int *)(local_110.field1 + 0xc);
    if (iVar1 != *(int *)(local_110.field1 + 8)) {
      lVar8 = (long)*(int *)(local_110.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_110.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a32c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a32c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a32e1:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_120,"CVmEdSmartSelectDialog","Share Windows applications with Mac",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a334b;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004a334b:
  pcVar3 = *(char **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_138,"CVmEdSmartSelectDialog","Share @GUEST_TYPE@ applications with Mac",
             0);
  QVariant::QVariant(&local_130,&local_138);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a33db;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_1004a33db:
  pcVar3 = *(char **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_150,"CVmEdSmartSelectDialog",
             "Share guest applications with host operating system",0);
  QVariant::QVariant(&local_148,&local_150);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinLinText");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_31 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a346b;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_1004a346b:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_168.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_170,"CVmEdSmartSelectDialog","VmConfig",0);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3516;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1004a3516:
  AVar5 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a35a1;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar8 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a3580:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a3580;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a35a1:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_188.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_190,"CVmEdSmartSelectDialog",
             "Settings.Tools.SharedApplications.FromWinToMac",0);
  FUN_1000341d0(&local_188,&local_190);
  QVariant::QVariant(&local_180,(QStringList *)&local_188.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a364c;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1004a364c:
  AVar5 = local_188;
  if (*(int *)local_188.field1 != -1) {
    if (*(int *)local_188.field1 != 0) {
      LOCK();
      *(int *)local_188.field1 = *(int *)local_188.field1 + -1;
      local_31 = *(int *)local_188.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a36e1;
    }
    iVar1 = *(int *)(local_188.field1 + 0xc);
    if (iVar1 != *(int *)(local_188.field1 + 8)) {
      lVar8 = (long)*(int *)(local_188.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_188.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a36c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a36c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a36e1:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_198,"CVmEdSmartSelectDialog",
             "You can select which app you use to open a file. <a href=\"#\">Read more...</a>",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a374b;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004a374b:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_1a0,"CVmEdSmartSelectDialog","Show Dock icons in Coherence only",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a37b5;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004a37b5:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_1b8,"CVmEdSmartSelectDialog","Show Dock icons in Coherence only",0);
  QVariant::QVariant(&local_1b0,&local_1b8);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_31 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3845;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_1004a3845:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_1d0,"CVmEdSmartSelectDialog",
             "Show guest application icons in Coherence only",0);
  QVariant::QVariant(&local_1c8,&local_1d0);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinText");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_31 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a38d5;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_1004a38d5:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_1e8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1f0,"CVmEdSmartSelectDialog","VmConfig",0);
  FUN_1000341d0(&local_1e8,&local_1f0);
  QVariant::QVariant(&local_1e0,(QStringList *)&local_1e8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1e0);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3980;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1004a3980:
  AVar5 = local_1e8;
  if (*(int *)local_1e8.field1 != -1) {
    if (*(int *)local_1e8.field1 != 0) {
      LOCK();
      *(int *)local_1e8.field1 = *(int *)local_1e8.field1 + -1;
      local_31 = *(int *)local_1e8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3a11;
    }
    iVar1 = *(int *)(local_1e8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1e8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1e8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a39f0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a39f0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a3a11:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_208.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_210,"CVmEdSmartSelectDialog",
             "Settings.Tools.SharedApplications.AppInDock",0);
  FUN_1000341d0(&local_208,&local_210);
  QVariant::QVariant(&local_200,(QStringList *)&local_208.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_200);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3abc;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1004a3abc:
  AVar5 = local_208;
  if (*(int *)local_208.field1 != -1) {
    if (*(int *)local_208.field1 != 0) {
      LOCK();
      *(int *)local_208.field1 = *(int *)local_208.field1 + -1;
      local_31 = *(int *)local_208.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3b51;
    }
    iVar1 = *(int *)(local_208.field1 + 0xc);
    if (iVar1 != *(int *)(local_208.field1 + 8)) {
      lVar8 = (long)*(int *)(local_208.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_208.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a3b30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a3b30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a3b51:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_228,"CVmEdSmartSelectDialog","getShowAppIconsInDockCheckBoxValue",0);
  QVariant::QVariant(&local_220,&local_228);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_228.field0_0x0 != -1) {
    if (*(int *)local_228.field0_0x0 != 0) {
      LOCK();
      *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
      local_31 = *(int *)local_228.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3be1;
    }
    QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
  }
LAB_1004a3be1:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_240,"CVmEdSmartSelectDialog","setShowAppIconsInDockCheckBoxValue",0);
  QVariant::QVariant(&local_238,&local_240);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_238);
  if (*(int *)local_240.field0_0x0 != -1) {
    if (*(int *)local_240.field0_0x0 != 0) {
      LOCK();
      *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
      local_31 = *(int *)local_240.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3c71;
    }
    QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
  }
LAB_1004a3c71:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_248,"CVmEdSmartSelectDialog",
             "Show Windows notification area in Mac menu bar",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3cdb;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_1004a3cdb:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_260.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_268,"CVmEdSmartSelectDialog","VmConfig",0);
  FUN_1000341d0(&local_260,&local_268);
  QVariant::QVariant(&local_258,(QStringList *)&local_260.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_258);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3d86;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1004a3d86:
  AVar5 = local_260;
  if (*(int *)local_260.field1 != -1) {
    if (*(int *)local_260.field1 != 0) {
      LOCK();
      *(int *)local_260.field1 = *(int *)local_260.field1 + -1;
      local_31 = *(int *)local_260.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3e11;
    }
    iVar1 = *(int *)(local_260.field1 + 0xc);
    if (iVar1 != *(int *)(local_260.field1 + 8)) {
      lVar8 = (long)*(int *)(local_260.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_260.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a3df0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a3df0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a3e11:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_280.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_288,"CVmEdSmartSelectDialog",
             "Settings.Tools.Coherence.ShowWinSystrayInMacMenu",0);
  FUN_1000341d0(&local_280,&local_288);
  QVariant::QVariant(&local_278,(QStringList *)&local_280.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_278);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3ebc;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1004a3ebc:
  AVar5 = local_280;
  if (*(int *)local_280.field1 != -1) {
    if (*(int *)local_280.field1 != 0) {
      LOCK();
      *(int *)local_280.field1 = *(int *)local_280.field1 + -1;
      local_31 = *(int *)local_280.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3f51;
    }
    iVar1 = *(int *)(local_280.field1 + 0xc);
    if (iVar1 != *(int *)(local_280.field1 + 8)) {
      lVar8 = (long)*(int *)(local_280.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_280.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a3f30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a3f30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a3f51:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_290,"CVmEdSmartSelectDialog","Share Mac applications with Windows",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a3fbb;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_1004a3fbb:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_2a8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_2b0,"CVmEdSmartSelectDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004a4066;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_1004a4066:
  AVar5 = local_2a8;
  if (*(int *)local_2a8.field1 != -1) {
    if (*(int *)local_2a8.field1 != 0) {
      LOCK();
      *(int *)local_2a8.field1 = *(int *)local_2a8.field1 + -1;
      local_31 = *(int *)local_2a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a40f1;
    }
    iVar1 = *(int *)(local_2a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2a8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_2a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_2a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a40d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a40d0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a40f1:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_2c8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_2d0,"CVmEdSmartSelectDialog",
             "Settings.Tools.SharedApplications.FromMacToWin",0);
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
      if ((bool)local_31) goto LAB_1004a419c;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_1004a419c:
  AVar5 = local_2c8;
  if (*(int *)local_2c8.field1 != -1) {
    if (*(int *)local_2c8.field1 != 0) {
      LOCK();
      *(int *)local_2c8.field1 = *(int *)local_2c8.field1 + -1;
      local_31 = *(int *)local_2c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a4231;
    }
    iVar1 = *(int *)(local_2c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2c8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_2c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_2c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a4210:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a4210;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a4231:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_2d8,"CVmEdSmartSelectDialog","Show Windows applications folder in Dock",
             0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a429b;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1004a429b:
  pcVar3 = *(char **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_2f0,"CVmEdSmartSelectDialog",
             "Show @GUEST_TYPE@ applications folder in Dock",0);
  QVariant::QVariant(&local_2e8,&local_2f0);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_2e8);
  if (*(int *)local_2f0.field0_0x0 != -1) {
    if (*(int *)local_2f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2f0.field0_0x0 = *(int *)local_2f0.field0_0x0 + -1;
      local_31 = *(int *)local_2f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a432b;
    }
    QArrayData::deallocate((QArrayData *)local_2f0.field0_0x0,2,8);
  }
LAB_1004a432b:
  pcVar3 = *(char **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_308,"CVmEdSmartSelectDialog",
             "Show guest applications folder in Start menu",0);
  QVariant::QVariant(&local_300,&local_308);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinText");
  QVariant::~QVariant(&local_300);
  if (*(int *)local_308.field0_0x0 != -1) {
    if (*(int *)local_308.field0_0x0 != 0) {
      LOCK();
      *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
      local_31 = *(int *)local_308.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a43bb;
    }
    QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
  }
LAB_1004a43bb:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_320.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_328,"CVmEdSmartSelectDialog","VmConfig",0);
  FUN_1000341d0(&local_320,&local_328);
  QVariant::QVariant(&local_318,(QStringList *)&local_320.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_318);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_31 = *(int *)local_328 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a4466;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_1004a4466:
  AVar5 = local_320;
  if (*(int *)local_320.field1 != -1) {
    if (*(int *)local_320.field1 != 0) {
      LOCK();
      *(int *)local_320.field1 = *(int *)local_320.field1 + -1;
      local_31 = *(int *)local_320.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a44f1;
    }
    iVar1 = *(int *)(local_320.field1 + 0xc);
    if (iVar1 != *(int *)(local_320.field1 + 8)) {
      lVar8 = (long)*(int *)(local_320.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_320.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a44d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a44d0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004a44f1:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_340.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_348,"CVmEdSmartSelectDialog",
             "Settings.Tools.SharedApplications.ShowWindowsAppInDock",0);
  FUN_1000341d0(&local_340,&local_348);
  QVariant::QVariant(&local_338,(QStringList *)&local_340.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_338);
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_31 = *(int *)local_348 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a459c;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_1004a459c:
  AVar5 = local_340;
  if (*(int *)local_340.field1 != -1) {
    if (*(int *)local_340.field1 != 0) {
      LOCK();
      *(int *)local_340.field1 = *(int *)local_340.field1 + -1;
      UNLOCK();
      if (*(int *)local_340.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_340.field1 + 0xc);
    if (iVar1 != *(int *)(local_340.field1 + 8)) {
      lVar8 = (long)*(int *)(local_340.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_340.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004a4610:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004a4610;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
  return;
}

