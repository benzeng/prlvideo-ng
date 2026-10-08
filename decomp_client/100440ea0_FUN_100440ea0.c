
void FUN_100440ea0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_190;
  AnonymousUnion0 local_188;
  QVariant local_180;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  AnonymousUnion0 local_118;
  QVariant local_110;
  QArrayData *local_100;
  AnonymousUnion0 local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  AnonymousUnion0 local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  AnonymousUnion0 local_b0;
  QVariant local_a8;
  QArrayData *local_98;
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
  
  QCoreApplication::translate((char *)&local_40,"CVmEdSmartGuardDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100440f17;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100440f17:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdSmartGuardDialog","Optimize for Time Machine",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100440f78;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100440f78:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x10);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_68,"CVmEdSmartGuardDialog","Settings.Autoprotect.Schema",0);
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044100c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10044100c:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441091;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100441070:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100441070;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100441091:
  pcVar3 = *(char **)(param_1 + 0x10);
  local_80.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_88,"CVmEdSmartGuardDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10044111e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10044111e:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004411b1;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100441190:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100441190;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004411b1:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_90,"CVmEdSmartGuardDialog","Take a Snapshot Every:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044121b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10044121b:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_98,"CVmEdSmartGuardDialog"," hours",0);
  QSpinBox::setSuffix(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441285;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100441285:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_b0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_b8,"CVmEdSmartGuardDialog","VmConfig",0);
  FUN_1000341d0(&local_b0,&local_b8);
  QVariant::QVariant(&local_a8,(QStringList *)&local_b0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441330;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100441330:
  AVar5 = local_b0;
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_31 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004413c1;
    }
    iVar1 = *(int *)(local_b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_b0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004413a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004413a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004413c1:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_d0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdSmartGuardDialog","Settings.Autoprotect.Period",0);
  FUN_1000341d0(&local_d0,&local_d8);
  QVariant::QVariant(&local_c8,(QStringList *)&local_d0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044146c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10044146c:
  AVar5 = local_d0;
  if (*(int *)local_d0.field1 != -1) {
    if (*(int *)local_d0.field1 != 0) {
      LOCK();
      *(int *)local_d0.field1 = *(int *)local_d0.field1 + -1;
      local_31 = *(int *)local_d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441501;
    }
    iVar1 = *(int *)(local_d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_d0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004414e0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004414e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100441501:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_e0,"CVmEdSmartGuardDialog","Snapshots to Keep:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044156b;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10044156b:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_f8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_100,"CVmEdSmartGuardDialog","VmConfig",0);
  FUN_1000341d0(&local_f8,&local_100);
  QVariant::QVariant(&local_f0,(QStringList *)&local_f8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441616;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100441616:
  AVar5 = local_f8;
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004416a1;
    }
    iVar1 = *(int *)(local_f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_f8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100441680:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100441680;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004416a1:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_118.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_120,"CVmEdSmartGuardDialog","Settings.Autoprotect.TotalSnapshots",0);
  FUN_1000341d0(&local_118,&local_120);
  QVariant::QVariant(&local_110,(QStringList *)&local_118.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044174c;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10044174c:
  AVar5 = local_118;
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_31 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004417e1;
    }
    iVar1 = *(int *)(local_118.field1 + 0xc);
    if (iVar1 != *(int *)(local_118.field1 + 8)) {
      lVar8 = (long)*(int *)(local_118.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_118.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004417c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004417c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004417e1:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_128,"CVmEdSmartGuardDialog",
             "You need to have at least %1 of free disk space to use this feature.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044184b;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10044184b:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_130,"CVmEdSmartGuardDialog","You Can Restore:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004418b5;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004418b5:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_138,"CVmEdSmartGuardDialog","%1 latest hourly snapshots",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044191f;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10044191f:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_140,"CVmEdSmartGuardDialog","%1 latest daily snapshots",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441989;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100441989:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_148,"CVmEdSmartGuardDialog","%1 latest weekly snapshots",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004419f3;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004419f3:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_150,"CVmEdSmartGuardDialog","Notify me before snapshot creation",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441a5d;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100441a5d:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_168.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_170,"CVmEdSmartGuardDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100441b08;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100441b08:
  AVar5 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100441ba1;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar8 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100441b80:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100441b80;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100441ba1:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_188.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_190,"CVmEdSmartGuardDialog","Settings.Autoprotect.NotifyBeforeCreation",
             0);
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
      if ((bool)local_31) goto LAB_100441c4c;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100441c4c:
  AVar5 = local_188;
  if (*(int *)local_188.field1 != -1) {
    if (*(int *)local_188.field1 != 0) {
      LOCK();
      *(int *)local_188.field1 = *(int *)local_188.field1 + -1;
      UNLOCK();
      if (*(int *)local_188.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_188.field1 + 0xc);
    if (iVar1 != *(int *)(local_188.field1 + 8)) {
      lVar8 = (long)*(int *)(local_188.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_188.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100441cc0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100441cc0;
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

