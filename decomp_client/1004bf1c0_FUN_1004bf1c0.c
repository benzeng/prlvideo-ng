
void FUN_1004bf1c0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_128;
  AnonymousUnion0 local_120;
  QVariant local_118;
  QArrayData *local_108;
  AnonymousUnion0 local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  AnonymousUnion0 local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  AnonymousUnion0 local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  AnonymousUnion0 local_90;
  QVariant local_88;
  QArrayData *local_78;
  AnonymousUnion0 local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdPrint","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf237;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004bf237:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdPrint","Default printer and other available Mac printers:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf298;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004bf298:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_50,"CVmEdPrint","Open System Preferences...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf2f9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004bf2f9:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_58,"CVmEdPrint","Show page setup options before printing",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf35a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004bf35a:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x58);
  local_70.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_78,"CVmEdPrint","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004bf3ee;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004bf3ee:
  AVar5 = local_70;
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf481;
    }
    iVar1 = *(int *)(local_70.field1 + 0xc);
    if (iVar1 != *(int *)(local_70.field1 + 8)) {
      lVar8 = (long)*(int *)(local_70.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_70.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bf460:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bf460;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bf481:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_90.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_98,"CVmEdPrint","Settings.VirtualPrintersInfo.ShowHostPrinterUI",0);
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
      if ((bool)local_31) goto LAB_1004bf523;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004bf523:
  AVar5 = local_90;
  if (*(int *)local_90.field1 != -1) {
    if (*(int *)local_90.field1 != 0) {
      LOCK();
      *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
      local_31 = *(int *)local_90.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf5b1;
    }
    iVar1 = *(int *)(local_90.field1 + 0xc);
    if (iVar1 != *(int *)(local_90.field1 + 8)) {
      lVar8 = (long)*(int *)(local_90.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_90.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bf590:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bf590;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bf5b1:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_a0,"CVmEdPrint","Share Mac printers with @GUEST_VER@",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf61b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004bf61b:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_c0,"CVmEdPrint","VmConfig",0);
  FUN_1000341d0(&local_b8,&local_c0);
  QVariant::QVariant(&local_b0,(QStringList *)&local_b8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf6c6;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004bf6c6:
  AVar5 = local_b8;
  if (*(int *)local_b8.field1 != -1) {
    if (*(int *)local_b8.field1 != 0) {
      LOCK();
      *(int *)local_b8.field1 = *(int *)local_b8.field1 + -1;
      local_31 = *(int *)local_b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf751;
    }
    iVar1 = *(int *)(local_b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bf730:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bf730;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bf751:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_d8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdPrint","Settings.VirtualPrintersInfo.UseHostPrinters",0);
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
      if ((bool)local_31) goto LAB_1004bf7fc;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004bf7fc:
  AVar5 = local_d8;
  if (*(int *)local_d8.field1 != -1) {
    if (*(int *)local_d8.field1 != 0) {
      LOCK();
      *(int *)local_d8.field1 = *(int *)local_d8.field1 + -1;
      local_31 = *(int *)local_d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf891;
    }
    iVar1 = *(int *)(local_d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bf870:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bf870;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bf891:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_e8,"CVmEdPrint","Synchronize default printer",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf8fb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004bf8fb:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_100.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_108,"CVmEdPrint","VmConfig",0);
  FUN_1000341d0(&local_100,&local_108);
  QVariant::QVariant(&local_f8,(QStringList *)&local_100.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bf9a6;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004bf9a6:
  AVar5 = local_100;
  if (*(int *)local_100.field1 != -1) {
    if (*(int *)local_100.field1 != 0) {
      LOCK();
      *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
      local_31 = *(int *)local_100.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bfa31;
    }
    iVar1 = *(int *)(local_100.field1 + 0xc);
    if (iVar1 != *(int *)(local_100.field1 + 8)) {
      lVar8 = (long)*(int *)(local_100.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_100.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bfa10:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bfa10;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004bfa31:
  pcVar3 = *(char **)(param_1 + 0x68);
  local_120.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_128,"CVmEdPrint","Settings.VirtualPrintersInfo.SyncDefaultPrinter",0);
  FUN_1000341d0(&local_120,&local_128);
  QVariant::QVariant(&local_118,(QStringList *)&local_120.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_118);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004bfadc;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004bfadc:
  AVar5 = local_120;
  if (*(int *)local_120.field1 != -1) {
    if (*(int *)local_120.field1 != 0) {
      LOCK();
      *(int *)local_120.field1 = *(int *)local_120.field1 + -1;
      UNLOCK();
      if (*(int *)local_120.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_120.field1 + 0xc);
    if (iVar1 != *(int *)(local_120.field1 + 8)) {
      lVar8 = (long)*(int *)(local_120.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_120.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004bfb50:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004bfb50;
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

