
void FUN_1009a83d0(undefined8 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","TransporterWizardModel",2,"Migration notification %d, 0x%x",param_2,param_3);
  }
  pcVar1 = DAT_102310da0;
  switch(param_2) {
  case 1:
    FUN_1009a8750(param_1,param_3);
    return;
  default:
    goto switchD_1009a8431_caseD_2;
  case 3:
    FUN_1009a8be0(param_1,param_3);
    return;
  case 6:
  case 7:
    FUN_1009a9180(param_1,param_3);
    return;
  case 9:
    FUN_1009a9c60(param_1);
    return;
  case 0xc:
    FUN_1009a99a0(param_1,param_3);
    return;
  case 0xd:
    FUN_1009a8da0(param_1,param_3);
    return;
  case 0xe:
    break;
  case 0xf:
    lVar4 = FUN_1009983c0(param_1);
    iVar2 = (*pcVar1)(*(undefined8 *)(lVar4 + 0x30),"migration was cancelled");
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_SaveMigrationStatistic",
                    "(getPTLogic()->GetMigrationHandle(), \"migration was cancelled\")",
                    "Pages/WPProgress.cpp",0xd7,"OnClientNotification");
    }
    FUN_1009a9bb0(param_1,param_3);
    return;
  }
  if (param_3 == 0x8000000) {
    return;
  }
  uVar3 = FUN_100998580(param_1);
  FUN_100998560(&local_30,param_1);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Could_not_resume_the_migration__10227e1e0);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Try_to_start_the_migration_again_10227e1e8);
  FUN_100a08530(uVar3,&local_30,&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a855a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a855a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a858a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a858a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a85ba;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a85ba:
  FUN_1009983a0(param_1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goBack();
switchD_1009a8431_caseD_2:
  return;
}

