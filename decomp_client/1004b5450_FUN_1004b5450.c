
void FUN_1004b5450(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  AnonymousUnion0 local_148;
  QVariant local_140;
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
  AnonymousUnion0 local_88;
  QVariant local_80;
  QArrayData *local_70;
  AnonymousUnion0 local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdUsbDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b54c7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004b54c7:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_48,"CVmEdUsbDialog","USB Connection Preferences...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5528;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004b5528:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_50,"CVmEdUsbDialog","Enable USB 3.0",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5589;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004b5589:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x38);
  local_68.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_70,"CVmEdUsbDialog","VmConfig",0);
  FUN_1000341d0(&local_68,&local_70);
  QVariant::QVariant(&local_60,(QStringList *)&local_68.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b561d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004b561d:
  AVar5 = local_68;
  if (*(int *)local_68.field1 != -1) {
    if (*(int *)local_68.field1 != 0) {
      LOCK();
      *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
      local_31 = *(int *)local_68.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b56b1;
    }
    iVar1 = *(int *)(local_68.field1 + 0xc);
    if (iVar1 != *(int *)(local_68.field1 + 8)) {
      lVar8 = (long)*(int *)(local_68.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_68.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b5690:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b5690;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b56b1:
  pcVar3 = *(char **)(param_1 + 0x38);
  local_88.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdUsbDialog","Settings.UsbController.XhcEnabled",0);
  FUN_1000341d0(&local_88,&local_90);
  QVariant::QVariant(&local_80,(QStringList *)&local_88.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_80);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b574a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004b574a:
  AVar5 = local_88;
  if (*(int *)local_88.field1 != -1) {
    if (*(int *)local_88.field1 != 0) {
      LOCK();
      *(int *)local_88.field1 = *(int *)local_88.field1 + -1;
      local_31 = *(int *)local_88.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b57d1;
    }
    iVar1 = *(int *)(local_88.field1 + 0xc);
    if (iVar1 != *(int *)(local_88.field1 + 8)) {
      lVar8 = (long)*(int *)(local_88.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_88.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b57b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b57b0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b57d1:
  local_98 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x40));
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5825;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004b5825:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_b0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_b8,"CVmEdUsbDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004b58d0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004b58d0:
  AVar5 = local_b0;
  if (*(int *)local_b0.field1 != -1) {
    if (*(int *)local_b0.field1 != 0) {
      LOCK();
      *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
      local_31 = *(int *)local_b0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5961;
    }
    iVar1 = *(int *)(local_b0.field1 + 0xc);
    if (iVar1 != *(int *)(local_b0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b5940:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b5940;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b5961:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_d0.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdUsbDialog","Settings.UsbController.EnabledDevices",0);
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
      if ((bool)local_31) goto LAB_1004b5a0c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004b5a0c:
  AVar5 = local_d0;
  if (*(int *)local_d0.field1 != -1) {
    if (*(int *)local_d0.field1 != 0) {
      LOCK();
      *(int *)local_d0.field1 = *(int *)local_d0.field1 + -1;
      local_31 = *(int *)local_d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5aa1;
    }
    iVar1 = *(int *)(local_d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_d0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b5a80:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b5a80;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b5aa1:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_e0,"CVmEdUsbDialog","Web cameras",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5b0b;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004b5b0b:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_f8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_100,"CVmEdUsbDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004b5bb6;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004b5bb6:
  AVar5 = local_f8;
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5c41;
    }
    iVar1 = *(int *)(local_f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_f8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b5c20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b5c20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b5c41:
  pcVar3 = *(char **)(param_1 + 0x50);
  local_118.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_120,"CVmEdUsbDialog","Settings.SharedCamera.Enabled",0)
  ;
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
      if ((bool)local_31) goto LAB_1004b5cec;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004b5cec:
  AVar5 = local_118;
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_31 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5d81;
    }
    iVar1 = *(int *)(local_118.field1 + 0xc);
    if (iVar1 != *(int *)(local_118.field1 + 8)) {
      lVar8 = (long)*(int *)(local_118.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_118.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b5d60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b5d60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b5d81:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_128,"CVmEdUsbDialog","Allow external devices:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5deb;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004b5deb:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_130,"CVmEdUsbDialog","Bluetooth devices",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5e55;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004b5e55:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_148.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_150,"CVmEdUsbDialog","VmConfig",0);
  FUN_1000341d0(&local_148,&local_150);
  QVariant::QVariant(&local_140,(QStringList *)&local_148.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_140);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5f00;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004b5f00:
  AVar5 = local_148;
  if (*(int *)local_148.field1 != -1) {
    if (*(int *)local_148.field1 != 0) {
      LOCK();
      *(int *)local_148.field1 = *(int *)local_148.field1 + -1;
      local_31 = *(int *)local_148.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b5f91;
    }
    iVar1 = *(int *)(local_148.field1 + 0xc);
    if (iVar1 != *(int *)(local_148.field1 + 8)) {
      lVar8 = (long)*(int *)(local_148.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_148.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b5f70:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b5f70;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b5f91:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_168.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_170,"CVmEdUsbDialog","Settings.SharedBluetooth.Enabled",0);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b603c;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1004b603c:
  AVar5 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      UNLOCK();
      if (*(int *)local_168.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar8 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004b60b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004b60b0;
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

