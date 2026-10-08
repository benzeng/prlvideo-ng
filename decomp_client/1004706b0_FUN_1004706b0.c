
void FUN_1004706b0(long param_1,QString *param_2)

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
  QArrayData *local_90;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdModalityDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470727;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100470727:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_48,"CVmEdModalityDialog","Opacity:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470788;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100470788:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x30);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_68,"CVmEdModalityDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10047081c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10047081c:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004708a1;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100470880:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100470880;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004708a1:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_80.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_88,"CVmEdModalityDialog","Settings.Tools.Modality.Opacity",0);
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
      if ((bool)local_31) goto LAB_10047092e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10047092e:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004709c1;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004709a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004709a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004709c1:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_90,"CVmEdModalityDialog","Transparent",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470a2b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100470a2b:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_98,"CVmEdModalityDialog","Opaque",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470a95;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100470a95:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_a0,"CVmEdModalityDialog","Keep on top of other windows",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470aff;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100470aff:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_c0,"CVmEdModalityDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100470baa;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100470baa:
  AVar5 = local_b8;
  if (*(int *)local_b8.field1 != -1) {
    if (*(int *)local_b8.field1 != 0) {
      LOCK();
      *(int *)local_b8.field1 = *(int *)local_b8.field1 + -1;
      local_31 = *(int *)local_b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470c41;
    }
    iVar1 = *(int *)(local_b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100470c20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100470c20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100470c41:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_d8.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdModalityDialog","Settings.Tools.Modality.StayOnTop",0);
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
      if ((bool)local_31) goto LAB_100470cec;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100470cec:
  AVar5 = local_d8;
  if (*(int *)local_d8.field1 != -1) {
    if (*(int *)local_d8.field1 != 0) {
      LOCK();
      *(int *)local_d8.field1 = *(int *)local_d8.field1 + -1;
      local_31 = *(int *)local_d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470d81;
    }
    iVar1 = *(int *)(local_d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100470d60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100470d60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100470d81:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_e8,"CVmEdModalityDialog","Capture keyboard and mouse on click",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470deb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100470deb:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_100.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_108,"CVmEdModalityDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100470e96;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100470e96:
  AVar5 = local_100;
  if (*(int *)local_100.field1 != -1) {
    if (*(int *)local_100.field1 != 0) {
      LOCK();
      *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
      local_31 = *(int *)local_100.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100470f21;
    }
    iVar1 = *(int *)(local_100.field1 + 0xc);
    if (iVar1 != *(int *)(local_100.field1 + 8)) {
      lVar8 = (long)*(int *)(local_100.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_100.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100470f00:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100470f00;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100470f21:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_120.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_128,"CVmEdModalityDialog","Settings.Tools.Modality.CaptureMouseClicks",0
            );
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
      if ((bool)local_31) goto LAB_100470fcc;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100470fcc:
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
LAB_100471040:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100471040;
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

