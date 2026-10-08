
void FUN_1004c9730(long param_1,QString *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
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
  
  QCoreApplication::translate((char *)&local_40,"CVmEdEnterpriseSettingsDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c97a4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c97a4:
  pQVar2 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_48,"CVmEdEnterpriseSettingsDialog","Asset tag:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c9805;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004c9805:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar3 = *(char **)(param_1 + 0x18);
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate
            ((char *)&local_68,"CVmEdEnterpriseSettingsDialog","Settings.General.AssetId",0);
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar3,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c9899;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c9899:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c9931;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004c9910:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004c9910;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004c9931:
  pcVar3 = *(char **)(param_1 + 0x18);
  local_80.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_88,"CVmEdEnterpriseSettingsDialog","VmConfig",0);
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar3,(QVariant *)"storages");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c99be;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004c99be:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c9a51;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004c9a30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004c9a30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004c9a51:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_90,"CVmEdEnterpriseSettingsDialog","Restore Defaults",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return;
}

