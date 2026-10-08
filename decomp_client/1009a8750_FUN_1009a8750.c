
void FUN_1009a8750(long *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData **ppQVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar8 = (uint)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_2 == 0x8000000) {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    FUN_100df99c0("","TransporterWizardModel",2,"Successfully connected to the agent");
    return;
  }
  iVar3 = FUN_1009987b0(param_1);
  if (iVar3 != 1) {
    iVar3 = FUN_1009987b0(param_1);
    if (iVar3 != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 10) = 0;
    cVar2 = (**(code **)(*param_1 + 0x100))(param_1);
    if (cVar2 == '\0') {
      return;
    }
    FUN_100998c50(param_1);
    return;
  }
  uVar4 = FUN_100998580();
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
      if ((bool)local_21) goto LAB_1009a88c6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a88c6:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a88f6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a88f6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8926;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009a8926:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8956;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a8956:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a8986;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a8986:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a89b6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a89b6:
  pcVar1 = DAT_102310c38;
  if (iVar3 == 0) {
    lVar5 = FUN_1009983c0(param_1);
    iVar3 = (*pcVar1)(*(undefined8 *)(lVar5 + 0x30));
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_ConnectComputer","(getPTLogic()->GetMigrationHandle())",
                    "Pages/WPProgress.cpp",CONCAT44(uVar7,0x10b),"ProcessConnectNotify");
    }
  }
  else {
    uVar4 = FUN_1009983a0(param_1);
    FUN_100990b60(uVar4,3);
  }
  return;
}

