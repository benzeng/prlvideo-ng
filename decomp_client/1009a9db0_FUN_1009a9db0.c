
undefined8 FUN_1009a9db0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_38;
  long local_30;
  int local_28;
  undefined1 local_21;
  
  lVar3 = FUN_1009983c0();
  local_30 = 0;
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar5 = 0;
  if (lVar3 != 0) {
    local_30 = lVar3;
    (*DAT_102310a48)(lVar3);
    lVar5 = lVar3;
  }
  uVar4 = FUN_1009983a0(param_1);
  cVar1 = FUN_100990a70(uVar4);
  if (cVar1 != '\0') {
    local_28 = 1;
    iVar2 = (*DAT_102310c00)(lVar5,&local_28);
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    if ((local_28 == 0) && (iVar2 = (*DAT_102310c30)(lVar5), iVar2 < 0)) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_CloseComputer","(hMigration)","Pages/WPProgress.cpp",0x1fe,
                    "Commit");
    }
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar2 = FUN_10099dc60(DAT_102310d60,&local_30,&local_38);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "( PrlPTAMigration_GetDestinationDir, hMigration, vm_path )",
                  "Pages/WPProgress.cpp",0x209,"Commit");
  }
  uVar4 = FUN_1009983c0(param_1);
  FUN_100991fe0(uVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a9f8f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a9f8f:
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return 1;
}

