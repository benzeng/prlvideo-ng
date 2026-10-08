
void FUN_1009a99a0(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0x8000000) {
    return;
  }
  if (param_2 == 0x8b17026) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_100998c50(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 2;
  uVar1 = FUN_100998580(param_1);
  FUN_100998560(&local_28,param_1);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_migration_could_not_be_compl_10227e1d0);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_An_error_occurred_while_migratin_10227e1d8);
  FUN_100a08530(uVar1,&local_28,&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a9a7f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a9a7f:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a9aaf;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a9aaf:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a9adf;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009a9adf:
  FUN_1009983a0(param_1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goBack();
  return;
}

