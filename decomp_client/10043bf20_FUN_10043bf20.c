
void FUN_10043bf20(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_140;
  AnonymousUnion0 local_138;
  QVariant local_130;
  QString local_120;
  QVariant local_118;
  QArrayData *local_108;
  AnonymousUnion0 local_100;
  QVariant local_f8;
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  AnonymousUnion0 local_b8;
  QVariant local_b0;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  AnonymousUnion0 local_78;
  QVariant local_70;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdUrlHandlingDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043bf97;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10043bf97:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_48,"CVmEdUrlHandlingDialog","Newsgroups:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043bff8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10043bff8:
  pcVar3 = *(char **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_60,"CVmEdUrlHandlingDialog",
             "Settings.Tools.SharedApplications.WebApplications.Newsgroups",0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c076;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10043c076:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x18);
  local_78.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_80,"CVmEdUrlHandlingDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10043c10a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10043c10a:
  AVar5 = local_78;
  if (*(int *)local_78.field1 != -1) {
    if (*(int *)local_78.field1 != 0) {
      LOCK();
      *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
      local_31 = *(int *)local_78.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c191;
    }
    iVar1 = *(int *)(local_78.field1 + 0xc);
    if (iVar1 != *(int *)(local_78.field1 + 8)) {
      lVar8 = (long)*(int *)(local_78.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_78.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10043c170:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10043c170;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10043c191:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_88,"CVmEdUrlHandlingDialog","FTP:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c1f2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10043c1f2:
  pcVar3 = *(char **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_a0,"CVmEdUrlHandlingDialog",
             "Settings.Tools.SharedApplications.WebApplications.FtpClient",0);
  QVariant::QVariant(&local_98,&local_a0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c282;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10043c282:
  pcVar3 = *(char **)(param_1 + 0x28);
  local_b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_c0,"CVmEdUrlHandlingDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10043c32d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10043c32d:
  AVar5 = local_b8;
  if (*(int *)local_b8.field1 != -1) {
    if (*(int *)local_b8.field1 != 0) {
      LOCK();
      *(int *)local_b8.field1 = *(int *)local_b8.field1 + -1;
      local_31 = *(int *)local_b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c3c1;
    }
    iVar1 = *(int *)(local_b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10043c3a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10043c3a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10043c3c1:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_c8,"CVmEdUrlHandlingDialog","RSS:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c42b;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10043c42b:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_d0,"CVmEdUrlHandlingDialog","Remote Access:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c495;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10043c495:
  pcVar3 = *(char **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_e8,"CVmEdUrlHandlingDialog",
             "Settings.Tools.SharedApplications.WebApplications.RemoteAccess",0);
  QVariant::QVariant(&local_e0,&local_e8);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c525;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_10043c525:
  pcVar3 = *(char **)(param_1 + 0x40);
  local_100.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_108,"CVmEdUrlHandlingDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_10043c5d0;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10043c5d0:
  AVar5 = local_100;
  if (*(int *)local_100.field1 != -1) {
    if (*(int *)local_100.field1 != 0) {
      LOCK();
      *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
      local_31 = *(int *)local_100.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c661;
    }
    iVar1 = *(int *)(local_100.field1 + 0xc);
    if (iVar1 != *(int *)(local_100.field1 + 8)) {
      lVar8 = (long)*(int *)(local_100.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_100.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10043c640:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10043c640;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10043c661:
  pcVar3 = *(char **)(param_1 + 0x48);
  QCoreApplication::translate
            ((char *)&local_120,"CVmEdUrlHandlingDialog",
             "Settings.Tools.SharedApplications.WebApplications.Rss",0);
  QVariant::QVariant(&local_118,&local_120);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_118);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c6f1;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_10043c6f1:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_138.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_140,"CVmEdUrlHandlingDialog","VmConfig",0);
  FUN_1000341d0(&local_138,&local_140);
  QVariant::QVariant(&local_130,(QStringList *)&local_138.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043c79c;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10043c79c:
  AVar5 = local_138;
  if (*(int *)local_138.field1 != -1) {
    if (*(int *)local_138.field1 != 0) {
      LOCK();
      *(int *)local_138.field1 = *(int *)local_138.field1 + -1;
      UNLOCK();
      if (*(int *)local_138.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_138.field1 + 0xc);
    if (iVar1 != *(int *)(local_138.field1 + 8)) {
      lVar8 = (long)*(int *)(local_138.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_138.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10043c810:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10043c810;
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

