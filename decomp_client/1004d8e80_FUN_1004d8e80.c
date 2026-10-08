
void FUN_1004d8e80(long param_1)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QVariant local_148;
  QArrayData *local_138;
  AnonymousUnion0 local_130;
  QVariant local_128;
  QArrayData *local_118;
  QString local_110;
  QVariant local_108;
  QString local_f8;
  QVariant local_f0;
  QString local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  AnonymousUnion0 local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  AnonymousUnion0 local_a0;
  QVariant local_98;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar2 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_40,"CVmEdMaintenance",
             "Schedule Windows maintenance, such as downloading and installing updates. When enabled, updates are blocked at all other times."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d8ef8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d8ef8:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_48,"CVmEdMaintenance","Start maintenance",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d8f59;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004d8f59:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x38);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_68,"CVmEdMaintenance","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004d8fed;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004d8fed:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d9081;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d9060:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d9060;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d9081:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_80.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_88,"CVmEdMaintenance","Settings.Tools.WinMaintenance.Enabled",0);
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
      if ((bool)local_31) goto LAB_1004d910e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004d910e:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d91a1;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d9180:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d9180;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d91a1:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_a0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_a8,"CVmEdMaintenance","VmConfig",0);
  FUN_1000341d0(&local_a0,&local_a8);
  QVariant::QVariant(&local_98,(QStringList *)&local_a0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d924c;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004d924c:
  AVar5 = local_a0;
  if (*(int *)local_a0.field1 != -1) {
    if (*(int *)local_a0.field1 != 0) {
      LOCK();
      *(int *)local_a0.field1 = *(int *)local_a0.field1 + -1;
      local_31 = *(int *)local_a0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d92e1;
    }
    iVar1 = *(int *)(local_a0.field1 + 0xc);
    if (iVar1 != *(int *)(local_a0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_a0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_a0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d92c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d92c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d92e1:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_c0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_c8,"CVmEdMaintenance","Settings.Tools.WinMaintenance.ScheduleDay",0);
  FUN_1000341d0(&local_c0,&local_c8);
  QVariant::QVariant(&local_b8,(QStringList *)&local_c0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d938c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004d938c:
  AVar5 = local_c0;
  if (*(int *)local_c0.field1 != -1) {
    if (*(int *)local_c0.field1 != 0) {
      LOCK();
      *(int *)local_c0.field1 = *(int *)local_c0.field1 + -1;
      local_31 = *(int *)local_c0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d9421;
    }
    iVar1 = *(int *)(local_c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_c0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d9400:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d9400;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d9421:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdMaintenance","initMaintenanceScheduleDayComboBox",0);
  QVariant::QVariant(&local_d8,&local_e0);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d94b1;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1004d94b1:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_f8,"CVmEdMaintenance","getMaintenanceScheduleDayComboBoxValue",0);
  QVariant::QVariant(&local_f0,&local_f8);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d9541;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1004d9541:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_110,"CVmEdMaintenance","setMaintenanceScheduleDayComboBoxValue",0);
  QVariant::QVariant(&local_108,&local_110);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_108);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d95d1;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_1004d95d1:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_118,"CVmEdMaintenance","at",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d963b;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004d963b:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_130.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_138,"CVmEdMaintenance","VmConfig",0);
  FUN_1000341d0(&local_130,&local_138);
  QVariant::QVariant(&local_128,(QStringList *)&local_130.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_128);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d96e6;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004d96e6:
  AVar5 = local_130;
  if (*(int *)local_130.field1 != -1) {
    if (*(int *)local_130.field1 != 0) {
      LOCK();
      *(int *)local_130.field1 = *(int *)local_130.field1 + -1;
      local_31 = *(int *)local_130.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d9771;
    }
    iVar1 = *(int *)(local_130.field1 + 0xc);
    if (iVar1 != *(int *)(local_130.field1 + 8)) {
      lVar8 = (long)*(int *)(local_130.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_130.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d9750:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d9750;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d9771:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_150.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_158,"CVmEdMaintenance","Settings.Tools.WinMaintenance.ScheduleTime",0);
  FUN_1000341d0(&local_150,&local_158);
  QVariant::QVariant(&local_148,(QStringList *)&local_150.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d981c;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004d981c:
  AVar5 = local_150;
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_31 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d98b1;
    }
    iVar1 = *(int *)(local_150.field1 + 0xc);
    if (iVar1 != *(int *)(local_150.field1 + 8)) {
      lVar8 = (long)*(int *)(local_150.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_150.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004d9890:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004d9890;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004d98b1:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_160,"CVmEdMaintenance",
             "For Windows maintenance to start as scheduled, your Mac must be on and connected to power and Windows must be running. Once maintenance tasks are completed, Windows may restart."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d991b;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004d991b:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_168,"CVmEdMaintenance",
             "For Windows maintenance to start as scheduled, your Mac must be on and Windows must be running. Once maintenance tasks are completed, Windows may restart."
             ,0);
  QLabel::setText(pQVar2);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      UNLOCK();
      if (*(int *)local_168 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_168,2,8);
  }
  return;
}

