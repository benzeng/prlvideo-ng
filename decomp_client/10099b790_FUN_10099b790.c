
undefined8 FUN_10099b790(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long local_a0;
  long local_98;
  QArrayData *local_90;
  long local_88;
  QArrayData *local_80;
  long local_78;
  long local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  int local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar2 = QAbstractButton::isChecked();
  if (cVar2 == '\0') {
    FUN_100d32de0(&local_60);
    QString::operator=(&local_50,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099b862;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10099b862:
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","TransporterWizardModel",3,"Found CD/DVD-ROM path \'%s\'",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10099b8d4;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
LAB_10099b8d4:
    lVar5 = FUN_1009983c0(param_1);
    lVar5 = *(long *)(lVar5 + 0x28);
    lVar7 = 0;
    if (lVar5 != 0) {
      (*DAT_102310a48)(lVar5);
      lVar7 = lVar5;
    }
    local_70 = 0;
    iVar3 = (*DAT_102310ea8)(lVar7,&local_70);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_GetSysCfg",
                    "(hAgent, &hSysCfg.GetHandle())","Pages/WPInstallDisk.cpp",0xaf,"Commit");
    }
    local_78 = 0;
    iVar3 = (*DAT_102310eb8)(local_70,&local_78);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTASysCfg_GetVmOs",
                    "(hSysCfg, &hVmOsInfo.GetHandle())","Pages/WPInstallDisk.cpp",0xb1,"Commit");
    }
    local_44 = 1;
    iVar3 = (*DAT_102310fe0)(local_78,&local_44);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    if (local_44 == 0) {
      QString::fromUtf8_helper((char *)&local_38,0x1e3333a);
      QString::append(&local_50);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10099baee;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_40,0x1e33333);
      QString::append(&local_50);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10099baee;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_10099baee:
    if (local_78 != 0) {
      (*DAT_102310a50)();
    }
    local_78 = 0;
    if (local_70 != 0) {
      (*DAT_102310a50)();
    }
    local_70 = 0;
    if (lVar7 != 0) {
      (*DAT_102310a50)(lVar7);
    }
  }
  else {
    CPrlFileDevSelectorWidget::getCurrentSystemName();
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099bb3c;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_10099bb3c:
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",3,"Installation files search path \'%s\'",
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099bbae;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
LAB_10099bbae:
  uVar4 = FUN_1009983a0(param_1);
  uVar4 = FUN_100990b30(uVar4);
  FUN_100997970(uVar4,1);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x48),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x58),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x70),0));
  CProgressIndicator::show();
  lVar5 = FUN_1009983c0(param_1);
  local_88 = 0;
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar7 = 0;
  if (lVar5 != 0) {
    local_88 = lVar5;
    (*DAT_102310a48)(lVar5);
    lVar7 = lVar5;
  }
  local_90 = (QArrayData *)puVar1;
  iVar3 = FUN_10099dc60(DAT_102310d68,&local_88,&local_90);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetTempDataDir, hMigration, qszTempDitPath)",
                  "Pages/WPInstallDisk.cpp",0xd9,"Commit");
  }
  pvVar6 = operator_new(0x30);
  local_98 = 0;
  if (lVar7 != 0) {
    local_98 = lVar7;
    (*DAT_102310a48)(lVar7);
  }
  FUN_1009b76b0(pvVar6,&local_98,&local_50,&local_90,param_1);
  *(void **)(param_1 + 0x58) = pvVar6;
  if (local_98 != 0) {
    (*DAT_102310a50)();
    pvVar6 = *(void **)(param_1 + 0x58);
  }
  local_98 = 0;
  QObject::connect(&local_a0,pvVar6,"2finished()",param_1,"1OnCopyTaskFinished()",0);
  if (local_a0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QThread::start(*(undefined8 *)(param_1 + 0x58),7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10099bdb1;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10099bdb1:
  if (lVar7 != 0) {
    (*DAT_102310a50)(lVar7);
  }
  local_88 = 0;
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return 0;
}

