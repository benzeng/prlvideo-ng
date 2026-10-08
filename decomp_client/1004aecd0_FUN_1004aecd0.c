
void FUN_1004aecd0(long param_1,QString *param_2)

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
  QArrayData *local_340;
  QArrayData *local_338;
  QString local_330;
  QVariant local_328;
  QArrayData *local_318;
  AnonymousUnion0 local_310;
  QVariant local_308;
  QArrayData *local_2f8;
  AnonymousUnion0 local_2f0;
  QVariant local_2e8;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  Data *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  AnonymousUnion0 local_2a8;
  QVariant local_2a0;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  Data *local_278;
  QArrayData *local_270;
  QString local_268;
  QVariant local_260;
  QArrayData *local_250;
  AnonymousUnion0 local_248;
  QVariant local_240;
  QArrayData *local_230;
  AnonymousUnion0 local_228;
  QVariant local_220;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  Data *local_1f8;
  QArrayData *local_1f0;
  QString local_1e8;
  QVariant local_1e0;
  QString local_1d0;
  QVariant local_1c8;
  QString local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  QArrayData *local_198;
  AnonymousUnion0 local_190;
  QVariant local_188;
  QArrayData *local_178;
  AnonymousUnion0 local_170;
  QVariant local_168;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  Data *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  AnonymousUnion0 local_118;
  QVariant local_110;
  QArrayData *local_100;
  AnonymousUnion0 local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  AnonymousUnion0 local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  AnonymousUnion0 local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdStartupAndShutdownDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aed47;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004aed47:
  pQVar2 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdStartupAndShutdownDialog","Start up and shut down manually",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aeda8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004aeda8:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_50,"CVmEdStartupAndShutdownDialog","Custom",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aee09;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004aee09:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_58,"CVmEdStartupAndShutdownDialog","Start Automatically:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aee6a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004aee6a:
  QComboBox::clear();
  puVar5 = PTR_shared_null_1021e15e8;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_68,"CVmEdStartupAndShutdownDialog","Never",0);
  FUN_1000341d0(&local_60,&local_68);
  QCoreApplication::translate
            ((char *)&local_70,"CVmEdStartupAndShutdownDialog","When window opens",0);
  FUN_1000341d0(&local_60,&local_70);
  QCoreApplication::translate((char *)&local_78,"CVmEdStartupAndShutdownDialog","When %1 starts",0);
  FUN_1000341d0(&local_60);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aef44;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004aef44:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aef74;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004aef74:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004aefa4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004aefa4:
  pDVar8 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af031;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar10 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004af010:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004af010;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004af031:
  pcVar4 = *(char **)(param_1 + 0x40);
  local_90.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_98,"CVmEdStartupAndShutdownDialog","VmConfig",0);
  FUN_1000341d0(&local_90,&local_98);
  QVariant::QVariant(&local_88,(QStringList *)&local_90.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af0d3;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004af0d3:
  AVar6 = local_90;
  if (*(int *)local_90.field1 != -1) {
    if (*(int *)local_90.field1 != 0) {
      LOCK();
      *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
      local_31 = *(int *)local_90.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af161;
    }
    iVar1 = *(int *)(local_90.field1 + 0xc);
    if (iVar1 != *(int *)(local_90.field1 + 8)) {
      lVar10 = (long)*(int *)(local_90.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_90.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004af140:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004af140;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004af161:
  pcVar4 = *(char **)(param_1 + 0x40);
  local_b0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_b8,"CVmEdStartupAndShutdownDialog","Settings.Startup.AutoStart",0);
  FUN_1000341d0(&local_b0,&local_b8);
  QVariant::QVariant(&local_a8,(QStringList *)&local_b0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af20c;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004af20c:
  AVar6 = local_b0;
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_31 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af2a1;
    }
    iVar1 = *(int *)(local_b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_b0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004af280:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004af280;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004af2a1:
  pcVar4 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_d0,"CVmEdStartupAndShutdownDialog","initStartupModeCombo",0);
  QVariant::QVariant(&local_c8,&local_d0);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af331;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1004af331:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_d8,"CVmEdStartupAndShutdownDialog","Startup delay:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af39b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004af39b:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_e0,"CVmEdStartupAndShutdownDialog"," sec",0);
  QSpinBox::setSuffix(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af405;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004af405:
  pcVar4 = *(char **)(param_1 + 0x50);
  local_f8.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_100,"CVmEdStartupAndShutdownDialog","VmConfig",0);
  FUN_1000341d0(&local_f8,&local_100);
  QVariant::QVariant(&local_f0,(QStringList *)&local_f8.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af4b0;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004af4b0:
  AVar6 = local_f8;
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af541;
    }
    iVar1 = *(int *)(local_f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_f8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004af520:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004af520;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004af541:
  pcVar4 = *(char **)(param_1 + 0x50);
  local_118.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_120,"CVmEdStartupAndShutdownDialog","Settings.Startup.AutoStartDelay",0)
  ;
  FUN_1000341d0(&local_118,&local_120);
  QVariant::QVariant(&local_110,(QStringList *)&local_118.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af5ec;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004af5ec:
  AVar6 = local_118;
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_31 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af681;
    }
    iVar1 = *(int *)(local_118.field1 + 0xc);
    if (iVar1 != *(int *)(local_118.field1 + 8)) {
      lVar10 = (long)*(int *)(local_118.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_118.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004af660:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004af660;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004af681:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_128,"CVmEdStartupAndShutdownDialog","Startup View:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af6eb;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004af6eb:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  local_130 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_138,"CVmEdStartupAndShutdownDialog","Same as last time",0);
  FUN_1000341d0(&local_130,&local_138);
  QCoreApplication::translate((char *)&local_140,"CVmEdStartupAndShutdownDialog","Window",0);
  FUN_1000341d0(&local_130,&local_140);
  QCoreApplication::translate((char *)&local_148,"CVmEdStartupAndShutdownDialog","Full screen",0);
  FUN_1000341d0(&local_130,&local_148);
  QCoreApplication::translate((char *)&local_150,"CVmEdStartupAndShutdownDialog","Coherence",0);
  FUN_1000341d0(&local_130,&local_150);
  QCoreApplication::translate((char *)&local_158,"CVmEdStartupAndShutdownDialog","Modality",0);
  FUN_1000341d0(&local_130);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af84f;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004af84f:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af885;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004af885:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af8bb;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004af8bb:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af8f1;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004af8f1:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af927;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004af927:
  pDVar8 = local_130;
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004af9c1;
    }
    iVar1 = *(int *)(local_130 + 0xc);
    if (iVar1 != *(int *)(local_130 + 8)) {
      lVar10 = (long)*(int *)(local_130 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_130 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004af9a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004af9a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004af9c1:
  pcVar4 = *(char **)(param_1 + 0x60);
  local_170.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_178,"CVmEdStartupAndShutdownDialog","VmConfig",0);
  FUN_1000341d0(&local_170,&local_178);
  QVariant::QVariant(&local_168,(QStringList *)&local_170.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afa6c;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1004afa6c:
  AVar6 = local_170;
  if (*(int *)local_170.field1 != -1) {
    if (*(int *)local_170.field1 != 0) {
      LOCK();
      *(int *)local_170.field1 = *(int *)local_170.field1 + -1;
      local_31 = *(int *)local_170.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afb01;
    }
    iVar1 = *(int *)(local_170.field1 + 0xc);
    if (iVar1 != *(int *)(local_170.field1 + 8)) {
      lVar10 = (long)*(int *)(local_170.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_170.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004afae0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004afae0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004afb01:
  pcVar4 = *(char **)(param_1 + 0x60);
  local_190.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_198,"CVmEdStartupAndShutdownDialog","Settings.Startup.WindowMode",0);
  FUN_1000341d0(&local_190,&local_198);
  QCoreApplication::translate
            ((char *)&local_1a0,"CVmEdStartupAndShutdownDialog",
             "Settings.Startup.StartInDetachedWindow",0);
  FUN_1000341d0(&local_190,&local_1a0);
  QVariant::QVariant(&local_188,(QStringList *)&local_190.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_188);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afbe1;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004afbe1:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afc17;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004afc17:
  AVar6 = local_190;
  if (*(int *)local_190.field1 != -1) {
    if (*(int *)local_190.field1 != 0) {
      LOCK();
      *(int *)local_190.field1 = *(int *)local_190.field1 + -1;
      local_31 = *(int *)local_190.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afcb1;
    }
    iVar1 = *(int *)(local_190.field1 + 0xc);
    if (iVar1 != *(int *)(local_190.field1 + 8)) {
      lVar10 = (long)*(int *)(local_190.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_190.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004afc90:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004afc90;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004afcb1:
  pcVar4 = *(char **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_1b8,"CVmEdStartupAndShutdownDialog","initStartupWindowModeCombo",0);
  QVariant::QVariant(&local_1b0,&local_1b8);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_31 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afd41;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_1004afd41:
  pcVar4 = *(char **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_1d0,"CVmEdStartupAndShutdownDialog","getStartupWindowModeComboValue",0);
  QVariant::QVariant(&local_1c8,&local_1d0);
  QObject::setProperty(pcVar4,(QVariant *)"getter");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_31 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afdd1;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_1004afdd1:
  pcVar4 = *(char **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_1e8,"CVmEdStartupAndShutdownDialog","setStartupWindowModeComboValue",0);
  QVariant::QVariant(&local_1e0,&local_1e8);
  QObject::setProperty(pcVar4,(QVariant *)"setter");
  QVariant::~QVariant(&local_1e0);
  if (*(int *)local_1e8.field0_0x0 != -1) {
    if (*(int *)local_1e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
      local_31 = *(int *)local_1e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afe61;
    }
    QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
  }
LAB_1004afe61:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_1f0,"CVmEdStartupAndShutdownDialog","On VM Shutdown:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afecb;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1004afecb:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  local_1f8 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_200,"CVmEdStartupAndShutdownDialog","Keep window open",0);
  FUN_1000341d0(&local_1f8,&local_200);
  QCoreApplication::translate((char *)&local_208,"CVmEdStartupAndShutdownDialog","Close window",0);
  FUN_1000341d0(&local_1f8,&local_208);
  QCoreApplication::translate
            ((char *)&local_210,"CVmEdStartupAndShutdownDialog","Quit Parallels Desktop",0);
  FUN_1000341d0(&local_1f8);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004affc5;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1004affc5:
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004afffb;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_1004afffb:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0031;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_1004b0031:
  pDVar8 = local_1f8;
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b00c1;
    }
    iVar1 = *(int *)(local_1f8 + 0xc);
    if (iVar1 != *(int *)(local_1f8 + 8)) {
      lVar10 = (long)*(int *)(local_1f8 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_1f8 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004b00a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004b00a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004b00c1:
  pcVar4 = *(char **)(param_1 + 0x70);
  local_228.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_230,"CVmEdStartupAndShutdownDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004b016c;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1004b016c:
  AVar6 = local_228;
  if (*(int *)local_228.field1 != -1) {
    if (*(int *)local_228.field1 != 0) {
      LOCK();
      *(int *)local_228.field1 = *(int *)local_228.field1 + -1;
      local_31 = *(int *)local_228.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0201;
    }
    iVar1 = *(int *)(local_228.field1 + 0xc);
    if (iVar1 != *(int *)(local_228.field1 + 8)) {
      lVar10 = (long)*(int *)(local_228.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_228.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004b01e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004b01e0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004b0201:
  pcVar4 = *(char **)(param_1 + 0x70);
  local_248.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_250,"CVmEdStartupAndShutdownDialog","Settings.Runtime.ActionOnStop",0);
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
      if ((bool)local_31) goto LAB_1004b02ac;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_1004b02ac:
  AVar6 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0341;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar10 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004b0320:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004b0320;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004b0341:
  pcVar4 = *(char **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_268,"CVmEdStartupAndShutdownDialog","initRuntimeActionOnStopCombo",0);
  QVariant::QVariant(&local_260,&local_268);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_260);
  if (*(int *)local_268.field0_0x0 != -1) {
    if (*(int *)local_268.field0_0x0 != 0) {
      LOCK();
      *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
      local_31 = *(int *)local_268.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b03d1;
    }
    QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
  }
LAB_1004b03d1:
  pQVar2 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate
            ((char *)&local_270,"CVmEdStartupAndShutdownDialog","On Mac Shutdown:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b043b;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_1004b043b:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  local_278 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_280,"CVmEdStartupAndShutdownDialog","Stop",0);
  FUN_1000341d0(&local_278,&local_280);
  QCoreApplication::translate((char *)&local_288,"CVmEdStartupAndShutdownDialog","Shutdown",0);
  FUN_1000341d0(&local_278,&local_288);
  QCoreApplication::translate((char *)&local_290,"CVmEdStartupAndShutdownDialog","Suspend",0);
  FUN_1000341d0(&local_278);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b053b;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_1004b053b:
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0571;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1004b0571:
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b05a7;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_1004b05a7:
  pDVar8 = local_278;
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0641;
    }
    iVar1 = *(int *)(local_278 + 0xc);
    if (iVar1 != *(int *)(local_278 + 8)) {
      lVar10 = (long)*(int *)(local_278 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_278 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004b0620:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004b0620;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004b0641:
  pcVar4 = *(char **)(param_1 + 0x80);
  local_2a8.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_2b0,"CVmEdStartupAndShutdownDialog","VmConfig",0);
  FUN_1000341d0(&local_2a8,&local_2b0);
  QVariant::QVariant(&local_2a0,(QStringList *)&local_2a8.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_2a0);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b06ef;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_1004b06ef:
  AVar6 = local_2a8;
  if (*(int *)local_2a8.field1 != -1) {
    if (*(int *)local_2a8.field1 != 0) {
      LOCK();
      *(int *)local_2a8.field1 = *(int *)local_2a8.field1 + -1;
      local_31 = *(int *)local_2a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0781;
    }
    iVar1 = *(int *)(local_2a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2a8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_2a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_2a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004b0760:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004b0760;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004b0781:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_2b8,"CVmEdStartupAndShutdownDialog","On Window Close:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b07ee;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_1004b07ee:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  local_2c0 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_2c8,"CVmEdStartupAndShutdownDialog","Suspend",0);
  FUN_1000341d0(&local_2c0,&local_2c8);
  QCoreApplication::translate((char *)&local_2d0,"CVmEdStartupAndShutdownDialog","Force to stop",0);
  FUN_1000341d0(&local_2c0,&local_2d0);
  QCoreApplication::translate
            ((char *)&local_2d8,"CVmEdStartupAndShutdownDialog","Ask me what to do",0);
  FUN_1000341d0(&local_2c0);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b08ee;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1004b08ee:
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0924;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_1004b0924:
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b095a;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1004b095a:
  pDVar8 = local_2c0;
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b09f1;
    }
    iVar1 = *(int *)(local_2c0 + 0xc);
    if (iVar1 != *(int *)(local_2c0 + 8)) {
      lVar10 = (long)*(int *)(local_2c0 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_2c0 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004b09d0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004b09d0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004b09f1:
  pcVar4 = *(char **)(param_1 + 0x90);
  local_2f0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_2f8,"CVmEdStartupAndShutdownDialog","VmConfig",0);
  FUN_1000341d0(&local_2f0,&local_2f8);
  QVariant::QVariant(&local_2e8,(QStringList *)&local_2f0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_2e8);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0a9f;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_1004b0a9f:
  AVar6 = local_2f0;
  if (*(int *)local_2f0.field1 != -1) {
    if (*(int *)local_2f0.field1 != 0) {
      LOCK();
      *(int *)local_2f0.field1 = *(int *)local_2f0.field1 + -1;
      local_31 = *(int *)local_2f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0b31;
    }
    iVar1 = *(int *)(local_2f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_2f0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_2f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_2f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004b0b10:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004b0b10;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004b0b31:
  pcVar4 = *(char **)(param_1 + 0x90);
  local_310.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_318,"CVmEdStartupAndShutdownDialog","Settings.Shutdown.OnVmWindowClose",
             0);
  FUN_1000341d0(&local_310,&local_318);
  QVariant::QVariant(&local_308,(QStringList *)&local_310.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_308);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_31 = *(int *)local_318 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0bdf;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_1004b0bdf:
  AVar6 = local_310;
  if (*(int *)local_310.field1 != -1) {
    if (*(int *)local_310.field1 != 0) {
      LOCK();
      *(int *)local_310.field1 = *(int *)local_310.field1 + -1;
      local_31 = *(int *)local_310.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0c71;
    }
    iVar1 = *(int *)(local_310.field1 + 0xc);
    if (iVar1 != *(int *)(local_310.field1 + 8)) {
      lVar10 = (long)*(int *)(local_310.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_310.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004b0c50:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004b0c50;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004b0c71:
  pcVar4 = *(char **)(param_1 + 0x90);
  QCoreApplication::translate
            ((char *)&local_330,"CVmEdStartupAndShutdownDialog","initShutdownOnVmWindowCloseCombo",0
            );
  QVariant::QVariant(&local_328,&local_330);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_328);
  if (*(int *)local_330.field0_0x0 != -1) {
    if (*(int *)local_330.field0_0x0 != 0) {
      LOCK();
      *(int *)local_330.field0_0x0 = *(int *)local_330.field0_0x0 + -1;
      local_31 = *(int *)local_330.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0d04;
    }
    QArrayData::deallocate((QArrayData *)local_330.field0_0x0,2,8);
  }
LAB_1004b0d04:
  pQVar2 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate
            ((char *)&local_338,"CVmEdStartupAndShutdownDialog",
             "The virtual machine starts automatically when this Mac starts up, and pauses when closed or not in use."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_31 = *(int *)local_338 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b0d71;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_1004b0d71:
  pQVar2 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate
            ((char *)&local_340,"CVmEdStartupAndShutdownDialog","Always ready in background",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      UNLOCK();
      if (*(int *)local_340 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_340,2,8);
  }
  return;
}

