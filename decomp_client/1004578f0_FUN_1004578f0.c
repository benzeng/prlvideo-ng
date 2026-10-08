
void FUN_1004578f0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  AnonymousUnion0 local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  AnonymousUnion0 local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
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
  
  QCoreApplication::translate((char *)&local_40,"CVmEdCdRomDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457967;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100457967:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_48,"CVmEdCdRomDialog","Source:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004579c8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004579c8:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x18);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_68,"CVmEdCdRomDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100457a5c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100457a5c:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457ae1;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100457ac0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100457ac0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100457ae1:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_80.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_88,"CVmEdCdRomDialog","DYNAMIC_PART.SystemName",0);
  FUN_1000341d0(&local_80,&local_88);
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdCdRomDialog","DYNAMIC_PART.UserFriendlyName",0);
  FUN_1000341d0(&local_80,&local_90);
  QCoreApplication::translate((char *)&local_98,"CVmEdCdRomDialog","DYNAMIC_PART.EmulatedType",0);
  FUN_1000341d0(&local_80,&local_98);
  QCoreApplication::translate((char *)&local_a0,"CVmEdCdRomDialog","DYNAMIC_PART.Connected",0);
  FUN_1000341d0(&local_80,&local_a0);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457c0a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100457c0a:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457c40;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100457c40:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457c76;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100457c76:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457ca6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100457ca6:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457d31;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100457d10:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100457d10;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100457d31:
  pcVar3 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_b8,"CVmEdCdRomDialog","initFileDevSelectorWidget",0);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457dc1;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100457dc1:
  local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x40));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457e15;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100457e15:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_c8,"CVmEdCdRomDialog","Location:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457e7f;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100457e7f:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_e0.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_e8,"CVmEdCdRomDialog","VmConfig",0);
  FUN_1000341d0(&local_e0,&local_e8);
  QVariant::QVariant(&local_d8,(QStringList *)&local_e0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457f2a;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100457f2a:
  AVar5 = local_e0;
  if (*(int *)local_e0.field1 != -1) {
    if (*(int *)local_e0.field1 != 0) {
      LOCK();
      *(int *)local_e0.field1 = *(int *)local_e0.field1 + -1;
      local_31 = *(int *)local_e0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100457fc1;
    }
    iVar1 = *(int *)(local_e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_e0.field1 + 8)) {
      lVar8 = (long)*(int *)(local_e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100457fa0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100457fa0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100457fc1:
  pcVar3 = *(char **)(param_1 + 0x60);
  local_100.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_108,"CVmEdCdRomDialog","DYNAMIC_PART.StackIndex",0);
  FUN_1000341d0(&local_100,&local_108);
  QCoreApplication::translate((char *)&local_110,"CVmEdCdRomDialog","DYNAMIC_PART.InterfaceType",0);
  FUN_1000341d0(&local_100,&local_110);
  QCoreApplication::translate((char *)&local_118,"CVmEdCdRomDialog","DYNAMIC_PART.SubType",0);
  FUN_1000341d0(&local_100,&local_118);
  QVariant::QVariant(&local_f8,(QStringList *)&local_100.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004580d6;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004580d6:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045810c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10045810c:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100458142;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100458142:
  AVar5 = local_100;
  if (*(int *)local_100.field1 != -1) {
    if (*(int *)local_100.field1 != 0) {
      LOCK();
      *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
      UNLOCK();
      if (*(int *)local_100.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_100.field1 + 0xc);
    if (iVar1 != *(int *)(local_100.field1 + 8)) {
      lVar8 = (long)*(int *)(local_100.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_100.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004581b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004581b0;
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

