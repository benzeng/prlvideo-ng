
void FUN_1004cc9c0(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_f8;
  QArrayData *local_f0;
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
  AnonymousUnion0 local_88;
  QVariant local_80;
  QArrayData *local_70;
  AnonymousUnion0 local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdBackupSettingsDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cca37;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004cca37:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_48,"CVmEdBackupSettingsDialog",
             "You need to have at least %1 of free disk space to use this feature.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cca98;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004cca98:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_50,"CVmEdBackupSettingsDialog","SmartGuard",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccaf9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004ccaf9:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x30);
  local_68.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_70,"CVmEdBackupSettingsDialog","VmConfig",0);
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
      if ((bool)local_31) goto LAB_1004ccb8d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004ccb8d:
  AVar5 = local_68;
  if (*(int *)local_68.field1 != -1) {
    if (*(int *)local_68.field1 != 0) {
      LOCK();
      *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
      local_31 = *(int *)local_68.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccc21;
    }
    iVar1 = *(int *)(local_68.field1 + 0xc);
    if (iVar1 != *(int *)(local_68.field1 + 8)) {
      lVar8 = (long)*(int *)(local_68.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_68.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004ccc00:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004ccc00;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004ccc21:
  pcVar3 = *(char **)(param_1 + 0x30);
  local_88.field1 = (Data *)puVar4;
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdBackupSettingsDialog","Settings.Autoprotect.Enabled",0);
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
      if ((bool)local_31) goto LAB_1004cccba;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004cccba:
  AVar5 = local_88;
  if (*(int *)local_88.field1 != -1) {
    if (*(int *)local_88.field1 != 0) {
      LOCK();
      *(int *)local_88.field1 = *(int *)local_88.field1 + -1;
      local_31 = *(int *)local_88.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccd41;
    }
    iVar1 = *(int *)(local_88.field1 + 0xc);
    if (iVar1 != *(int *)(local_88.field1 + 8)) {
      lVar8 = (long)*(int *)(local_88.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_88.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004ccd20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004ccd20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004ccd41:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_98,"CVmEdBackupSettingsDialog","Details...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccdab;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004ccdab:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_a0,"CVmEdBackupSettingsDialog","Do not back up with Time Machine",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cce15;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004cce15:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_b8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_c0,"CVmEdBackupSettingsDialog","TimeMachine",0);
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
      if ((bool)local_31) goto LAB_1004ccec0;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004ccec0:
  AVar5 = local_b8;
  if (*(int *)local_b8.field1 != -1) {
    if (*(int *)local_b8.field1 != 0) {
      LOCK();
      *(int *)local_b8.field1 = *(int *)local_b8.field1 + -1;
      local_31 = *(int *)local_b8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccf51;
    }
    iVar1 = *(int *)(local_b8.field1 + 0xc);
    if (iVar1 != *(int *)(local_b8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_b8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_b8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004ccf30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004ccf30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004ccf51:
  pcVar3 = *(char **)(param_1 + 0x58);
  local_d8.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_e0,"CVmEdBackupSettingsDialog","DoNotBackupVm",0);
  FUN_1000341d0(&local_d8,&local_e0);
  QVariant::QVariant(&local_d0,(QStringList *)&local_d8.field0);
  QObject::setProperty(pcVar3,(QVariant *)"TimeMachine");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccffc;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004ccffc:
  AVar5 = local_d8;
  if (*(int *)local_d8.field1 != -1) {
    if (*(int *)local_d8.field1 != 0) {
      LOCK();
      *(int *)local_d8.field1 = *(int *)local_d8.field1 + -1;
      local_31 = *(int *)local_d8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cd091;
    }
    iVar1 = *(int *)(local_d8.field1 + 0xc);
    if (iVar1 != *(int *)(local_d8.field1 + 8)) {
      lVar8 = (long)*(int *)(local_d8.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_d8.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004cd070:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004cd070;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004cd091:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_e8,"CVmEdBackupSettingsDialog","Install Acronis True Image...",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cd0fb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004cd0fb:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_f0,"CVmEdBackupSettingsDialog",
             "Acronis True Image allows you to back up your Mac and virtual machines.",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cd165;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004cd165:
  pQVar2 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_f8,"CVmEdBackupSettingsDialog","Restore Defaults",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      if (*(int *)local_f8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
  return;
}

