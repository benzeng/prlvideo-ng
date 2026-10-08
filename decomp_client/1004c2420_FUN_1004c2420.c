
void FUN_1004c2420(long param_1,QString *param_2)

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
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QVariant local_1e8;
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
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QVariant local_138;
  QArrayData *local_128;
  AnonymousUnion0 local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QVariant local_f0;
  QString local_e0;
  QVariant local_d8;
  QString local_c8;
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
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdKeyboardAndMouseDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2497;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c2497:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_48,"CVmEdKeyboardAndMouseDialog","Mouse:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c24f8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004c24f8:
  QComboBox::clear();
  puVar5 = PTR_shared_null_1021e15e8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_58,"CVmEdKeyboardAndMouseDialog","Off",0);
  FUN_1000341d0(&local_50,&local_58);
  QCoreApplication::translate((char *)&local_60,"CVmEdKeyboardAndMouseDialog","On",0);
  FUN_1000341d0(&local_50,&local_60);
  QCoreApplication::translate((char *)&local_68,"CVmEdKeyboardAndMouseDialog","Auto",0);
  FUN_1000341d0(&local_50);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c25d2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c25d2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2602;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004c2602:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2632;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004c2632:
  pDVar8 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c26c1;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1004c26a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1004c26a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004c26c1:
  pcVar4 = *(char **)(param_1 + 0x18);
  local_80.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_88,"CVmEdKeyboardAndMouseDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004c274e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004c274e:
  AVar6 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c27e1;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar10 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c27c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c27c0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c27e1:
  pcVar4 = *(char **)(param_1 + 0x18);
  local_a0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_a8,"CVmEdKeyboardAndMouseDialog","Settings.Tools.MouseSync.Enabled",0);
  FUN_1000341d0(&local_a0,&local_a8);
  QCoreApplication::translate
            ((char *)&local_b0,"CVmEdKeyboardAndMouseDialog","Settings.Tools.SmartMouse.Enabled",0);
  FUN_1000341d0(&local_a0,&local_b0);
  QVariant::QVariant(&local_98,(QStringList *)&local_a0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c28c1;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004c28c1:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c28f7;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004c28f7:
  AVar6 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_31 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2991;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c2970:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c2970;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c2991:
  pcVar4 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_c8,"CVmEdKeyboardAndMouseDialog","initSmartMouseCombo",0);
  QVariant::QVariant(&local_c0,&local_c8);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2a21;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1004c2a21:
  pcVar4 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdKeyboardAndMouseDialog","getSmartMouseComboValue",0);
  QVariant::QVariant(&local_d8,&local_e0);
  QObject::setProperty(pcVar4,(QVariant *)"getter");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2ab1;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1004c2ab1:
  pcVar4 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_f8,"CVmEdKeyboardAndMouseDialog","setSmartMouseComboValue",0);
  QVariant::QVariant(&local_f0,&local_f8);
  QObject::setProperty(pcVar4,(QVariant *)"setter");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2b41;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1004c2b41:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_100,"CVmEdKeyboardAndMouseDialog",
             "Change this option if you have problems with moving a mouse pointer in some applications."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2bab;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004c2bab:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_108,"CVmEdKeyboardAndMouseDialog","Mouse pointer sticks at window edges"
             ,0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2c15;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004c2c15:
  pcVar4 = *(char **)(param_1 + 0x30);
  local_120.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_128,"CVmEdKeyboardAndMouseDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004c2cc0;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004c2cc0:
  AVar6 = local_120;
  if (*(int *)local_120.field1 != -1) {
    if (*(int *)local_120.field1 != 0) {
      LOCK();
      *(int *)local_120.field1 = *(int *)local_120.field1 + -1;
      local_31 = *(int *)local_120.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2d51;
    }
    iVar1 = *(int *)(local_120.field1 + 0xc);
    if (iVar1 != *(int *)(local_120.field1 + 8)) {
      lVar10 = (long)*(int *)(local_120.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_120.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c2d30:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c2d30;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c2d51:
  pcVar4 = *(char **)(param_1 + 0x30);
  local_140.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_148,"CVmEdKeyboardAndMouseDialog","Settings.Runtime.StickyMouse",0);
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
      if ((bool)local_31) goto LAB_1004c2dfc;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004c2dfc:
  AVar6 = local_140;
  if (*(int *)local_140.field1 != -1) {
    if (*(int *)local_140.field1 != 0) {
      LOCK();
      *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
      local_31 = *(int *)local_140.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2e91;
    }
    iVar1 = *(int *)(local_140.field1 + 0xc);
    if (iVar1 != *(int *)(local_140.field1 + 8)) {
      lVar10 = (long)*(int *)(local_140.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_140.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c2e70:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c2e70;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c2e91:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_150,"CVmEdKeyboardAndMouseDialog","Smooth scrolling",0)
  ;
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c2efb;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004c2efb:
  pcVar4 = *(char **)(param_1 + 0x38);
  local_168.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_170,"CVmEdKeyboardAndMouseDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004c2fa6;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1004c2fa6:
  AVar6 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c3031;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar10 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c3010:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c3010;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c3031:
  pcVar4 = *(char **)(param_1 + 0x38);
  local_188.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_190,"CVmEdKeyboardAndMouseDialog",
             "Settings.Tools.SmoothScrolling.Enabled",0);
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
      if ((bool)local_31) goto LAB_1004c30dc;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1004c30dc:
  AVar6 = local_188;
  if (*(int *)local_188.field1 != -1) {
    if (*(int *)local_188.field1 != 0) {
      LOCK();
      *(int *)local_188.field1 = *(int *)local_188.field1 + -1;
      local_31 = *(int *)local_188.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c3171;
    }
    iVar1 = *(int *)(local_188.field1 + 0xc);
    if (iVar1 != *(int *)(local_188.field1 + 8)) {
      lVar10 = (long)*(int *)(local_188.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_188.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c3150:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c3150;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c3171:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_198,"CVmEdKeyboardAndMouseDialog","Keyboard:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c31db;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004c31db:
  pcVar4 = *(char **)(param_1 + 0x50);
  local_1b0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_1b8,"CVmEdKeyboardAndMouseDialog","VmConfig",0);
  FUN_1000341d0(&local_1b0,&local_1b8);
  QVariant::QVariant(&local_1a8,(QStringList *)&local_1b0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"storages");
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c3286;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1004c3286:
  AVar6 = local_1b0;
  if (*(int *)local_1b0.field1 != -1) {
    if (*(int *)local_1b0.field1 != 0) {
      LOCK();
      *(int *)local_1b0.field1 = *(int *)local_1b0.field1 + -1;
      local_31 = *(int *)local_1b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c3311;
    }
    iVar1 = *(int *)(local_1b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c32f0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c32f0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c3311:
  pcVar4 = *(char **)(param_1 + 0x50);
  local_1d0.field1 = (Data *)puVar5;
  QCoreApplication::translate
            ((char *)&local_1d8,"CVmEdKeyboardAndMouseDialog","Settings.Runtime.OptimizeModifiers",0
            );
  FUN_1000341d0(&local_1d0,&local_1d8);
  QVariant::QVariant(&local_1c8,(QStringList *)&local_1d0.field0);
  QObject::setProperty(pcVar4,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c33bc;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_1004c33bc:
  AVar6 = local_1d0;
  if (*(int *)local_1d0.field1 != -1) {
    if (*(int *)local_1d0.field1 != 0) {
      LOCK();
      *(int *)local_1d0.field1 = *(int *)local_1d0.field1 + -1;
      local_31 = *(int *)local_1d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c3451;
    }
    iVar1 = *(int *)(local_1d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1d0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_1d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004c3430:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004c3430;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004c3451:
  pcVar4 = *(char **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_1f0,"CVmEdKeyboardAndMouseDialog","initOptimizeModifiersCombo",0);
  QVariant::QVariant(&local_1e8,&local_1f0);
  QObject::setProperty(pcVar4,(QVariant *)"initer");
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_31 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c34e1;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_1004c34e1:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_1f8,"CVmEdKeyboardAndMouseDialog",
             "When the keyboard is optimized for games, modifier keys become more responsive.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c354b;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_1004c354b:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_200,"CVmEdKeyboardAndMouseDialog",
             "Shortcuts can be configured in Parallels Desktop Preferences:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c35b5;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_1004c35b5:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate
            ((char *)&local_208,"CVmEdKeyboardAndMouseDialog","Open Shortcuts Preferences...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      UNLOCK();
      if (*(int *)local_208 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_208,2,8);
  }
  return;
}

