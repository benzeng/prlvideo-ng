
void FUN_1004bac30(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_328;
  QString local_320;
  QVariant local_318;
  QString local_308;
  QVariant local_300;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  AnonymousUnion0 local_2d8;
  QVariant local_2d0;
  QArrayData *local_2c0;
  AnonymousUnion0 local_2b8;
  QVariant local_2b0;
  QArrayData *local_2a0;
  QString local_298;
  QVariant local_290;
  QString local_280;
  QVariant local_278;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  AnonymousUnion0 local_250;
  QVariant local_248;
  QArrayData *local_238;
  AnonymousUnion0 local_230;
  QVariant local_228;
  QArrayData *local_218;
  QString local_210;
  QVariant local_208;
  QString local_1f8;
  QVariant local_1f0;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  AnonymousUnion0 local_1c8;
  QVariant local_1c0;
  QArrayData *local_1b0;
  AnonymousUnion0 local_1a8;
  QVariant local_1a0;
  QArrayData *local_190;
  QString local_188;
  QVariant local_180;
  QString local_170;
  QVariant local_168;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QVariant local_138;
  QArrayData *local_128;
  AnonymousUnion0 local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  AnonymousUnion0 local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  AnonymousUnion0 local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QString local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  AnonymousUnion0 local_98;
  QVariant local_90;
  QArrayData *local_80;
  AnonymousUnion0 local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdVideoDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004baca7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004baca7:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_48,"CVmEdVideoDialog","Memory:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bad08;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004bad08:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_50,"CVmEdVideoDialog"," MB",0);
  QSpinBox::setSuffix(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bad69;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004bad69:
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004badb1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004badb1:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_60,"CVmEdVideoDialog","3D acceleration:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bae12;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004bae12:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x58);
  local_78.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_80,"CVmEdVideoDialog","Hardware.Video.Enable3DAcceleration",0);
  FUN_1000341d0(&local_78,&local_80);
  QVariant::QVariant(&local_70,(QStringList *)&local_78.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004baea6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004baea6:
  AVar5 = local_78;
  if (*(int *)local_78.field1 != -1) {
    if (*(int *)local_78.field1 != 0) {
      LOCK();
      *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
      local_31 = *(int *)local_78.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004baf31;
    }
    iVar1 = *(int *)(local_78.field1 + 0xc);
    if (iVar1 != *(int *)(local_78.field1 + 8)) {
      lVar8 = (long)*(int *)(local_78.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_78.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004baf10:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004baf10;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004baf31:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_98.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_a0,"CVmEdVideoDialog","VmConfig",0);
  FUN_1000341d0(&local_98,&local_a0);
  QVariant::QVariant(&local_90,(QStringList *)&local_98.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bafdc;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004bafdc:
  AVar5 = local_98;
  if (*(int *)local_98.field1 != -1) {
    if (*(int *)local_98.field1 != 0) {
      LOCK();
      *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
      local_31 = *(int *)local_98.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb071;
    }
    iVar1 = *(int *)(local_98.field1 + 0xc);
    if (iVar1 != *(int *)(local_98.field1 + 8)) {
      lVar8 = (long)*(int *)(local_98.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_98.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bb050:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bb050;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bb071:
  pcVar3 = *(char **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_b8,"CVmEdVideoDialog","init3DAccelerationCombo",0);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb101;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1004bb101:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_c0,"CVmEdVideoDialog","Vertical synchronization",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb16b;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004bb16b:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_d8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_e0,"CVmEdVideoDialog","Hardware.Video.EnableVSync",0);
  FUN_1000341d0(&local_d8,&local_e0);
  QVariant::QVariant(&local_d0,(QStringList *)&local_d8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb216;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004bb216:
  AVar5 = local_d8;
  if (*(int *)local_d8.field1 != -1) {
    if (*(int *)local_d8.field1 != 0) {
      LOCK();
      *(int *)local_d8.field1 = *(int *)local_d8.field1 + -1;
      local_31 = *(int *)local_d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb2a1;
    }
    iVar1 = *(int *)(local_d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bb280:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bb280;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bb2a1:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_f8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_100,"CVmEdVideoDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004bb34c;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004bb34c:
  AVar5 = local_f8;
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb3e1;
    }
    iVar1 = *(int *)(local_f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_f8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bb3c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bb3c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bb3e1:
  pQVar2 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_108,"CVmEdVideoDialog","More Space",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb44e;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004bb44e:
  pcVar3 = *(char **)(param_1 + 0xa0);
  local_120.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_128,"CVmEdVideoDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004bb4fc;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004bb4fc:
  AVar5 = local_120;
  if (*(int *)local_120.field1 != -1) {
    if (*(int *)local_120.field1 != 0) {
      LOCK();
      *(int *)local_120.field1 = *(int *)local_120.field1 + -1;
      local_31 = *(int *)local_120.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb591;
    }
    iVar1 = *(int *)(local_120.field1 + 0xc);
    if (iVar1 != *(int *)(local_120.field1 + 8)) {
      lVar8 = (long)*(int *)(local_120.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_120.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bb570:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bb570;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bb591:
  pcVar3 = *(char **)(param_1 + 0xa0);
  local_140.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_148,"CVmEdVideoDialog","Hardware.Video.EnableHiResDrawing",0);
  FUN_1000341d0(&local_140,&local_148);
  QCoreApplication::translate
            ((char *)&local_150,"CVmEdVideoDialog","Hardware.Video.NativeScalingInGuest",0);
  FUN_1000341d0(&local_140,&local_150);
  QCoreApplication::translate
            ((char *)&local_158,"CVmEdVideoDialog","Hardware.Video.UseHiResInGuest",0);
  FUN_1000341d0(&local_140,&local_158);
  QVariant::QVariant(&local_138,(QStringList *)&local_140.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb6a9;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004bb6a9:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb6df;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004bb6df:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb715;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004bb715:
  AVar5 = local_140;
  if (*(int *)local_140.field1 != -1) {
    if (*(int *)local_140.field1 != 0) {
      LOCK();
      *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
      local_31 = *(int *)local_140.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb7a1;
    }
    iVar1 = *(int *)(local_140.field1 + 0xc);
    if (iVar1 != *(int *)(local_140.field1 + 8)) {
      lVar8 = (long)*(int *)(local_140.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_140.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bb780:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bb780;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bb7a1:
  pcVar3 = *(char **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_170,"CVmEdVideoDialog","getGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_168,&local_170);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb834;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_1004bb834:
  pcVar3 = *(char **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_188,"CVmEdVideoDialog","setGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_180,&local_188);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb8c7;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_1004bb8c7:
  pQVar2 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_190,"CVmEdVideoDialog","Best for Retina display",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb934;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1004bb934:
  pcVar3 = *(char **)(param_1 + 0xc0);
  local_1a8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1b0,"CVmEdVideoDialog","VmConfig",0);
  FUN_1000341d0(&local_1a8,&local_1b0);
  QVariant::QVariant(&local_1a0,(QStringList *)&local_1a8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1a0);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bb9e2;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1004bb9e2:
  AVar5 = local_1a8;
  if (*(int *)local_1a8.field1 != -1) {
    if (*(int *)local_1a8.field1 != 0) {
      LOCK();
      *(int *)local_1a8.field1 = *(int *)local_1a8.field1 + -1;
      local_31 = *(int *)local_1a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bba71;
    }
    iVar1 = *(int *)(local_1a8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1a8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1a8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1a8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bba50:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bba50;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bba71:
  pcVar3 = *(char **)(param_1 + 0xc0);
  local_1c8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_1d0,"CVmEdVideoDialog","Hardware.Video.EnableHiResDrawing",0);
  FUN_1000341d0(&local_1c8,&local_1d0);
  QCoreApplication::translate
            ((char *)&local_1d8,"CVmEdVideoDialog","Hardware.Video.NativeScalingInGuest",0);
  FUN_1000341d0(&local_1c8,&local_1d8);
  QCoreApplication::translate
            ((char *)&local_1e0,"CVmEdVideoDialog","Hardware.Video.UseHiResInGuest",0);
  FUN_1000341d0(&local_1c8,&local_1e0);
  QVariant::QVariant(&local_1c0,(QStringList *)&local_1c8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1c0);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbb89;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1004bbb89:
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbbbf;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_1004bbbbf:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbbf5;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_1004bbbf5:
  AVar5 = local_1c8;
  if (*(int *)local_1c8.field1 != -1) {
    if (*(int *)local_1c8.field1 != 0) {
      LOCK();
      *(int *)local_1c8.field1 = *(int *)local_1c8.field1 + -1;
      local_31 = *(int *)local_1c8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbc81;
    }
    iVar1 = *(int *)(local_1c8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1c8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1c8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1c8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bbc60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bbc60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bbc81:
  pcVar3 = *(char **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_1f8,"CVmEdVideoDialog","getGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_1f0,&local_1f8);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_1f0);
  if (*(int *)local_1f8.field0_0x0 != -1) {
    if (*(int *)local_1f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
      local_31 = *(int *)local_1f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbd14;
    }
    QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
  }
LAB_1004bbd14:
  pcVar3 = *(char **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_210,"CVmEdVideoDialog","setGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_208,&local_210);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_208);
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      local_31 = *(int *)local_210.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbda7;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_1004bbda7:
  pQVar2 = *(QString **)(param_1 + 0xe0);
  QCoreApplication::translate((char *)&local_218,"CVmEdVideoDialog","Scaled",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbe14;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_1004bbe14:
  pcVar3 = *(char **)(param_1 + 0xe0);
  local_230.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_238,"CVmEdVideoDialog","VmConfig",0);
  FUN_1000341d0(&local_230,&local_238);
  QVariant::QVariant(&local_228,(QStringList *)&local_230.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_228);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbec2;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1004bbec2:
  AVar5 = local_230;
  if (*(int *)local_230.field1 != -1) {
    if (*(int *)local_230.field1 != 0) {
      LOCK();
      *(int *)local_230.field1 = *(int *)local_230.field1 + -1;
      local_31 = *(int *)local_230.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bbf51;
    }
    iVar1 = *(int *)(local_230.field1 + 0xc);
    if (iVar1 != *(int *)(local_230.field1 + 8)) {
      lVar8 = (long)*(int *)(local_230.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_230.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bbf30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bbf30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bbf51:
  pcVar3 = *(char **)(param_1 + 0xe0);
  local_250.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_258,"CVmEdVideoDialog","Hardware.Video.EnableHiResDrawing",0);
  FUN_1000341d0(&local_250,&local_258);
  QCoreApplication::translate
            ((char *)&local_260,"CVmEdVideoDialog","Hardware.Video.NativeScalingInGuest",0);
  FUN_1000341d0(&local_250,&local_260);
  QCoreApplication::translate
            ((char *)&local_268,"CVmEdVideoDialog","Hardware.Video.UseHiResInGuest",0);
  FUN_1000341d0(&local_250,&local_268);
  QVariant::QVariant(&local_248,(QStringList *)&local_250.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_248);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc069;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1004bc069:
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc09f;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_1004bc09f:
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc0d5;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1004bc0d5:
  AVar5 = local_250;
  if (*(int *)local_250.field1 != -1) {
    if (*(int *)local_250.field1 != 0) {
      LOCK();
      *(int *)local_250.field1 = *(int *)local_250.field1 + -1;
      local_31 = *(int *)local_250.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc161;
    }
    iVar1 = *(int *)(local_250.field1 + 0xc);
    if (iVar1 != *(int *)(local_250.field1 + 8)) {
      lVar8 = (long)*(int *)(local_250.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_250.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bc140:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bc140;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bc161:
  pcVar3 = *(char **)(param_1 + 0xe0);
  QCoreApplication::translate((char *)&local_280,"CVmEdVideoDialog","getGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_278,&local_280);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_278);
  if (*(int *)local_280.field0_0x0 != -1) {
    if (*(int *)local_280.field0_0x0 != 0) {
      LOCK();
      *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
      local_31 = *(int *)local_280.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc1f4;
    }
    QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
  }
LAB_1004bc1f4:
  pcVar3 = *(char **)(param_1 + 0xe0);
  QCoreApplication::translate((char *)&local_298,"CVmEdVideoDialog","setGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_290,&local_298);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_290);
  if (*(int *)local_298.field0_0x0 != -1) {
    if (*(int *)local_298.field0_0x0 != 0) {
      LOCK();
      *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
      local_31 = *(int *)local_298.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc287;
    }
    QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
  }
LAB_1004bc287:
  pQVar2 = *(QString **)(param_1 + 0x100);
  QCoreApplication::translate((char *)&local_2a0,"CVmEdVideoDialog","Best for external displays",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc2f4;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_1004bc2f4:
  pcVar3 = *(char **)(param_1 + 0x100);
  local_2b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_2c0,"CVmEdVideoDialog","VmConfig",0);
  FUN_1000341d0(&local_2b8,&local_2c0);
  QVariant::QVariant(&local_2b0,(QStringList *)&local_2b8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_2b0);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc3a2;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_1004bc3a2:
  AVar5 = local_2b8;
  if (*(int *)local_2b8.field1 != -1) {
    if (*(int *)local_2b8.field1 != 0) {
      LOCK();
      *(int *)local_2b8.field1 = *(int *)local_2b8.field1 + -1;
      local_31 = *(int *)local_2b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc431;
    }
    iVar1 = *(int *)(local_2b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_2b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_2b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bc410:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bc410;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bc431:
  pcVar3 = *(char **)(param_1 + 0x100);
  local_2d8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_2e0,"CVmEdVideoDialog","Hardware.Video.EnableHiResDrawing",0);
  FUN_1000341d0(&local_2d8,&local_2e0);
  QCoreApplication::translate
            ((char *)&local_2e8,"CVmEdVideoDialog","Hardware.Video.NativeScalingInGuest",0);
  FUN_1000341d0(&local_2d8,&local_2e8);
  QCoreApplication::translate
            ((char *)&local_2f0,"CVmEdVideoDialog","Hardware.Video.UseHiResInGuest",0);
  FUN_1000341d0(&local_2d8,&local_2f0);
  QVariant::QVariant(&local_2d0,(QStringList *)&local_2d8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_2d0);
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc549;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_1004bc549:
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc57f;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_1004bc57f:
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc5b5;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_1004bc5b5:
  AVar5 = local_2d8;
  if (*(int *)local_2d8.field1 != -1) {
    if (*(int *)local_2d8.field1 != 0) {
      LOCK();
      *(int *)local_2d8.field1 = *(int *)local_2d8.field1 + -1;
      local_31 = *(int *)local_2d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc641;
    }
    iVar1 = *(int *)(local_2d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_2d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_2d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_2d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bc620:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bc620;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bc641:
  pcVar3 = *(char **)(param_1 + 0x100);
  QCoreApplication::translate((char *)&local_308,"CVmEdVideoDialog","getGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_300,&local_308);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_300);
  if (*(int *)local_308.field0_0x0 != -1) {
    if (*(int *)local_308.field0_0x0 != 0) {
      LOCK();
      *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
      local_31 = *(int *)local_308.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc6d4;
    }
    QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
  }
LAB_1004bc6d4:
  pcVar3 = *(char **)(param_1 + 0x100);
  QCoreApplication::translate((char *)&local_320,"CVmEdVideoDialog","setGuestResolutionModeValue",0)
  ;
  QVariant::QVariant(&local_318,&local_320);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_318);
  if (*(int *)local_320.field0_0x0 != -1) {
    if (*(int *)local_320.field0_0x0 != 0) {
      LOCK();
      *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
      local_31 = *(int *)local_320.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bc767;
    }
    QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
  }
LAB_1004bc767:
  pQVar2 = *(QString **)(param_1 + 0x110);
  QCoreApplication::translate((char *)&local_328,"CVmEdVideoDialog","Resolution:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      UNLOCK();
      if (*(int *)local_328 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_328,2,8);
  }
  return;
}

