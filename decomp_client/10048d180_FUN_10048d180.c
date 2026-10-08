
void FUN_10048d180(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  QString local_408;
  QVariant local_400;
  QString local_3f0;
  QVariant local_3e8;
  QArrayData *local_3d8;
  AnonymousUnion0 local_3d0;
  QVariant local_3c8;
  QArrayData *local_3b8;
  AnonymousUnion0 local_3b0;
  QVariant local_3a8;
  QArrayData *local_398;
  QArrayData *local_390;
  AnonymousUnion0 local_388;
  QVariant local_380;
  QArrayData *local_370;
  AnonymousUnion0 local_368;
  QVariant local_360;
  QString local_350;
  QVariant local_348;
  QString local_338;
  QVariant local_330;
  QString local_320;
  QVariant local_318;
  QArrayData *local_308;
  QArrayData *local_300;
  QString local_2f8;
  QVariant local_2f0;
  QString local_2e0;
  QVariant local_2d8;
  QArrayData *local_2c8;
  AnonymousUnion0 local_2c0;
  QVariant local_2b8;
  QArrayData *local_2a8;
  AnonymousUnion0 local_2a0;
  QVariant local_298;
  QArrayData *local_288;
  QString local_280;
  QVariant local_278;
  QString local_268;
  QVariant local_260;
  QArrayData *local_250;
  AnonymousUnion0 local_248;
  QVariant local_240;
  QArrayData *local_230;
  AnonymousUnion0 local_228;
  QVariant local_220;
  QArrayData *local_210;
  QString local_208;
  QVariant local_200;
  QString local_1f0;
  QVariant local_1e8;
  QString local_1d8;
  QVariant local_1d0;
  QArrayData *local_1c0;
  AnonymousUnion0 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  AnonymousUnion0 local_198;
  QVariant local_190;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  Data *local_168;
  QString local_160;
  QVariant local_158;
  QString local_148;
  QVariant local_140;
  QArrayData *local_130;
  AnonymousUnion0 local_128;
  QVariant local_120;
  QArrayData *local_110;
  AnonymousUnion0 local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  AnonymousUnion0 local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  AnonymousUnion0 local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdSecuritySettingsDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d1f7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10048d1f7:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_48,"CVmEdSecuritySettingsDialog","Change Date...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d258;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10048d258:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_50,"CVmEdSecuritySettingsDialog","Change Password...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d2b9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10048d2b9:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_58,"CVmEdSecuritySettingsDialog","Turn On...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d31a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10048d31a:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdSecuritySettingsDialog","Change Password...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d37b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10048d37b:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_68,"CVmEdSecuritySettingsDialog","Turn On...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d3dc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10048d3dc:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_70,"CVmEdSecuritySettingsDialog","Change Password...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d43d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10048d43d:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_78,"CVmEdSecuritySettingsDialog","Always lock Windows on suspend",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d4a1;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10048d4a1:
  puVar5 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x88);
  local_90.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_98,"CVmEdSecuritySettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_90,&local_98);
  QVariant::QVariant(&local_88,(QStringList *)&local_90.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d54d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10048d54d:
  AVar6 = local_90;
  if (*(int *)local_90.field1 != -1) {
    if (*(int *)local_90.field1 != 0) {
      LOCK();
      *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
      local_31 = *(int *)local_90.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d5e1;
    }
    iVar1 = *(int *)(local_90.field1 + 0xc);
    if (iVar1 != *(int *)(local_90.field1 + 8)) {
      lVar10 = (long)*(int *)(local_90.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_90.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048d5c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048d5c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048d5e1:
  pcVar3 = *(char **)(param_1 + 0x88);
  local_b0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_b8,"CVmEdSecuritySettingsDialog","Settings.Tools.LockGuestOnSuspend",0);
  FUN_1000341d0(&local_b0,&local_b8);
  QVariant::QVariant(&local_a8,(QStringList *)&local_b0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d68f;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10048d68f:
  AVar6 = local_b0;
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_31 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d721;
    }
    iVar1 = *(int *)(local_b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_b0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048d700:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048d700;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048d721:
  pQVar2 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_c0,"CVmEdSecuritySettingsDialog","Restore Defaults",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d78e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10048d78e:
  pQVar2 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate((char *)&local_c8,"CVmEdSecuritySettingsDialog","Expiration Date:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d7fb;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10048d7fb:
  pQVar2 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate
            ((char *)&local_d0,"CVmEdSecuritySettingsDialog","Prevent changes to settings:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d868;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10048d868:
  pQVar2 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdSecuritySettingsDialog","Encrypt with password:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d8d5;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10048d8d5:
  pQVar2 = *(QString **)(param_1 + 200);
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdSecuritySettingsDialog",
             "Encryption is required for setting an expiration date.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d942;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10048d942:
  pQVar2 = *(QString **)(param_1 + 0xd8);
  QCoreApplication::translate
            ((char *)&local_e8,"CVmEdSecuritySettingsDialog",
             "Require Mac account administrator password to:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d9af;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10048d9af:
  pQVar2 = *(QString **)(param_1 + 0xe0);
  QCoreApplication::translate
            ((char *)&local_f0,"CVmEdSecuritySettingsDialog","Change virtual machine state",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048da1c;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10048da1c:
  pcVar3 = *(char **)(param_1 + 0xe0);
  local_108.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_110,"CVmEdSecuritySettingsDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10048daca;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10048daca:
  AVar6 = local_108;
  if (*(int *)local_108.field1 != -1) {
    if (*(int *)local_108.field1 != 0) {
      LOCK();
      *(int *)local_108.field1 = *(int *)local_108.field1 + -1;
      local_31 = *(int *)local_108.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048db61;
    }
    iVar1 = *(int *)(local_108.field1 + 0xc);
    if (iVar1 != *(int *)(local_108.field1 + 8)) {
      lVar10 = (long)*(int *)(local_108.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_108.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048db40:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048db40;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048db61:
  pcVar3 = *(char **)(param_1 + 0xe0);
  local_128.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_130,"CVmEdSecuritySettingsDialog",
             "Security.LockedOperationsList.LockedOperation",0);
  FUN_1000341d0(&local_128,&local_130);
  QVariant::QVariant(&local_120,(QStringList *)&local_128.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_120);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048dc0f;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10048dc0f:
  AVar6 = local_128;
  if (*(int *)local_128.field1 != -1) {
    if (*(int *)local_128.field1 != 0) {
      LOCK();
      *(int *)local_128.field1 = *(int *)local_128.field1 + -1;
      local_31 = *(int *)local_128.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048dca1;
    }
    iVar1 = *(int *)(local_128.field1 + 0xc);
    if (iVar1 != *(int *)(local_128.field1 + 8)) {
      lVar10 = (long)*(int *)(local_128.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_128.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048dc80:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048dc80;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048dca1:
  pcVar3 = *(char **)(param_1 + 0xe0);
  QCoreApplication::translate
            ((char *)&local_148,"CVmEdSecuritySettingsDialog","getLockedOperationValue",0);
  QVariant::QVariant(&local_140,&local_148);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_140);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048dd34;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_10048dd34:
  pcVar3 = *(char **)(param_1 + 0xe0);
  QCoreApplication::translate
            ((char *)&local_160,"CVmEdSecuritySettingsDialog","setLockedOperationValue",0);
  QVariant::QVariant(&local_158,&local_160);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_158);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ddc7;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_10048ddc7:
  QComboBox::clear();
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  local_168 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_170,"CVmEdSecuritySettingsDialog","Disable",0);
  FUN_1000341d0(&local_168,&local_170);
  QCoreApplication::translate((char *)&local_178,"CVmEdSecuritySettingsDialog","Discard changes",0);
  FUN_1000341d0(&local_168,&local_178);
  QCoreApplication::translate
            ((char *)&local_180,"CVmEdSecuritySettingsDialog","Ask me what to do",0);
  FUN_1000341d0(&local_168);
  QComboBox::insertItems((int)uVar4,(QStringList *)0x0);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048dec7;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10048dec7:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048defd;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10048defd:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048df33;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10048df33:
  pDVar7 = local_168;
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048dfc1;
    }
    iVar1 = *(int *)(local_168 + 0xc);
    if (iVar1 != *(int *)(local_168 + 8)) {
      lVar10 = (long)*(int *)(local_168 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_168 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_10048dfa0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_10048dfa0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_10048dfc1:
  pcVar3 = *(char **)(param_1 + 0xf8);
  local_198.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1a0,"CVmEdSecuritySettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_198,&local_1a0);
  QVariant::QVariant(&local_190,(QStringList *)&local_198.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e06f;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10048e06f:
  AVar6 = local_198;
  if (*(int *)local_198.field1 != -1) {
    if (*(int *)local_198.field1 != 0) {
      LOCK();
      *(int *)local_198.field1 = *(int *)local_198.field1 + -1;
      local_31 = *(int *)local_198.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e101;
    }
    iVar1 = *(int *)(local_198.field1 + 0xc);
    if (iVar1 != *(int *)(local_198.field1 + 8)) {
      lVar10 = (long)*(int *)(local_198.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_198.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048e0e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048e0e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048e101:
  pcVar3 = *(char **)(param_1 + 0xf8);
  local_1b8.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_1c0,"CVmEdSecuritySettingsDialog","Settings.Runtime.UndoDisks",0);
  FUN_1000341d0(&local_1b8,&local_1c0);
  QVariant::QVariant(&local_1b0,(QStringList *)&local_1b8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e1af;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10048e1af:
  AVar6 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_31 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e241;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048e220:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048e220;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048e241:
  pcVar3 = *(char **)(param_1 + 0xf8);
  QCoreApplication::translate
            ((char *)&local_1d8,"CVmEdSecuritySettingsDialog","initUndoDisksCombo",0);
  QVariant::QVariant(&local_1d0,&local_1d8);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_31 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e2d4;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_10048e2d4:
  pcVar3 = *(char **)(param_1 + 0xf8);
  QCoreApplication::translate
            ((char *)&local_1f0,"CVmEdSecuritySettingsDialog","getUndoDisksComboValue",0);
  QVariant::QVariant(&local_1e8,&local_1f0);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_31 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e367;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_10048e367:
  pcVar3 = *(char **)(param_1 + 0xf8);
  QCoreApplication::translate
            ((char *)&local_208,"CVmEdSecuritySettingsDialog","setUndoDisksComboValue",0);
  QVariant::QVariant(&local_200,&local_208);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_200);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_31 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e3fa;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_10048e3fa:
  pQVar2 = *(QString **)(param_1 + 0x108);
  QCoreApplication::translate
            ((char *)&local_210,"CVmEdSecuritySettingsDialog","Exit full screen mode",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e467;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10048e467:
  pcVar3 = *(char **)(param_1 + 0x108);
  local_228.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_230,"CVmEdSecuritySettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_228,&local_230);
  QVariant::QVariant(&local_220,(QStringList *)&local_228.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e515;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_10048e515:
  AVar6 = local_228;
  if (*(int *)local_228.field1 != -1) {
    if (*(int *)local_228.field1 != 0) {
      LOCK();
      *(int *)local_228.field1 = *(int *)local_228.field1 + -1;
      local_31 = *(int *)local_228.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e5a1;
    }
    iVar1 = *(int *)(local_228.field1 + 0xc);
    if (iVar1 != *(int *)(local_228.field1 + 8)) {
      lVar10 = (long)*(int *)(local_228.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_228.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048e580:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048e580;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048e5a1:
  pcVar3 = *(char **)(param_1 + 0x108);
  local_248.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_250,"CVmEdSecuritySettingsDialog",
             "Security.LockedOperationsList.LockedOperation",0);
  FUN_1000341d0(&local_248,&local_250);
  QVariant::QVariant(&local_240,(QStringList *)&local_248.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_240);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e64f;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_10048e64f:
  AVar6 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e6e1;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar10 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048e6c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048e6c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048e6e1:
  pcVar3 = *(char **)(param_1 + 0x108);
  QCoreApplication::translate
            ((char *)&local_268,"CVmEdSecuritySettingsDialog","getLockedOperationValue",0);
  QVariant::QVariant(&local_260,&local_268);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_260);
  if (*(int *)local_268.field0_0x0 != -1) {
    if (*(int *)local_268.field0_0x0 != 0) {
      LOCK();
      *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
      local_31 = *(int *)local_268.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e774;
    }
    QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
  }
LAB_10048e774:
  pcVar3 = *(char **)(param_1 + 0x108);
  QCoreApplication::translate
            ((char *)&local_280,"CVmEdSecuritySettingsDialog","setLockedOperationValue",0);
  QVariant::QVariant(&local_278,&local_280);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_278);
  if (*(int *)local_280.field0_0x0 != -1) {
    if (*(int *)local_280.field0_0x0 != 0) {
      LOCK();
      *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
      local_31 = *(int *)local_280.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e807;
    }
    QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
  }
LAB_10048e807:
  pQVar2 = *(QString **)(param_1 + 0x110);
  QCoreApplication::translate((char *)&local_288,"CVmEdSecuritySettingsDialog","Manage snapshots",0)
  ;
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e874;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_10048e874:
  pcVar3 = *(char **)(param_1 + 0x110);
  local_2a0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_2a8,"CVmEdSecuritySettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_2a0,&local_2a8);
  QVariant::QVariant(&local_298,(QStringList *)&local_2a0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_298);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_31 = *(int *)local_2a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e922;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_10048e922:
  AVar6 = local_2a0;
  if (*(int *)local_2a0.field1 != -1) {
    if (*(int *)local_2a0.field1 != 0) {
      LOCK();
      *(int *)local_2a0.field1 = *(int *)local_2a0.field1 + -1;
      local_31 = *(int *)local_2a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048e9b1;
    }
    iVar1 = *(int *)(local_2a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2a0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_2a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_2a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048e990:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048e990;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048e9b1:
  pcVar3 = *(char **)(param_1 + 0x110);
  local_2c0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_2c8,"CVmEdSecuritySettingsDialog",
             "Security.LockedOperationsList.LockedOperation",0);
  FUN_1000341d0(&local_2c0,&local_2c8);
  QVariant::QVariant(&local_2b8,(QStringList *)&local_2c0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_2b8);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ea5f;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_10048ea5f:
  AVar6 = local_2c0;
  if (*(int *)local_2c0.field1 != -1) {
    if (*(int *)local_2c0.field1 != 0) {
      LOCK();
      *(int *)local_2c0.field1 = *(int *)local_2c0.field1 + -1;
      local_31 = *(int *)local_2c0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048eaf1;
    }
    iVar1 = *(int *)(local_2c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2c0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_2c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_2c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048ead0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048ead0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048eaf1:
  pcVar3 = *(char **)(param_1 + 0x110);
  QCoreApplication::translate
            ((char *)&local_2e0,"CVmEdSecuritySettingsDialog","getLockedOperationValue",0);
  QVariant::QVariant(&local_2d8,&local_2e0);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_2d8);
  if (*(int *)local_2e0.field0_0x0 != -1) {
    if (*(int *)local_2e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
      local_31 = *(int *)local_2e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048eb84;
    }
    QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
  }
LAB_10048eb84:
  pcVar3 = *(char **)(param_1 + 0x110);
  QCoreApplication::translate
            ((char *)&local_2f8,"CVmEdSecuritySettingsDialog","setLockedOperationValue",0);
  QVariant::QVariant(&local_2f0,&local_2f8);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_2f0);
  if (*(int *)local_2f8.field0_0x0 != -1) {
    if (*(int *)local_2f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2f8.field0_0x0 = *(int *)local_2f8.field0_0x0 + -1;
      local_31 = *(int *)local_2f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ec17;
    }
    QArrayData::deallocate((QArrayData *)local_2f8.field0_0x0,2,8);
  }
LAB_10048ec17:
  pQVar2 = *(QString **)(param_1 + 0x118);
  QCoreApplication::translate((char *)&local_300,"CVmEdSecuritySettingsDialog","Rollback Mode:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ec84;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_10048ec84:
  pQVar2 = *(QString **)(param_1 + 0x128);
  QCoreApplication::translate
            ((char *)&local_308,"CVmEdSecuritySettingsDialog","Isolate Mac from Windows",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ecf1;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_10048ecf1:
  pcVar3 = *(char **)(param_1 + 0x128);
  QCoreApplication::translate
            ((char *)&local_320,"CVmEdSecuritySettingsDialog","Isolate @GUEST_TYPE@ from Mac",0);
  QVariant::QVariant(&local_318,&local_320);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacText");
  QVariant::~QVariant(&local_318);
  if (*(int *)local_320.field0_0x0 != -1) {
    if (*(int *)local_320.field0_0x0 != 0) {
      LOCK();
      *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
      local_31 = *(int *)local_320.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ed84;
    }
    QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
  }
LAB_10048ed84:
  pcVar3 = *(char **)(param_1 + 0x128);
  QCoreApplication::translate
            ((char *)&local_338,"CVmEdSecuritySettingsDialog","Isolate host from guest",0);
  QVariant::QVariant(&local_330,&local_338);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_WinLinText");
  QVariant::~QVariant(&local_330);
  if (*(int *)local_338.field0_0x0 != -1) {
    if (*(int *)local_338.field0_0x0 != 0) {
      LOCK();
      *(int *)local_338.field0_0x0 = *(int *)local_338.field0_0x0 + -1;
      local_31 = *(int *)local_338.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ee17;
    }
    QArrayData::deallocate((QArrayData *)local_338.field0_0x0,2,8);
  }
LAB_10048ee17:
  pcVar3 = *(char **)(param_1 + 0x128);
  QCoreApplication::translate
            ((char *)&local_350,"CVmEdSecuritySettingsDialog","Isolate Mac from virtual machine",0);
  QVariant::QVariant(&local_348,&local_350);
  QObject::setProperty(pcVar3,(QVariant *)"DynProp_MacTextGeneric");
  QVariant::~QVariant(&local_348);
  if (*(int *)local_350.field0_0x0 != -1) {
    if (*(int *)local_350.field0_0x0 != 0) {
      LOCK();
      *(int *)local_350.field0_0x0 = *(int *)local_350.field0_0x0 + -1;
      local_31 = *(int *)local_350.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048eeaa;
    }
    QArrayData::deallocate((QArrayData *)local_350.field0_0x0,2,8);
  }
LAB_10048eeaa:
  pcVar3 = *(char **)(param_1 + 0x128);
  local_368.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_370,"CVmEdSecuritySettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_368,&local_370);
  QVariant::QVariant(&local_360,(QStringList *)&local_368.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_360);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048ef58;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_10048ef58:
  AVar6 = local_368;
  if (*(int *)local_368.field1 != -1) {
    if (*(int *)local_368.field1 != 0) {
      LOCK();
      *(int *)local_368.field1 = *(int *)local_368.field1 + -1;
      local_31 = *(int *)local_368.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048eff1;
    }
    iVar1 = *(int *)(local_368.field1 + 0xc);
    if (iVar1 != *(int *)(local_368.field1 + 8)) {
      lVar10 = (long)*(int *)(local_368.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_368.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048efd0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048efd0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048eff1:
  pcVar3 = *(char **)(param_1 + 0x128);
  local_388.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_390,"CVmEdSecuritySettingsDialog","Settings.Tools.IsolatedVm",0);
  FUN_1000341d0(&local_388,&local_390);
  QVariant::QVariant(&local_380,(QStringList *)&local_388.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_380);
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_31 = *(int *)local_390 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f09f;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_10048f09f:
  AVar6 = local_388;
  if (*(int *)local_388.field1 != -1) {
    if (*(int *)local_388.field1 != 0) {
      LOCK();
      *(int *)local_388.field1 = *(int *)local_388.field1 + -1;
      local_31 = *(int *)local_388.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f131;
    }
    iVar1 = *(int *)(local_388.field1 + 0xc);
    if (iVar1 != *(int *)(local_388.field1 + 8)) {
      lVar10 = (long)*(int *)(local_388.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_388.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048f110:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048f110;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048f131:
  pQVar2 = *(QString **)(param_1 + 0x130);
  QCoreApplication::translate
            ((char *)&local_398,"CVmEdSecuritySettingsDialog",
             "Allow changing guest OS password in Terminal",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_398 != -1) {
    if (*(int *)local_398 != 0) {
      LOCK();
      *(int *)local_398 = *(int *)local_398 + -1;
      local_31 = *(int *)local_398 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f19e;
    }
    QArrayData::deallocate(local_398,2,8);
  }
LAB_10048f19e:
  pcVar3 = *(char **)(param_1 + 0x130);
  local_3b0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_3b8,"CVmEdSecuritySettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_3b0,&local_3b8);
  QVariant::QVariant(&local_3a8,(QStringList *)&local_3b0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_3a8);
  if (*(int *)local_3b8 != -1) {
    if (*(int *)local_3b8 != 0) {
      LOCK();
      *(int *)local_3b8 = *(int *)local_3b8 + -1;
      local_31 = *(int *)local_3b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f24c;
    }
    QArrayData::deallocate(local_3b8,2,8);
  }
LAB_10048f24c:
  AVar6 = local_3b0;
  if (*(int *)local_3b0.field1 != -1) {
    if (*(int *)local_3b0.field1 != 0) {
      LOCK();
      *(int *)local_3b0.field1 = *(int *)local_3b0.field1 + -1;
      local_31 = *(int *)local_3b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f2e1;
    }
    iVar1 = *(int *)(local_3b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_3b0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_3b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_3b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048f2c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048f2c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048f2e1:
  pcVar3 = *(char **)(param_1 + 0x130);
  local_3d0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_3d8,"CVmEdSecuritySettingsDialog",
             "Security.LockedOperationsList.LockedOperation",0);
  FUN_1000341d0(&local_3d0,&local_3d8);
  QVariant::QVariant(&local_3c8,(QStringList *)&local_3d0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_3c8);
  if (*(int *)local_3d8 != -1) {
    if (*(int *)local_3d8 != 0) {
      LOCK();
      *(int *)local_3d8 = *(int *)local_3d8 + -1;
      local_31 = *(int *)local_3d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f38f;
    }
    QArrayData::deallocate(local_3d8,2,8);
  }
LAB_10048f38f:
  AVar6 = local_3d0;
  if (*(int *)local_3d0.field1 != -1) {
    if (*(int *)local_3d0.field1 != 0) {
      LOCK();
      *(int *)local_3d0.field1 = *(int *)local_3d0.field1 + -1;
      local_31 = *(int *)local_3d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f421;
    }
    iVar1 = *(int *)(local_3d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_3d0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_3d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_3d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10048f400:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10048f400;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10048f421:
  pcVar3 = *(char **)(param_1 + 0x130);
  QCoreApplication::translate
            ((char *)&local_3f0,"CVmEdSecuritySettingsDialog","getLockedOperationValue",0);
  QVariant::QVariant(&local_3e8,&local_3f0);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_3e8);
  if (*(int *)local_3f0.field0_0x0 != -1) {
    if (*(int *)local_3f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3f0.field0_0x0 = *(int *)local_3f0.field0_0x0 + -1;
      local_31 = *(int *)local_3f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f4b4;
    }
    QArrayData::deallocate((QArrayData *)local_3f0.field0_0x0,2,8);
  }
LAB_10048f4b4:
  pcVar3 = *(char **)(param_1 + 0x130);
  QCoreApplication::translate
            ((char *)&local_408,"CVmEdSecuritySettingsDialog","setLockedOperationValue",0);
  QVariant::QVariant(&local_400,&local_408);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_400);
  if (*(int *)local_408.field0_0x0 != -1) {
    if (*(int *)local_408.field0_0x0 != 0) {
      LOCK();
      *(int *)local_408.field0_0x0 = *(int *)local_408.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_408.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_408.field0_0x0,2,8);
  }
  return;
}

