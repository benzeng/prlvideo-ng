
void FUN_1009a8da0(long param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar2 = FUN_1009987b0();
  if (iVar2 != 1) {
    return;
  }
  if (param_2 == 0x8000000) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
  uVar3 = FUN_100998580(param_1);
  FUN_100998560(&local_30,param_1);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_migration_could_not_be_compl_10227e1d0);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_An_error_occurred_while_migratin_10227e1d8);
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Report_a_Problem____10227ded0);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,(int)PTR_s__OK_10227de90);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar2 = FUN_100a084e0(1,uVar3,&local_30,&local_38,&local_40,&local_48,&local_50,&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8ee7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a8ee7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8f17;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a8f17:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8f47;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009a8f47:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8f77;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a8f77:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8fa7;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a8fa7:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8fd7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a8fd7:
  FUN_1009983a0(param_1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goBack();
  if (iVar2 == 0) {
    uVar3 = FUN_1009983a0(param_1);
    uVar1 = FUN_100990a80(uVar3);
    uVar3 = QApplication::activeWindow();
    FUN_1009cc040(uVar1,uVar3);
  }
  return;
}

