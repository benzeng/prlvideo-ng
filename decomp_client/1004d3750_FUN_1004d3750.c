
void FUN_1004d3750(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  AnonymousUnion0 local_1f8;
  QVariant local_1f0;
  QArrayData *local_1e0;
  AnonymousUnion0 local_1d8;
  QVariant local_1d0;
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
  QArrayData *local_138;
  QArrayData *local_130;
  AnonymousUnion0 local_128;
  QVariant local_120;
  QArrayData *local_110;
  AnonymousUnion0 local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  AnonymousUnion0 local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  AnonymousUnion0 local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  AnonymousUnion0 local_98;
  QVariant local_90;
  QArrayData *local_80;
  AnonymousUnion0 local_78;
  QVariant local_70;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdTravelerModeDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d37c7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d37c7:
  QCoreApplication::translate((char *)&local_58,"CVmEdTravelerModeDialog","CFGED_TRAVEL_MODE",0);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3841;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1004d3841:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_60,"CVmEdTravelerModeDialog","Never",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d38a2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004d38a2:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x10);
  local_78.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_80,"CVmEdTravelerModeDialog","VmConfig",0);
  FUN_1000341d0(&local_78,&local_80);
  QVariant::QVariant(&local_70,(QStringList *)&local_78.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3936;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004d3936:
  AVar5 = local_78;
  if (*(int *)local_78.field1 != -1) {
    if (*(int *)local_78.field1 != 0) {
      LOCK();
      *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
      local_31 = *(int *)local_78.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d39c1;
    }
    iVar1 = *(int *)(local_78.field1 + 0xc);
    if (iVar1 != *(int *)(local_78.field1 + 8)) {
      lVar8 = (long)*(int *)(local_78.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_78.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d39a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d39a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d39c1:
  pcVar3 = *(char **)(param_1 + 0x10);
  local_98.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_a0,"CVmEdTravelerModeDialog","Settings.TravelOptions.Condition.Enter",0)
  ;
  FUN_1000341d0(&local_98,&local_a0);
  QVariant::QVariant(&local_90,(QStringList *)&local_98.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3a6c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004d3a6c:
  AVar5 = local_98;
  if (*(int *)local_98.field1 != -1) {
    if (*(int *)local_98.field1 != 0) {
      LOCK();
      *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
      local_31 = *(int *)local_98.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3b01;
    }
    iVar1 = *(int *)(local_98.field1 + 0xc);
    if (iVar1 != *(int *)(local_98.field1 + 8)) {
      lVar8 = (long)*(int *)(local_98.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_98.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d3ae0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d3ae0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d3b01:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_a8,"CVmEdTravelerModeDialog","Always when on battery power",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3b6b;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004d3b6b:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_c0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_c8,"CVmEdTravelerModeDialog","VmConfig",0);
  FUN_1000341d0(&local_c0,&local_c8);
  QVariant::QVariant(&local_b8,(QStringList *)&local_c0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3c16;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004d3c16:
  AVar5 = local_c0;
  if (*(int *)local_c0.field1 != -1) {
    if (*(int *)local_c0.field1 != 0) {
      LOCK();
      *(int *)local_c0.field1 = *(int *)local_c0.field1 + -1;
      local_31 = *(int *)local_c0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3ca1;
    }
    iVar1 = *(int *)(local_c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_c0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d3c80:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d3c80;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d3ca1:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_e0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_e8,"CVmEdTravelerModeDialog","Settings.TravelOptions.Condition.Enter",0)
  ;
  FUN_1000341d0(&local_e0,&local_e8);
  QVariant::QVariant(&local_d8,(QStringList *)&local_e0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3d4c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004d3d4c:
  AVar5 = local_e0;
  if (*(int *)local_e0.field1 != -1) {
    if (*(int *)local_e0.field1 != 0) {
      LOCK();
      *(int *)local_e0.field1 = *(int *)local_e0.field1 + -1;
      local_31 = *(int *)local_e0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3de1;
    }
    iVar1 = *(int *)(local_e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_e0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d3dc0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d3dc0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d3de1:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_f0,"CVmEdTravelerModeDialog","When connected to power",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3e4b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004d3e4b:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_108.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_110,"CVmEdTravelerModeDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004d3ef6;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004d3ef6:
  AVar5 = local_108;
  if (*(int *)local_108.field1 != -1) {
    if (*(int *)local_108.field1 != 0) {
      LOCK();
      *(int *)local_108.field1 = *(int *)local_108.field1 + -1;
      local_31 = *(int *)local_108.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d3f81;
    }
    iVar1 = *(int *)(local_108.field1 + 0xc);
    if (iVar1 != *(int *)(local_108.field1 + 8)) {
      lVar8 = (long)*(int *)(local_108.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_108.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d3f60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d3f60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d3f81:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_128.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_130,"CVmEdTravelerModeDialog","Settings.TravelOptions.Condition.Quit",0)
  ;
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
      if ((bool)local_31) goto LAB_1004d402c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004d402c:
  AVar5 = local_128;
  if (*(int *)local_128.field1 != -1) {
    if (*(int *)local_128.field1 != 0) {
      LOCK();
      *(int *)local_128.field1 = *(int *)local_128.field1 + -1;
      local_31 = *(int *)local_128.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d40c1;
    }
    iVar1 = *(int *)(local_128.field1 + 0xc);
    if (iVar1 != *(int *)(local_128.field1 + 8)) {
      lVar8 = (long)*(int *)(local_128.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_128.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d40a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d40a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d40c1:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_138,"CVmEdTravelerModeDialog","When battery power is",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d412b;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004d412b:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_150.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_158,"CVmEdTravelerModeDialog","VmConfig",0);
  FUN_1000341d0(&local_150,&local_158);
  QVariant::QVariant(&local_148,(QStringList *)&local_150.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d41d6;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004d41d6:
  AVar5 = local_150;
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_31 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4261;
    }
    iVar1 = *(int *)(local_150.field1 + 0xc);
    if (iVar1 != *(int *)(local_150.field1 + 8)) {
      lVar8 = (long)*(int *)(local_150.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_150.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d4240:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d4240;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d4261:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_170.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_178,"CVmEdTravelerModeDialog","Settings.TravelOptions.Condition.Enter",0
            );
  FUN_1000341d0(&local_170,&local_178);
  QVariant::QVariant(&local_168,(QStringList *)&local_170.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_168);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d430c;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1004d430c:
  AVar5 = local_170;
  if (*(int *)local_170.field1 != -1) {
    if (*(int *)local_170.field1 != 0) {
      LOCK();
      *(int *)local_170.field1 = *(int *)local_170.field1 + -1;
      local_31 = *(int *)local_170.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d43a1;
    }
    iVar1 = *(int *)(local_170.field1 + 0xc);
    if (iVar1 != *(int *)(local_170.field1 + 8)) {
      lVar8 = (long)*(int *)(local_170.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_170.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d4380:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d4380;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d43a1:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_180,"CVmEdTravelerModeDialog","Never",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d440b;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1004d440b:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_198.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1a0,"CVmEdTravelerModeDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004d44b6;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004d44b6:
  AVar5 = local_198;
  if (*(int *)local_198.field1 != -1) {
    if (*(int *)local_198.field1 != 0) {
      LOCK();
      *(int *)local_198.field1 = *(int *)local_198.field1 + -1;
      local_31 = *(int *)local_198.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4541;
    }
    iVar1 = *(int *)(local_198.field1 + 0xc);
    if (iVar1 != *(int *)(local_198.field1 + 8)) {
      lVar8 = (long)*(int *)(local_198.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_198.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d4520:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d4520;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d4541:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_1b8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_1c0,"CVmEdTravelerModeDialog","Settings.TravelOptions.Condition.Quit",0)
  ;
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
      if ((bool)local_31) goto LAB_1004d45ec;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1004d45ec:
  AVar5 = local_1b8;
  if (*(int *)local_1b8.field1 != -1) {
    if (*(int *)local_1b8.field1 != 0) {
      LOCK();
      *(int *)local_1b8.field1 = *(int *)local_1b8.field1 + -1;
      local_31 = *(int *)local_1b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4681;
    }
    iVar1 = *(int *)(local_1b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d4660:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d4660;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d4681:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_1d8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_1e0,"CVmEdTravelerModeDialog","VmConfig",0);
  FUN_1000341d0(&local_1d8,&local_1e0);
  QVariant::QVariant(&local_1d0,(QStringList *)&local_1d8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d472c;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1004d472c:
  AVar5 = local_1d8;
  if (*(int *)local_1d8.field1 != -1) {
    if (*(int *)local_1d8.field1 != 0) {
      LOCK();
      *(int *)local_1d8.field1 = *(int *)local_1d8.field1 + -1;
      local_31 = *(int *)local_1d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d47c1;
    }
    iVar1 = *(int *)(local_1d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d47a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d47a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d47c1:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_1f8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_200,"CVmEdTravelerModeDialog",
             "Settings.TravelOptions.Condition.EnterBetteryThreshold",0);
  FUN_1000341d0(&local_1f8,&local_200);
  QVariant::QVariant(&local_1f0,(QStringList *)&local_1f8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1f0);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d486c;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_1004d486c:
  AVar5 = local_1f8;
  if (*(int *)local_1f8.field1 != -1) {
    if (*(int *)local_1f8.field1 != 0) {
      LOCK();
      *(int *)local_1f8.field1 = *(int *)local_1f8.field1 + -1;
      local_31 = *(int *)local_1f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d4901;
    }
    iVar1 = *(int *)(local_1f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_1f8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_1f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_1f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d48e0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d48e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d4901:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_208,"CVmEdTravelerModeDialog",
             "In Travel Mode, @GUEST_TYPE@ uses less energy to save battery power, and adjusts settings to connect to public networks."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d496b;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_1004d496b:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_210,"CVmEdTravelerModeDialog","Enter automatically:",0)
  ;
  QLabel::setText(pQVar2);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d49d5;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1004d49d5:
  pQVar2 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_218,"CVmEdTravelerModeDialog","Quit automatically:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      UNLOCK();
      if (*(int *)local_218 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_218,2,8);
  }
  return;
}

