
void FUN_1009a9180(long param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData **ppQVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar8;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar8 = (uint)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  if (param_2 == 0x8000000) {
    return;
  }
  if (param_2 != 0x8b15001) {
    if (param_2 == 0x8b17026) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_100998c50(param_1);
      return;
    }
    FUN_100df99c0("","TransporterWizardModel",0,"Unknown migrating data error, 0x%x",param_2);
    uVar4 = FUN_100998580(param_1);
    FUN_100998560(&local_60,param_1);
    QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_migration_could_not_be_compl_10227e1d0);
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_An_error_occurred_while_migratin_10227e1d8);
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Report_a_Problem____10227ded0);
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,(int)PTR_s__OK_10227de90);
    local_88 = (QArrayData *)PTR_shared_null_1021e1288;
    iVar3 = FUN_100a084e0(1,uVar4,&local_60,&local_68,&local_70,&local_78,&local_80,&local_88,
                          (ulong)uVar8 << 0x20);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a9532;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1009a9532:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a9562;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1009a9562:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a9592;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1009a9592:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a95c2;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1009a95c2:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a95f2;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1009a95f2:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a9622;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1009a9622:
    FUN_1009983a0(param_1);
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goBack();
    if (iVar3 != 0) {
      return;
    }
    uVar4 = FUN_1009983a0(param_1);
    uVar2 = FUN_100990a80(uVar4);
    uVar4 = QApplication::activeWindow();
    FUN_1009cc040(uVar2,uVar4);
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 2;
  uVar4 = FUN_100998580(param_1);
  FUN_100998560(&local_30,param_1);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_connection_was_closed_due_to_10227e1c0);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Check_your_network_connection_an_10227e1c8);
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Retry_10227dea8);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10227de70);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  ppQVar6 = &local_58;
  iVar3 = FUN_100a084e0(3,uVar4,&local_30,&local_38,&local_40,&local_48,&local_50,ppQVar6,
                        (ulong)uVar8 << 0x20);
  uVar7 = (undefined4)((ulong)ppQVar6 >> 0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a92c7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a92c7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a92f7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a92f7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a9327;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009a9327:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a9357;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a9357:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a9387;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a9387:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a93b7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a93b7:
  pcVar1 = DAT_102310c38;
  if (iVar3 == 0) {
    lVar5 = FUN_1009983c0(param_1);
    iVar3 = (*pcVar1)(*(undefined8 *)(lVar5 + 0x30));
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_ConnectComputer","(getPTLogic()->GetMigrationHandle())",
                    "Pages/WPProgress.cpp",CONCAT44(uVar7,0x176),"ProcessDataMigrationNotify");
    }
  }
  else {
    uVar4 = FUN_1009983a0(param_1);
    FUN_100990b60(uVar4,3);
  }
  return;
}

