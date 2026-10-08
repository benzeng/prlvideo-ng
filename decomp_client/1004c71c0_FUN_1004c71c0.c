
void FUN_1004c71c0(long param_1,QString *param_2)

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
  QArrayData *local_1a8;
  AnonymousUnion0 local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  AnonymousUnion0 local_180;
  QVariant local_178;
  QArrayData *local_168;
  QString local_160;
  QVariant local_158;
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QVariant local_138;
  QArrayData *local_128;
  AnonymousUnion0 local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  Data *local_f8;
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
  
  QCoreApplication::translate((char *)&local_40,"CVmEdCpuAndMemoryDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7237;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c7237:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_48,"CVmEdCpuAndMemoryDialog"," MB",0);
  QSpinBox::setSuffix(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7298;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004c7298:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_50,"CVmEdCpuAndMemoryDialog","Processors:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c72f9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004c72f9:
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7341;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004c7341:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_60,"CVmEdCpuAndMemoryDialog","Memory:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c73a2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004c73a2:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_68,"CVmEdCpuAndMemoryDialog","Enable nested virtualization",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7403;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c7403:
  puVar5 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x58);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_88,"CVmEdCpuAndMemoryDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004c7497;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004c7497:
  AVar6 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7521;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar10 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7500:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c7500;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7521:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_a0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_a8,"CVmEdCpuAndMemoryDialog","Hardware.Cpu.VirtualizedHV",0);
  FUN_1000341d0(&local_a0,&local_a8);
  QVariant::QVariant(&local_98,(QStringList *)&local_a0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c75cc;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004c75cc:
  AVar6 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_31 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7661;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7640:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c7640;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7661:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_b0,"CVmEdCpuAndMemoryDialog","PMU virtualization",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c76cb;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004c76cb:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_c8.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_d0,"CVmEdCpuAndMemoryDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004c7776;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004c7776:
  AVar6 = local_c8;
  if (*(int *)local_c8.field1 != -1) {
    if (*(int *)local_c8.field1 != 0) {
      LOCK();
      *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
      local_31 = *(int *)local_c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7801;
    }
    iVar1 = *(int *)(local_c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_c8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c77e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c77e0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7801:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_e8.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_f0,"CVmEdCpuAndMemoryDialog","Hardware.Cpu.VirtualizePMU",0);
  FUN_1000341d0(&local_e8,&local_f0);
  QVariant::QVariant(&local_e0,(QStringList *)&local_e8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c78ac;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004c78ac:
  AVar6 = local_e8;
  if (*(int *)local_e8.field1 != -1) {
    if (*(int *)local_e8.field1 != 0) {
      LOCK();
      *(int *)local_e8.field1 = *(int *)local_e8.field1 + -1;
      local_31 = *(int *)local_e8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7941;
    }
    iVar1 = *(int *)(local_e8.field1 + 0xc);
    if (iVar1 != *(int *)(local_e8.field1 + 8)) {
      lVar10 = (long)*(int *)(local_e8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_e8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7920:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c7920;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7941:
  QComboBox::clear();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  local_f8 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_100,"CVmEdCpuAndMemoryDialog","1",0);
  FUN_1000341d0(&local_f8,&local_100);
  QCoreApplication::translate((char *)&local_108,"CVmEdCpuAndMemoryDialog","2",0);
  FUN_1000341d0(&local_f8);
  QComboBox::insertItems((int)uVar4,(QStringList *)0x0);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7a06;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004c7a06:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7a3c;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004c7a3c:
  pDVar7 = local_f8;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7ad1;
    }
    iVar1 = *(int *)(local_f8 + 0xc);
    if (iVar1 != *(int *)(local_f8 + 8)) {
      lVar10 = (long)*(int *)(local_f8 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_f8 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7ab0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c7ab0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1004c7ad1:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_120.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_128,"CVmEdCpuAndMemoryDialog","VmConfig",0);
  FUN_1000341d0(&local_120,&local_128);
  QVariant::QVariant(&local_118,(QStringList *)&local_120.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_118);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7b7c;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004c7b7c:
  AVar6 = local_120;
  if (*(int *)local_120.field1 != -1) {
    if (*(int *)local_120.field1 != 0) {
      LOCK();
      *(int *)local_120.field1 = *(int *)local_120.field1 + -1;
      local_31 = *(int *)local_120.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7c11;
    }
    iVar1 = *(int *)(local_120.field1 + 0xc);
    if (iVar1 != *(int *)(local_120.field1 + 8)) {
      lVar10 = (long)*(int *)(local_120.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_120.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7bf0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c7bf0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7c11:
  pcVar3 = *(char **)(param_1 + 0x78);
  local_140.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_148,"CVmEdCpuAndMemoryDialog","Hardware.Cpu.Number",0);
  FUN_1000341d0(&local_140,&local_148);
  QVariant::QVariant(&local_138,(QStringList *)&local_140.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_138);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7cbc;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004c7cbc:
  AVar6 = local_140;
  if (*(int *)local_140.field1 != -1) {
    if (*(int *)local_140.field1 != 0) {
      LOCK();
      *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
      local_31 = *(int *)local_140.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7d51;
    }
    iVar1 = *(int *)(local_140.field1 + 0xc);
    if (iVar1 != *(int *)(local_140.field1 + 8)) {
      lVar10 = (long)*(int *)(local_140.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_140.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7d30:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c7d30;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7d51:
  pcVar3 = *(char **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_160,"CVmEdCpuAndMemoryDialog","initCpuNumberCombo",0);
  QVariant::QVariant(&local_158,&local_160);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_158);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7de1;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_1004c7de1:
  pQVar2 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate((char *)&local_168,"CVmEdCpuAndMemoryDialog","Hypervisor:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7e4e;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004c7e4e:
  pcVar3 = *(char **)(param_1 + 0xb0);
  local_180.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_188,"CVmEdCpuAndMemoryDialog","VmConfig",0);
  FUN_1000341d0(&local_180,&local_188);
  QVariant::QVariant(&local_178,(QStringList *)&local_180.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_178);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7efc;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1004c7efc:
  AVar6 = local_180;
  if (*(int *)local_180.field1 != -1) {
    if (*(int *)local_180.field1 != 0) {
      LOCK();
      *(int *)local_180.field1 = *(int *)local_180.field1 + -1;
      local_31 = *(int *)local_180.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7f91;
    }
    iVar1 = *(int *)(local_180.field1 + 0xc);
    if (iVar1 != *(int *)(local_180.field1 + 8)) {
      lVar10 = (long)*(int *)(local_180.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_180.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c7f70:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c7f70;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c7f91:
  pcVar3 = *(char **)(param_1 + 0xb0);
  local_1a0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_1a8,"CVmEdCpuAndMemoryDialog","Settings.Runtime.HypervisorType",0);
  FUN_1000341d0(&local_1a0,&local_1a8);
  QVariant::QVariant(&local_198,(QStringList *)&local_1a0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_198);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c803f;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1004c803f:
  AVar6 = local_1a0;
  if (*(int *)local_1a0.field1 != -1) {
    if (*(int *)local_1a0.field1 != 0) {
      LOCK();
      *(int *)local_1a0.field1 = *(int *)local_1a0.field1 + -1;
      UNLOCK();
      if (*(int *)local_1a0.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_1a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1a0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_1a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c80b0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c80b0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
  return;
}

