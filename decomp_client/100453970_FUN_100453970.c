
void FUN_100453970(long param_1,QString *param_2)

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
  AnonymousUnion0 AVar10;
  long lVar11;
  QArrayData *local_2a0;
  AnonymousUnion0 local_298;
  QVariant local_290;
  QArrayData *local_280;
  AnonymousUnion0 local_278;
  QVariant local_270;
  QArrayData *local_260;
  QArrayData *local_258;
  AnonymousUnion0 local_250;
  QVariant local_248;
  QArrayData *local_238;
  AnonymousUnion0 local_230;
  QVariant local_228;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  AnonymousUnion0 local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  AnonymousUnion0 local_1c0;
  QVariant local_1b8;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QVariant local_190;
  QString local_180;
  QVariant local_178;
  QArrayData *local_168;
  AnonymousUnion0 local_160;
  QVariant local_158;
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  AnonymousUnion0 local_118;
  QVariant local_110;
  QArrayData *local_100;
  AnonymousUnion0 local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QString local_d8;
  QVariant local_d0;
  QString local_c0;
  QVariant local_b8;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  AnonymousUnion0 local_88;
  QVariant local_80;
  QArrayData *local_70;
  AnonymousUnion0 local_68;
  QVariant local_60;
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdBootingOptionsDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004539e7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004539e7:
  QComboBox::clear();
  AVar10 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_50,"CVmEdBootingOptionsDialog","Some device",0);
  FUN_1000341d0(&local_48);
  QComboBox::insertItems((int)uVar2,(QStringList *)0x0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453a69;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100453a69:
  pDVar8 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453af1;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar11 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_100453ad0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_100453ad0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100453af1:
  pcVar3 = *(char **)(param_1 + 0x10);
  local_68.field1 = AVar10.field1;
  QCoreApplication::translate((char *)&local_70,"CVmEdBootingOptionsDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100453b7e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100453b7e:
  AVar6 = local_68;
  if (*(int *)local_68.field1 != -1) {
    if (*(int *)local_68.field1 != 0) {
      LOCK();
      *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
      local_31 = *(int *)local_68.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453c11;
    }
    iVar1 = *(int *)(local_68.field1 + 0xc);
    if (iVar1 != *(int *)(local_68.field1 + 8)) {
      lVar11 = (long)*(int *)(local_68.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_68.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100453bf0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100453bf0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100453c11:
  pcVar3 = *(char **)(param_1 + 0x10);
  local_88.field1 = AVar10.field1;
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdBootingOptionsDialog",
             "Settings.Startup.ExternalDeviceSystemName",0);
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
      if ((bool)local_31) goto LAB_100453caa;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100453caa:
  AVar6 = local_88;
  if (*(int *)local_88.field1 != -1) {
    if (*(int *)local_88.field1 != 0) {
      LOCK();
      *(int *)local_88.field1 = *(int *)local_88.field1 + -1;
      local_31 = *(int *)local_88.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453d31;
    }
    iVar1 = *(int *)(local_88.field1 + 0xc);
    if (iVar1 != *(int *)(local_88.field1 + 8)) {
      lVar11 = (long)*(int *)(local_88.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_88.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100453d10:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100453d10;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100453d31:
  pcVar3 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_a8,"CVmEdBootingOptionsDialog","initExternalBootDevice",0);
  QVariant::QVariant(&local_a0,&local_a8);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453dc1;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100453dc1:
  pcVar3 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_c0,"CVmEdBootingOptionsDialog","getExternalDeviceComboValue",0);
  QVariant::QVariant(&local_b8,&local_c0);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453e51;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100453e51:
  pcVar3 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_d8,"CVmEdBootingOptionsDialog","setExternalDeviceComboValue",0);
  QVariant::QVariant(&local_d0,&local_d8);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453ee1;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100453ee1:
  pQVar4 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_e0,"CVmEdBootingOptionsDialog","Select boot device on startup",0);
  QAbstractButton::setText(pQVar4);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100453f4b;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100453f4b:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_f8.field1 = AVar10.field1;
  QCoreApplication::translate((char *)&local_100,"CVmEdBootingOptionsDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100453ff6;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100453ff6:
  AVar6 = local_f8;
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454081;
    }
    iVar1 = *(int *)(local_f8.field1 + 0xc);
    if (iVar1 != *(int *)(local_f8.field1 + 8)) {
      lVar11 = (long)*(int *)(local_f8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_f8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100454060:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100454060;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100454081:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_118.field1 = AVar10.field1;
  QCoreApplication::translate
            ((char *)&local_120,"CVmEdBootingOptionsDialog","Settings.Startup.AllowSelectBootDevice"
             ,0);
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
      if ((bool)local_31) goto LAB_10045412c;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10045412c:
  AVar6 = local_118;
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_31 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004541c1;
    }
    iVar1 = *(int *)(local_118.field1 + 0xc);
    if (iVar1 != *(int *)(local_118.field1 + 8)) {
      lVar11 = (long)*(int *)(local_118.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_118.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004541a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004541a0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_1004541c1:
  puVar5 = PTR_shared_null_1021e1288;
  local_128 = (QArrayData *)PTR_shared_null_1021e1288;
  CMoreOptionsLabel::setText(*(QString **)(param_1 + 0x20));
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454215;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100454215:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_140.field1 = AVar10.field1;
  QCoreApplication::translate((char *)&local_148,"CVmEdBootingOptionsDialog","VmConfig",0);
  FUN_1000341d0(&local_140,&local_148);
  QVariant::QVariant(&local_138,(QStringList *)&local_140.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_138);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004542c0;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004542c0:
  AVar6 = local_140;
  if (*(int *)local_140.field1 != -1) {
    if (*(int *)local_140.field1 != 0) {
      LOCK();
      *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
      local_31 = *(int *)local_140.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045437b;
    }
    iVar1 = *(int *)(local_140.field1 + 0xc);
    if (iVar1 != *(int *)(local_140.field1 + 8)) {
      lVar11 = (long)*(int *)(local_140.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_140.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100454350:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100454350;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
    AVar10 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_10045437b:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_160 = AVar10;
  QCoreApplication::translate
            ((char *)&local_168,"CVmEdBootingOptionsDialog",
             "Settings.Startup.BootingOrder.BootDevice",0);
  FUN_1000341d0(&local_160,&local_168);
  QVariant::QVariant(&local_158,(QStringList *)&local_160.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_158);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454426;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100454426:
  AVar6 = local_160;
  if (*(int *)local_160.field1 != -1) {
    if (*(int *)local_160.field1 != 0) {
      LOCK();
      *(int *)local_160.field1 = *(int *)local_160.field1 + -1;
      local_31 = *(int *)local_160.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004544cb;
    }
    iVar1 = *(int *)(local_160.field1 + 0xc);
    if (iVar1 != *(int *)(local_160.field1 + 8)) {
      lVar11 = (long)*(int *)(local_160.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_160.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004544a0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004544a0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
    AVar10 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_1004544cb:
  pcVar3 = *(char **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_180,"CVmEdBootingOptionsDialog","getBootDeviceListValue",0);
  QVariant::QVariant(&local_178,&local_180);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_178);
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_31 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045455b;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_10045455b:
  pcVar3 = *(char **)(param_1 + 0x30);
  QCoreApplication::translate
            ((char *)&local_198,"CVmEdBootingOptionsDialog","setBootDeviceListValue",0);
  QVariant::QVariant(&local_190,&local_198);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_31 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004545eb;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_1004545eb:
  pQVar4 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate
            ((char *)&local_1a0,"CVmEdBootingOptionsDialog","External boot device:",0);
  QLabel::setText(pQVar4);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454655;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100454655:
  pQVar4 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_1a8,"CVmEdBootingOptionsDialog","Use EFI Boot",0);
  QAbstractButton::setText(pQVar4);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004546bf;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1004546bf:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_1c0 = AVar10;
  QCoreApplication::translate((char *)&local_1c8,"CVmEdBootingOptionsDialog","VmConfig",0);
  FUN_1000341d0(&local_1c0,&local_1c8);
  QVariant::QVariant(&local_1b8,(QStringList *)&local_1c0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_1b8);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045476a;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10045476a:
  AVar6 = local_1c0;
  if (*(int *)local_1c0.field1 != -1) {
    if (*(int *)local_1c0.field1 != 0) {
      LOCK();
      *(int *)local_1c0.field1 = *(int *)local_1c0.field1 + -1;
      local_31 = *(int *)local_1c0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045480b;
    }
    iVar1 = *(int *)(local_1c0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1c0.field1 + 8)) {
      lVar11 = (long)*(int *)(local_1c0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1c0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004547e0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004547e0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
    AVar10 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_10045480b:
  pcVar3 = *(char **)(param_1 + 0x48);
  local_1e0 = AVar10;
  QCoreApplication::translate
            ((char *)&local_1e8,"CVmEdBootingOptionsDialog","Settings.Startup.Bios.EfiEnabled",0);
  FUN_1000341d0(&local_1e0,&local_1e8);
  QVariant::QVariant(&local_1d8,(QStringList *)&local_1e0.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004548b6;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_1004548b6:
  AVar6 = local_1e0;
  if (*(int *)local_1e0.field1 != -1) {
    if (*(int *)local_1e0.field1 != 0) {
      LOCK();
      *(int *)local_1e0.field1 = *(int *)local_1e0.field1 + -1;
      local_31 = *(int *)local_1e0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045495b;
    }
    iVar1 = *(int *)(local_1e0.field1 + 0xc);
    if (iVar1 != *(int *)(local_1e0.field1 + 8)) {
      lVar11 = (long)*(int *)(local_1e0.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_1e0.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100454930:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100454930;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
    AVar10 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_10045495b:
  pQVar4 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_1f0,"CVmEdBootingOptionsDialog","Boot order:",0);
  QLabel::setText(pQVar4);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004549c5;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1004549c5:
  pQVar4 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_1f8,"CVmEdBootingOptionsDialog","Move Up",0);
  QWidget::setToolTip(pQVar4);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454a2f;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100454a2f:
  local_200 = (QArrayData *)puVar5;
  QAbstractButton::setText(*(QString **)(param_1 + 0x70));
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454a7c;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_100454a7c:
  pQVar4 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_208,"CVmEdBootingOptionsDialog","Move Down",0);
  QWidget::setToolTip(pQVar4);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454ae6;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100454ae6:
  local_210 = (QArrayData *)puVar5;
  QAbstractButton::setText(*(QString **)(param_1 + 0x78));
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454b33;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100454b33:
  pQVar4 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_218,"CVmEdBootingOptionsDialog","EFI Secure Boot",0);
  QAbstractButton::setText(pQVar4);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454ba0;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_100454ba0:
  pcVar3 = *(char **)(param_1 + 0xb0);
  local_230 = AVar10;
  QCoreApplication::translate((char *)&local_238,"CVmEdBootingOptionsDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_100454c4e;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_100454c4e:
  AVar6 = local_230;
  if (*(int *)local_230.field1 != -1) {
    if (*(int *)local_230.field1 != 0) {
      LOCK();
      *(int *)local_230.field1 = *(int *)local_230.field1 + -1;
      local_31 = *(int *)local_230.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454ce1;
    }
    iVar1 = *(int *)(local_230.field1 + 0xc);
    if (iVar1 != *(int *)(local_230.field1 + 8)) {
      lVar11 = (long)*(int *)(local_230.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_230.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100454cc0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100454cc0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100454ce1:
  pcVar3 = *(char **)(param_1 + 0xb0);
  local_250 = AVar10;
  QCoreApplication::translate
            ((char *)&local_258,"CVmEdBootingOptionsDialog","Settings.Startup.Bios.EfiSecureBoot",0)
  ;
  FUN_1000341d0(&local_250,&local_258);
  QVariant::QVariant(&local_248,(QStringList *)&local_250.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_248);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454d8f;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_100454d8f:
  AVar6 = local_250;
  if (*(int *)local_250.field1 != -1) {
    if (*(int *)local_250.field1 != 0) {
      LOCK();
      *(int *)local_250.field1 = *(int *)local_250.field1 + -1;
      local_31 = *(int *)local_250.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454e21;
    }
    iVar1 = *(int *)(local_250.field1 + 0xc);
    if (iVar1 != *(int *)(local_250.field1 + 8)) {
      lVar11 = (long)*(int *)(local_250.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_250.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100454e00:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100454e00;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100454e21:
  pQVar4 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_260,"CVmEdBootingOptionsDialog","Boot flags:",0);
  QLabel::setText(pQVar4);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454e8e;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_100454e8e:
  pcVar3 = *(char **)(param_1 + 200);
  local_278 = AVar10;
  QCoreApplication::translate((char *)&local_280,"CVmEdBootingOptionsDialog","VmConfig",0);
  FUN_1000341d0(&local_278,&local_280);
  QVariant::QVariant(&local_270,(QStringList *)&local_278.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_270);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454f3c;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_100454f3c:
  AVar6 = local_278;
  if (*(int *)local_278.field1 != -1) {
    if (*(int *)local_278.field1 != 0) {
      LOCK();
      *(int *)local_278.field1 = *(int *)local_278.field1 + -1;
      local_31 = *(int *)local_278.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100454fd1;
    }
    iVar1 = *(int *)(local_278.field1 + 0xc);
    if (iVar1 != *(int *)(local_278.field1 + 8)) {
      lVar11 = (long)*(int *)(local_278.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_278.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100454fb0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100454fb0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100454fd1:
  pcVar3 = *(char **)(param_1 + 200);
  local_298 = AVar10;
  QCoreApplication::translate
            ((char *)&local_2a0,"CVmEdBootingOptionsDialog","Settings.Runtime.SystemFlags",0);
  FUN_1000341d0(&local_298,&local_2a0);
  QVariant::QVariant(&local_290,(QStringList *)&local_298.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_290);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045507f;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_10045507f:
  AVar10 = local_298;
  if (*(int *)local_298.field1 != -1) {
    if (*(int *)local_298.field1 != 0) {
      LOCK();
      *(int *)local_298.field1 = *(int *)local_298.field1 + -1;
      UNLOCK();
      if (*(int *)local_298.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_298.field1 + 0xc);
    if (iVar1 != *(int *)(local_298.field1 + 8)) {
      lVar11 = (long)*(int *)(local_298.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_298.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1004550f0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1004550f0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar10.field1);
  }
  return;
}

