
void FUN_100438100(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  long lVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  AnonymousUnion0 local_2b0;
  QVariant local_2a8;
  QArrayData *local_298;
  AnonymousUnion0 local_290;
  QVariant local_288;
  QArrayData *local_278;
  QArrayData *local_270;
  AnonymousUnion0 local_268;
  QVariant local_260;
  QArrayData *local_250;
  AnonymousUnion0 local_248;
  QVariant local_240;
  QArrayData *local_230;
  QArrayData *local_228;
  AnonymousUnion0 local_220;
  QVariant local_218;
  QArrayData *local_208;
  AnonymousUnion0 local_200;
  QVariant local_1f8;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  AnonymousUnion0 local_1d8;
  QVariant local_1d0;
  QArrayData *local_1c0;
  AnonymousUnion0 local_1b8;
  QVariant local_1b0;
  QString local_1a0;
  QVariant local_198;
  QString local_188;
  QVariant local_180;
  QArrayData *local_170;
  QArrayData *local_168;
  AnonymousUnion0 local_160;
  QVariant local_158;
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QVariant local_138;
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
  QString local_90;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438161;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100438161:
  pQVar2 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdSharedProfileDialog",
             "Map these Mac user folders to @GUEST_TYPE@",0);
  QGroupBox::setTitle(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004381c2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004381c2:
  pcVar3 = *(char **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdSharedProfileDialog",
             "Map these Mac user folders to @GUEST_TYPE@",0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438240;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100438240:
  pcVar3 = *(char **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_78,"CVmEdSharedProfileDialog",
             "Map these user folders to the virtual machine",0);
  QVariant::QVariant(&local_70,&local_78);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinText");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004382be;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1004382be:
  pcVar3 = *(char **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdSharedProfileDialog",
             "Map these user folders to the virtual machine",0);
  QVariant::QVariant(&local_88,&local_90);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_LinText");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438345;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100438345:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_98,"CVmEdSharedProfileDialog","Desktop",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004383af;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004383af:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x28);
  local_b0.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_b8,"CVmEdSharedProfileDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100438461;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100438461:
  AVar5 = local_b0;
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_31 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438501;
    }
    iVar1 = *(int *)(local_b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_b0.field1 + 8)) {
      lVar6 = (long)*(int *)(local_b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_1004384e0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_1004384e0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100438501:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_d0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdSharedProfileDialog","Settings.Tools.SharedProfile.UseDesktop",
             0);
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
      if ((bool)local_31) goto LAB_1004385ac;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004385ac:
  AVar5 = local_d0;
  if (*(int *)local_d0.field1 != -1) {
    if (*(int *)local_d0.field1 != 0) {
      LOCK();
      *(int *)local_d0.field1 = *(int *)local_d0.field1 + -1;
      local_31 = *(int *)local_d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438641;
    }
    iVar1 = *(int *)(local_d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_d0.field1 + 8)) {
      lVar6 = (long)*(int *)(local_d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100438620:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100438620;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100438641:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_e0,"CVmEdSharedProfileDialog","Music",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004386ab;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004386ab:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_f8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_100,"CVmEdSharedProfileDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100438756;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100438756:
  AVar5 = local_f8;
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004387e1;
    }
    iVar1 = *(int *)(local_f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_f8.field1 + 8)) {
      lVar6 = (long)*(int *)(local_f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_1004387c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_1004387c0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004387e1:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_118.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_120,"CVmEdSharedProfileDialog","Settings.Tools.SharedProfile.UseMusic",0
            );
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
      if ((bool)local_31) goto LAB_10043888c;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10043888c:
  AVar5 = local_118;
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_31 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438921;
    }
    iVar1 = *(int *)(local_118.field1 + 0xc);
    if (iVar1 != *(int *)(local_118.field1 + 8)) {
      lVar6 = (long)*(int *)(local_118.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_118.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100438900:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100438900;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100438921:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_128,"CVmEdSharedProfileDialog","Documents",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043898b;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10043898b:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_140.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_148,"CVmEdSharedProfileDialog","VmConfig",0);
  FUN_1000341d0(&local_140,&local_148);
  QVariant::QVariant(&local_138,(QStringList *)&local_140.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_138);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438a36;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100438a36:
  AVar5 = local_140;
  if (*(int *)local_140.field1 != -1) {
    if (*(int *)local_140.field1 != 0) {
      LOCK();
      *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
      local_31 = *(int *)local_140.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438ac1;
    }
    iVar1 = *(int *)(local_140.field1 + 0xc);
    if (iVar1 != *(int *)(local_140.field1 + 8)) {
      lVar6 = (long)*(int *)(local_140.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_140.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100438aa0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100438aa0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100438ac1:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_160.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_168,"CVmEdSharedProfileDialog",
             "Settings.Tools.SharedProfile.UseDocuments",0);
  FUN_1000341d0(&local_160,&local_168);
  QVariant::QVariant(&local_158,(QStringList *)&local_160.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_158);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438b6c;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100438b6c:
  AVar5 = local_160;
  if (*(int *)local_160.field1 != -1) {
    if (*(int *)local_160.field1 != 0) {
      LOCK();
      *(int *)local_160.field1 = *(int *)local_160.field1 + -1;
      local_31 = *(int *)local_160.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438c01;
    }
    iVar1 = *(int *)(local_160.field1 + 0xc);
    if (iVar1 != *(int *)(local_160.field1 + 8)) {
      lVar6 = (long)*(int *)(local_160.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_160.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100438be0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100438be0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100438c01:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_170,"CVmEdSharedProfileDialog","Movies",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438c6b;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100438c6b:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_188,"CVmEdSharedProfileDialog","Movies",0);
  QVariant::QVariant(&local_180,&local_188);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438cfb;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100438cfb:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_1a0,"CVmEdSharedProfileDialog","Videos",0);
  QVariant::QVariant(&local_198,&local_1a0);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinLinText");
  QVariant::~QVariant(&local_198);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_31 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438d8b;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_100438d8b:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_1b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1c0,"CVmEdSharedProfileDialog","VmConfig",0);
  FUN_1000341d0(&local_1b8,&local_1c0);
  QVariant::QVariant(&local_1b0,(QStringList *)&local_1b8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438e36;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100438e36:
  AVar5 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_31 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438ec1;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar6 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100438ea0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100438ea0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100438ec1:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_1d8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_1e0,"CVmEdSharedProfileDialog","Settings.Tools.SharedProfile.UseMovies",
             0);
  FUN_1000341d0(&local_1d8,&local_1e0);
  QVariant::QVariant(&local_1d0,(QStringList *)&local_1d8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100438f6c;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100438f6c:
  AVar5 = local_1d8;
  if (*(int *)local_1d8.field1 != -1) {
    if (*(int *)local_1d8.field1 != 0) {
      LOCK();
      *(int *)local_1d8.field1 = *(int *)local_1d8.field1 + -1;
      local_31 = *(int *)local_1d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100439001;
    }
    iVar1 = *(int *)(local_1d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1d8.field1 + 8)) {
      lVar6 = (long)*(int *)(local_1d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100438fe0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100438fe0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100439001:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_1e8,"CVmEdSharedProfileDialog","Pictures",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043906b;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_10043906b:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_200.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_208,"CVmEdSharedProfileDialog","VmConfig",0);
  FUN_1000341d0(&local_200,&local_208);
  QVariant::QVariant(&local_1f8,(QStringList *)&local_200.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1f8);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100439116;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100439116:
  AVar5 = local_200;
  if (*(int *)local_200.field1 != -1) {
    if (*(int *)local_200.field1 != 0) {
      LOCK();
      *(int *)local_200.field1 = *(int *)local_200.field1 + -1;
      local_31 = *(int *)local_200.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004391a1;
    }
    iVar1 = *(int *)(local_200.field1 + 0xc);
    if (iVar1 != *(int *)(local_200.field1 + 8)) {
      lVar6 = (long)*(int *)(local_200.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_200.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100439180:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100439180;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004391a1:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_220.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_228,"CVmEdSharedProfileDialog",
             "Settings.Tools.SharedProfile.UsePictures",0);
  FUN_1000341d0(&local_220,&local_228);
  QVariant::QVariant(&local_218,(QStringList *)&local_220.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_218);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043924c;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_10043924c:
  AVar5 = local_220;
  if (*(int *)local_220.field1 != -1) {
    if (*(int *)local_220.field1 != 0) {
      LOCK();
      *(int *)local_220.field1 = *(int *)local_220.field1 + -1;
      local_31 = *(int *)local_220.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004392e1;
    }
    iVar1 = *(int *)(local_220.field1 + 0xc);
    if (iVar1 != *(int *)(local_220.field1 + 8)) {
      lVar6 = (long)*(int *)(local_220.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_220.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_1004392c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_1004392c0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004392e1:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_230,"CVmEdSharedProfileDialog","Downloads",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043934b;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_10043934b:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_248.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_250,"CVmEdSharedProfileDialog","VmConfig",0);
  FUN_1000341d0(&local_248,&local_250);
  QVariant::QVariant(&local_240,(QStringList *)&local_248.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_240);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004393f6;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_1004393f6:
  AVar5 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100439481;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar6 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100439460:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100439460;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100439481:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_268.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_270,"CVmEdSharedProfileDialog",
             "Settings.Tools.SharedProfile.UseDownloads",0);
  FUN_1000341d0(&local_268,&local_270);
  QVariant::QVariant(&local_260,(QStringList *)&local_268.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_260);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043952c;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_10043952c:
  AVar5 = local_268;
  if (*(int *)local_268.field1 != -1) {
    if (*(int *)local_268.field1 != 0) {
      LOCK();
      *(int *)local_268.field1 = *(int *)local_268.field1 + -1;
      local_31 = *(int *)local_268.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004395c1;
    }
    iVar1 = *(int *)(local_268.field1 + 0xc);
    if (iVar1 != *(int *)(local_268.field1 + 8)) {
      lVar6 = (long)*(int *)(local_268.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_268.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_1004395a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_1004395a0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004395c1:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_278,"CVmEdSharedProfileDialog","Merge Recycle Bin with Trash",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043962b;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_10043962b:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_290.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_298,"CVmEdSharedProfileDialog","VmConfig",0);
  FUN_1000341d0(&local_290,&local_298);
  QVariant::QVariant(&local_288,(QStringList *)&local_290.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_288);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004396d6;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_1004396d6:
  AVar5 = local_290;
  if (*(int *)local_290.field1 != -1) {
    if (*(int *)local_290.field1 != 0) {
      LOCK();
      *(int *)local_290.field1 = *(int *)local_290.field1 + -1;
      local_31 = *(int *)local_290.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100439761;
    }
    iVar1 = *(int *)(local_290.field1 + 0xc);
    if (iVar1 != *(int *)(local_290.field1 + 8)) {
      lVar6 = (long)*(int *)(local_290.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_290.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100439740:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100439740;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100439761:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_2b0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_2b8,"CVmEdSharedProfileDialog",
             "Settings.Tools.SharedProfile.UseTrashBin",0);
  FUN_1000341d0(&local_2b0,&local_2b8);
  QVariant::QVariant(&local_2a8,(QStringList *)&local_2b0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_2a8);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043980c;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_10043980c:
  AVar5 = local_2b0;
  puVar4 = PTR_shared_null_1021e1288;
  if (*(int *)local_2b0.field1 != -1) {
    if (*(int *)local_2b0.field1 != 0) {
      LOCK();
      *(int *)local_2b0.field1 = *(int *)local_2b0.field1 + -1;
      local_31 = *(int *)local_2b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004398a1;
    }
    iVar1 = *(int *)(local_2b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2b0.field1 + 8)) {
      lVar6 = (long)*(int *)(local_2b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_2b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100439880:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100439880;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004398a1:
  pQVar2 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate
            ((char *)&local_2c0,"CVmEdSharedProfileDialog",
             s_This_active_corner_setting_confl_101df4522,0);
  QWidget::setToolTip(pQVar2);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043990e;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_10043990e:
  local_2c8 = (QArrayData *)puVar4;
  QLabel::setText(*(QString **)(param_1 + 0x98));
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043995e;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_10043995e:
  pQVar2 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate
            ((char *)&local_2d0,"CVmEdSharedProfileDialog",
             "Works only if <b>Documents</b> is selected above.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      UNLOCK();
      if (*(int *)local_2d0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
  return;
}

