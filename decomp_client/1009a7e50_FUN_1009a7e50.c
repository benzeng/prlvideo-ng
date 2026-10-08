
undefined1 FUN_1009a7e50(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  int local_28;
  int local_24;
  
  cVar1 = FUN_1009a8200();
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    FUN_100df99c0("","TransporterWizardModel",2,
                  "The migration cannot be reverted .Wait for the stage finish");
    return 0;
  }
  lVar3 = FUN_1009983c0(param_1);
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar6 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar6 = lVar3;
  }
  local_28 = 0;
  iVar2 = (*DAT_102310e08)(lVar6,&local_28);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  if (local_28 == 1) {
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0) {
      iVar2 = (*DAT_102310da8)(lVar6);
      uVar5 = 1;
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_RemoveCreatedData","(hMigration)","Pages/WPProgress.cpp",0x72
                      ,"Revert");
      }
    }
    else if (iVar2 == 1) {
      iVar2 = (*DAT_102310e00)(lVar6);
      uVar5 = 0;
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_Cancel","(hMigration)","Pages/WPProgress.cpp",0x79,"Revert");
      }
    }
    else if (iVar2 == 2) {
      uVar4 = FUN_1009983a0(param_1);
      cVar1 = FUN_100990a70(uVar4);
      if (cVar1 != '\0') {
        uVar4 = FUN_1009983c0(param_1);
        cVar1 = FUN_100991af0(uVar4);
        if (cVar1 != '\0') {
          iVar2 = (*DAT_102310da8)(lVar6);
          uVar5 = 1;
          if (iVar2 < 0) {
            FUN_100df99c0("","TransporterWizardModel",0,
                          "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                          "PrlPTAMigration_RemoveCreatedData","(hMigration)","Pages/WPProgress.cpp",
                          0x82,"Revert");
          }
          goto LAB_1009a81b4;
        }
      }
      local_24 = 1;
      iVar2 = (*DAT_102310c40)(lVar6,&local_24);
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                      "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
      }
      uVar5 = 1;
      if (local_24 != 0) {
        iVar2 = (*DAT_102310e00)(lVar6);
        uVar5 = 0;
        if (iVar2 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                        "PrlPTAMigration_Cancel","(hMigration)","Pages/WPProgress.cpp",0x89,"Revert"
                       );
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
LAB_1009a81b4:
  if (lVar6 != 0) {
    (*DAT_102310a50)(lVar6);
  }
  return uVar5;
}

