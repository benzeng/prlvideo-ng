
void FUN_10046da60(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  AnonymousUnion0 AVar8;
  long lVar9;
  QString local_1a8;
  QVariant local_1a0;
  QArrayData *local_190;
  AnonymousUnion0 local_188;
  QVariant local_180;
  QArrayData *local_170;
  AnonymousUnion0 local_168;
  QVariant local_160;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  QVariant local_130;
  QArrayData *local_120;
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
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
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
  
  QCoreApplication::translate((char *)&local_40,"CVmEdHardDiskDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046dad7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10046dad7:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_48,"CVmEdHardDiskDialog","Location:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046db38;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10046db38:
  AVar8 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x28);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_68,"CVmEdHardDiskDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10046dbcc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10046dbcc:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046dc51;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar9 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10046dc30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10046dc30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10046dc51:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_80.field1 = AVar8.field1;
  QCoreApplication::translate((char *)&local_88,"CVmEdHardDiskDialog","DYNAMIC_PART.StackIndex",0);
  FUN_1000341d0(&local_80,&local_88);
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdHardDiskDialog","DYNAMIC_PART.InterfaceType",0);
  FUN_1000341d0(&local_80,&local_90);
  QCoreApplication::translate((char *)&local_98,"CVmEdHardDiskDialog","DYNAMIC_PART.SubType",0);
  FUN_1000341d0(&local_80,&local_98);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046dd48;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10046dd48:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046dd7e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10046dd7e:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046ddae;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10046ddae:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046de41;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar9 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10046de20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10046de20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10046de41:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_a0,"CVmEdHardDiskDialog","Edit...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046deab;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10046deab:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_a8,"CVmEdHardDiskDialog","Compress...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046df15;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10046df15:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_b0,"CVmEdHardDiskDialog","Source:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046df7f;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10046df7f:
  puVar4 = PTR_shared_null_1021e1288;
  local_b8 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x78));
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046dfd3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10046dfd3:
  pQVar2 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_c0,"CVmEdHardDiskDialog","Edit Partitions...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e040;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10046e040:
  pQVar2 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate((char *)&local_c8,"CVmEdHardDiskDialog","%1 Disk, %2 MB, %3",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e0ad;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10046e0ad:
  pcVar3 = *(char **)(param_1 + 0xb0);
  local_e0.field1 = AVar8.field1;
  QCoreApplication::translate((char *)&local_e8,"CVmEdHardDiskDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10046e15b;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10046e15b:
  AVar5 = local_e0;
  if (*(int *)local_e0.field1 != -1) {
    if (*(int *)local_e0.field1 != 0) {
      LOCK();
      *(int *)local_e0.field1 = *(int *)local_e0.field1 + -1;
      local_31 = *(int *)local_e0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e21b;
    }
    iVar1 = *(int *)(local_e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_e0.field1 + 8)) {
      lVar9 = (long)*(int *)(local_e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10046e1f0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10046e1f0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
    AVar8 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_10046e21b:
  pcVar3 = *(char **)(param_1 + 0xb0);
  local_100 = AVar8;
  QCoreApplication::translate((char *)&local_108,"CVmEdHardDiskDialog","DYNAMIC_PART.SystemName",0);
  FUN_1000341d0(&local_100,&local_108);
  QCoreApplication::translate
            ((char *)&local_110,"CVmEdHardDiskDialog","DYNAMIC_PART.UserFriendlyName",0);
  FUN_1000341d0(&local_100,&local_110);
  QCoreApplication::translate
            ((char *)&local_118,"CVmEdHardDiskDialog","DYNAMIC_PART.EmulatedType",0);
  FUN_1000341d0(&local_100,&local_118);
  QCoreApplication::translate((char *)&local_120,"CVmEdHardDiskDialog","DYNAMIC_PART.Connected",0);
  FUN_1000341d0(&local_100,&local_120);
  QVariant::QVariant(&local_f8,(QStringList *)&local_100.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e368;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10046e368:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e39e;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10046e39e:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e3d4;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10046e3d4:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e40a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10046e40a:
  AVar5 = local_100;
  if (*(int *)local_100.field1 != -1) {
    if (*(int *)local_100.field1 != 0) {
      LOCK();
      *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
      local_31 = *(int *)local_100.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e4ab;
    }
    iVar1 = *(int *)(local_100.field1 + 0xc);
    if (iVar1 != *(int *)(local_100.field1 + 8)) {
      lVar9 = (long)*(int *)(local_100.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_100.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10046e480:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10046e480;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
    AVar8 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_10046e4ab:
  pcVar3 = *(char **)(param_1 + 0xb0);
  QCoreApplication::translate
            ((char *)&local_138,"CVmEdHardDiskDialog","initFileDevSelectorWidget",0);
  QVariant::QVariant(&local_130,&local_138);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e53e;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_10046e53e:
  local_140 = (QArrayData *)puVar4;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0xc0));
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e58e;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10046e58e:
  pQVar2 = *(QString **)(param_1 + 200);
  QCoreApplication::translate((char *)&local_148,"CVmEdHardDiskDialog","Free Space:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e5fb;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10046e5fb:
  pQVar2 = *(QString **)(param_1 + 0xd0);
  QCoreApplication::translate
            ((char *)&local_150,"CVmEdHardDiskDialog","Real time virtual disk optimization",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e668;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10046e668:
  pcVar3 = *(char **)(param_1 + 0xd0);
  local_168 = AVar8;
  QCoreApplication::translate((char *)&local_170,"CVmEdHardDiskDialog","VmConfig",0);
  FUN_1000341d0(&local_168,&local_170);
  QVariant::QVariant(&local_160,(QStringList *)&local_168.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e716;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10046e716:
  AVar5 = local_168;
  if (*(int *)local_168.field1 != -1) {
    if (*(int *)local_168.field1 != 0) {
      LOCK();
      *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
      local_31 = *(int *)local_168.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e7a1;
    }
    iVar1 = *(int *)(local_168.field1 + 0xc);
    if (iVar1 != *(int *)(local_168.field1 + 8)) {
      lVar9 = (long)*(int *)(local_168.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_168.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10046e780:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10046e780;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10046e7a1:
  pcVar3 = *(char **)(param_1 + 0xd0);
  local_188 = AVar8;
  QCoreApplication::translate
            ((char *)&local_190,"CVmEdHardDiskDialog","DYNAMIC_PART.OnlineCompactMode",0);
  FUN_1000341d0(&local_188,&local_190);
  QVariant::QVariant(&local_180,(QStringList *)&local_188.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e84f;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10046e84f:
  AVar8 = local_188;
  if (*(int *)local_188.field1 != -1) {
    if (*(int *)local_188.field1 != 0) {
      LOCK();
      *(int *)local_188.field1 = *(int *)local_188.field1 + -1;
      local_31 = *(int *)local_188.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046e8e1;
    }
    iVar1 = *(int *)(local_188.field1 + 0xc);
    if (iVar1 != *(int *)(local_188.field1 + 8)) {
      lVar9 = (long)*(int *)(local_188.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_188.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10046e8c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10046e8c0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar8.field1);
  }
LAB_10046e8e1:
  pcVar3 = *(char **)(param_1 + 0xd0);
  QCoreApplication::translate
            ((char *)&local_1a8,"CVmEdHardDiskDialog","setVirtualDiskOptimization",0);
  QVariant::QVariant(&local_1a0,&local_1a8);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_1a0);
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_1a8.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
  return;
}

