
void FUN_100481dc0(long param_1,QString *param_2)

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
  QArrayData *local_210;
  QString local_208;
  QVariant local_200;
  QArrayData *local_1f0;
  AnonymousUnion0 local_1e8;
  QVariant local_1e0;
  QArrayData *local_1d0;
  AnonymousUnion0 local_1c8;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  Data *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  AnonymousUnion0 local_188;
  QVariant local_180;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QVariant local_138;
  QArrayData *local_128;
  AnonymousUnion0 local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  AnonymousUnion0 local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  AnonymousUnion0 local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  AnonymousUnion0 local_90;
  QVariant local_88;
  QArrayData *local_78;
  AnonymousUnion0 local_70;
  QVariant local_68;
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdOptimizationDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100481e37;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100481e37:
  pQVar2 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdOptimizationDialog",
             "Limit the virtual machine resource usage when running various tasks in multiple virtual machines. CPU usage, disk I/O and PPS (packets per second) speeds are affected."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100481e98;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100481e98:
  QComboBox::clear();
  puVar5 = PTR_shared_null_1021e15e8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_58,"CVmEdOptimizationDialog","Faster virtual machine",0);
  FUN_1000341d0(&local_50);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100481f1a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100481f1a:
  pDVar8 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100481fa1;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100481f80:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100481f80;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100481fa1:
  pcVar4 = *(char **)(param_1 + 0x18);
  local_70.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_78,"CVmEdOptimizationDialog","VmConfig",0);
  FUN_1000341d0(&local_70,&local_78);
  QVariant::QVariant(&local_68,(QStringList *)&local_70.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048202e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10048202e:
  AVar6 = local_70;
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004820c1;
    }
    iVar1 = *(int *)(local_70.field1 + 0xc);
    if (iVar1 != *(int *)(local_70.field1 + 8)) {
      lVar10 = (long)*(int *)(local_70.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_70.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004820a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004820a0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004820c1:
  pcVar4 = *(char **)(param_1 + 0x18);
  local_90.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_98,"CVmEdOptimizationDialog","Settings.Runtime.DiskCachePolicy",0);
  FUN_1000341d0(&local_90,&local_98);
  QVariant::QVariant(&local_88,(QStringList *)&local_90.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482163;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100482163:
  AVar6 = local_90;
  if (*(int *)local_90.field1 != -1) {
    if (*(int *)local_90.field1 != 0) {
      LOCK();
      *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
      local_31 = *(int *)local_90.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004821f1;
    }
    iVar1 = *(int *)(local_90.field1 + 0xc);
    if (iVar1 != *(int *)(local_90.field1 + 8)) {
      lVar10 = (long)*(int *)(local_90.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_90.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004821d0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004821d0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004821f1:
  pcVar4 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_b0,"CVmEdOptimizationDialog","initPerformanceCombo",0);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482281;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100482281:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_b8,"CVmEdOptimizationDialog","Adaptive Hypervisor",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004822eb;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004822eb:
  pcVar4 = *(char **)(param_1 + 0x20);
  local_d0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdOptimizationDialog","Settings.Runtime.EnableAdaptiveHypervisor"
             ,0);
  FUN_1000341d0(&local_d0,&local_d8);
  QVariant::QVariant(&local_c8,(QStringList *)&local_d0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482396;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100482396:
  AVar6 = local_d0;
  if (*(int *)local_d0.field1 != -1) {
    if (*(int *)local_d0.field1 != 0) {
      LOCK();
      *(int *)local_d0.field1 = *(int *)local_d0.field1 + -1;
      local_31 = *(int *)local_d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482421;
    }
    iVar1 = *(int *)(local_d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_d0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482400:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482400;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100482421:
  pcVar4 = *(char **)(param_1 + 0x20);
  local_f0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_f8,"CVmEdOptimizationDialog","VmConfig",0);
  FUN_1000341d0(&local_f0,&local_f8);
  QVariant::QVariant(&local_e8,(QStringList *)&local_f0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004824cc;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004824cc:
  AVar6 = local_f0;
  if (*(int *)local_f0.field1 != -1) {
    if (*(int *)local_f0.field1 != 0) {
      LOCK();
      *(int *)local_f0.field1 = *(int *)local_f0.field1 + -1;
      local_31 = *(int *)local_f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482561;
    }
    iVar1 = *(int *)(local_f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_f0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482540:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482540;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100482561:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_100,"CVmEdOptimizationDialog","Resource usage:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004825cb;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004825cb:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_108,"CVmEdOptimizationDialog","Tune Windows for speed",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482635;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100482635:
  pcVar4 = *(char **)(param_1 + 0x38);
  local_120.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_128,"CVmEdOptimizationDialog","VmConfig",0);
  FUN_1000341d0(&local_120,&local_128);
  QVariant::QVariant(&local_118,(QStringList *)&local_120.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_118);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004826e0;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004826e0:
  AVar6 = local_120;
  if (*(int *)local_120.field1 != -1) {
    if (*(int *)local_120.field1 != 0) {
      LOCK();
      *(int *)local_120.field1 = *(int *)local_120.field1 + -1;
      local_31 = *(int *)local_120.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482771;
    }
    iVar1 = *(int *)(local_120.field1 + 0xc);
    if (iVar1 != *(int *)(local_120.field1 + 8)) {
      lVar10 = (long)*(int *)(local_120.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_120.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482750:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482750;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100482771:
  pcVar4 = *(char **)(param_1 + 0x38);
  local_140.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_148,"CVmEdOptimizationDialog","Settings.Runtime.DisableWin7Logo",0);
  FUN_1000341d0(&local_140,&local_148);
  QVariant::QVariant(&local_138,(QStringList *)&local_140.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_138);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048281c;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10048281c:
  AVar6 = local_140;
  if (*(int *)local_140.field1 != -1) {
    if (*(int *)local_140.field1 != 0) {
      LOCK();
      *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
      local_31 = *(int *)local_140.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004828b1;
    }
    iVar1 = *(int *)(local_140.field1 + 0xc);
    if (iVar1 != *(int *)(local_140.field1 + 8)) {
      lVar10 = (long)*(int *)(local_140.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_140.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482890:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482890;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004828b1:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_150,"CVmEdOptimizationDialog","Pause @GUEST_TYPE@ when possible",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048291b;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10048291b:
  pcVar4 = *(char **)(param_1 + 0x40);
  local_168.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_170,"CVmEdOptimizationDialog","VmConfig",0);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004829c6;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1004829c6:
  AVar6 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482a51;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar10 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482a30:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482a30;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100482a51:
  pcVar4 = *(char **)(param_1 + 0x40);
  local_188.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_190,"CVmEdOptimizationDialog","Settings.Tools.Coherence.PauseIdleVM",0);
  FUN_1000341d0(&local_188,&local_190);
  QVariant::QVariant(&local_180,(QStringList *)&local_188.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482afc;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100482afc:
  AVar6 = local_188;
  if (*(int *)local_188.field1 != -1) {
    if (*(int *)local_188.field1 != 0) {
      LOCK();
      *(int *)local_188.field1 = *(int *)local_188.field1 + -1;
      local_31 = *(int *)local_188.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482b91;
    }
    iVar1 = *(int *)(local_188.field1 + 0xc);
    if (iVar1 != *(int *)(local_188.field1 + 8)) {
      lVar10 = (long)*(int *)(local_188.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_188.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482b70:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482b70;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100482b91:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_198,"CVmEdOptimizationDialog","Power:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482bfb;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100482bfb:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  local_1a0 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1a8,"CVmEdOptimizationDialog","Longer battery life",0);
  FUN_1000341d0(&local_1a0,&local_1a8);
  QCoreApplication::translate((char *)&local_1b0,"CVmEdOptimizationDialog","Better performance",0);
  FUN_1000341d0(&local_1a0);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482cc0;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100482cc0:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482cf6;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100482cf6:
  pDVar8 = local_1a0;
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482d81;
    }
    iVar1 = *(int *)(local_1a0 + 0xc);
    if (iVar1 != *(int *)(local_1a0 + 8)) {
      lVar10 = (long)*(int *)(local_1a0 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_1a0 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100482d60:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100482d60;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100482d81:
  pcVar4 = *(char **)(param_1 + 0x58);
  local_1c8.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1d0,"CVmEdOptimizationDialog","VmConfig",0);
  FUN_1000341d0(&local_1c8,&local_1d0);
  QVariant::QVariant(&local_1c0,(QStringList *)&local_1c8.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_1c0);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482e2c;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_100482e2c:
  AVar6 = local_1c8;
  if (*(int *)local_1c8.field1 != -1) {
    if (*(int *)local_1c8.field1 != 0) {
      LOCK();
      *(int *)local_1c8.field1 = *(int *)local_1c8.field1 + -1;
      local_31 = *(int *)local_1c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482ec1;
    }
    iVar1 = *(int *)(local_1c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1c8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482ea0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482ea0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100482ec1:
  pcVar4 = *(char **)(param_1 + 0x58);
  local_1e8.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_1f0,"CVmEdOptimizationDialog",
             "Settings.Runtime.OptimizePowerConsumptionMode",0);
  FUN_1000341d0(&local_1e8,&local_1f0);
  QVariant::QVariant(&local_1e0,(QStringList *)&local_1e8.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1e0);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100482f6c;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_100482f6c:
  AVar6 = local_1e8;
  if (*(int *)local_1e8.field1 != -1) {
    if (*(int *)local_1e8.field1 != 0) {
      LOCK();
      *(int *)local_1e8.field1 = *(int *)local_1e8.field1 + -1;
      local_31 = *(int *)local_1e8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100483001;
    }
    iVar1 = *(int *)(local_1e8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1e8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1e8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100482fe0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100482fe0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100483001:
  pcVar4 = *(char **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_208,"CVmEdOptimizationDialog","initPowerConsumptionCombo",0);
  QVariant::QVariant(&local_200,&local_208);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_200);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_31 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100483091;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_100483091:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_210,"CVmEdOptimizationDialog","Show battery in @GUEST_TYPE@",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004830fb;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1004830fb:
  pcVar4 = *(char **)(param_1 + 0x60);
  local_228.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_230,"CVmEdOptimizationDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004831a6;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1004831a6:
  AVar6 = local_228;
  if (*(int *)local_228.field1 != -1) {
    if (*(int *)local_228.field1 != 0) {
      LOCK();
      *(int *)local_228.field1 = *(int *)local_228.field1 + -1;
      local_31 = *(int *)local_228.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100483231;
    }
    iVar1 = *(int *)(local_228.field1 + 0xc);
    if (iVar1 != *(int *)(local_228.field1 + 8)) {
      lVar10 = (long)*(int *)(local_228.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_228.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100483210:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100483210;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100483231:
  pcVar4 = *(char **)(param_1 + 0x60);
  local_248.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_250,"CVmEdOptimizationDialog","Settings.Runtime.ShowBatteryStatus",0);
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
      if ((bool)local_31) goto LAB_1004832dc;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_1004832dc:
  AVar6 = local_248;
  if (*(int *)local_248.field1 != -1) {
    if (*(int *)local_248.field1 != 0) {
      LOCK();
      *(int *)local_248.field1 = *(int *)local_248.field1 + -1;
      local_31 = *(int *)local_248.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100483371;
    }
    iVar1 = *(int *)(local_248.field1 + 0xc);
    if (iVar1 != *(int *)(local_248.field1 + 8)) {
      lVar10 = (long)*(int *)(local_248.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_248.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100483350:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100483350;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100483371:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_258,"CVmEdOptimizationDialog","Performance:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004833db;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1004833db:
  pQVar2 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_260,"CVmEdOptimizationDialog","Low",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100483448;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_100483448:
  pQVar2 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate((char *)&local_268,"CVmEdOptimizationDialog","Medium",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004834b5;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1004834b5:
  pQVar2 = *(QString **)(param_1 + 0xb8);
  QCoreApplication::translate((char *)&local_270,"CVmEdOptimizationDialog","No limit",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      UNLOCK();
      if (*(int *)local_270 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_270,2,8);
  }
  return;
}

