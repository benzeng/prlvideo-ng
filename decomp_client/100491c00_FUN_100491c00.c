
void FUN_100491c00(long param_1,QString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  QString *pQVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  QArrayData *local_130;
  QString local_128;
  QVariant local_120;
  QArrayData *local_110;
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
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdSerialDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491c77;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100491c77:
  QComboBox::clear();
  puVar5 = PTR_shared_null_1021e15e8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_50,"CVmEdSerialDialog","Server",0);
  FUN_1000341d0(&local_48,&local_50);
  QCoreApplication::translate((char *)&local_58,"CVmEdSerialDialog","Client",0);
  FUN_1000341d0(&local_48);
  QComboBox::insertItems((int)uVar2,(QStringList *)0x0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491d25;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100491d25:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491d55;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100491d55:
  pDVar8 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491de1;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar10 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100491dc0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100491dc0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100491de1:
  pcVar3 = *(char **)(param_1 + 0x10);
  local_70.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_78,"CVmEdSerialDialog","VmConfig",0);
  FUN_1000341d0(&local_70,&local_78);
  QVariant::QVariant(&local_68,(QStringList *)&local_70.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491e6e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100491e6e:
  AVar6 = local_70;
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491f01;
    }
    iVar1 = *(int *)(local_70.field1 + 0xc);
    if (iVar1 != *(int *)(local_70.field1 + 8)) {
      lVar10 = (long)*(int *)(local_70.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_70.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100491ee0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100491ee0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100491f01:
  pcVar3 = *(char **)(param_1 + 0x10);
  local_90.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_98,"CVmEdSerialDialog","DYNAMIC_PART.SocketMode",0);
  FUN_1000341d0(&local_90,&local_98);
  QVariant::QVariant(&local_88,(QStringList *)&local_90.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100491fa3;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100491fa3:
  AVar6 = local_90;
  if (*(int *)local_90.field1 != -1) {
    if (*(int *)local_90.field1 != 0) {
      LOCK();
      *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
      local_31 = *(int *)local_90.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492031;
    }
    iVar1 = *(int *)(local_90.field1 + 0xc);
    if (iVar1 != *(int *)(local_90.field1 + 8)) {
      lVar10 = (long)*(int *)(local_90.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_90.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100492010:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100492010;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100492031:
  pcVar3 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_b0,"CVmEdSerialDialog","initSerialPortModeCombo",0);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004920c1;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1004920c1:
  pQVar4 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_b8,"CVmEdSerialDialog","Mode:",0);
  QLabel::setText(pQVar4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049212b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10049212b:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_d0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_d8,"CVmEdSerialDialog","VmConfig",0);
  FUN_1000341d0(&local_d0,&local_d8);
  QVariant::QVariant(&local_c8,(QStringList *)&local_d0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004921d6;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004921d6:
  AVar6 = local_d0;
  if (*(int *)local_d0.field1 != -1) {
    if (*(int *)local_d0.field1 != 0) {
      LOCK();
      *(int *)local_d0.field1 = *(int *)local_d0.field1 + -1;
      local_31 = *(int *)local_d0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492261;
    }
    iVar1 = *(int *)(local_d0.field1 + 0xc);
    if (iVar1 != *(int *)(local_d0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_d0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_d0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100492240:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100492240;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100492261:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_f0.field1 = (Data *)puVar5;
  QCoreApplication::translate((char *)&local_f8,"CVmEdSerialDialog","DYNAMIC_PART.SystemName",0);
  FUN_1000341d0(&local_f0,&local_f8);
  QCoreApplication::translate
            ((char *)&local_100,"CVmEdSerialDialog","DYNAMIC_PART.UserFriendlyName",0);
  FUN_1000341d0(&local_f0,&local_100);
  QCoreApplication::translate((char *)&local_108,"CVmEdSerialDialog","DYNAMIC_PART.EmulatedType",0);
  FUN_1000341d0(&local_f0,&local_108);
  QCoreApplication::translate((char *)&local_110,"CVmEdSerialDialog","DYNAMIC_PART.Connected",0);
  FUN_1000341d0(&local_f0,&local_110);
  QVariant::QVariant(&local_e8,(QStringList *)&local_f0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004923ab;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004923ab:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004923e1;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004923e1:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492417;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100492417:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049244d;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10049244d:
  AVar6 = local_f0;
  if (*(int *)local_f0.field1 != -1) {
    if (*(int *)local_f0.field1 != 0) {
      LOCK();
      *(int *)local_f0.field1 = *(int *)local_f0.field1 + -1;
      local_31 = *(int *)local_f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004924e1;
    }
    iVar1 = *(int *)(local_f0.field1 + 0xc);
    if (iVar1 != *(int *)(local_f0.field1 + 8)) {
      lVar10 = (long)*(int *)(local_f0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_f0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004924c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004924c0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004924e1:
  pcVar3 = *(char **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_128,"CVmEdSerialDialog","initFileDevSelectorWidget",0);
  QVariant::QVariant(&local_120,&local_128);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_120);
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_31 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492571;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_100492571:
  pQVar4 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_130,"CVmEdSerialDialog","Source:",0);
  QLabel::setText(pQVar4);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      UNLOCK();
      if (*(int *)local_130 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_130,2,8);
  }
  return;
}

