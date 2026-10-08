
int FUN_10099acd0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_60;
  long local_58;
  int local_4c;
  long local_48;
  long local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  lVar5 = FUN_1009983c0();
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar7 = 0;
  if (lVar5 != 0) {
    (*DAT_102310a48)(lVar5);
    lVar7 = lVar5;
  }
  lVar5 = FUN_1009983c0(param_1);
  lVar5 = *(long *)(lVar5 + 0x28);
  lVar8 = 0;
  if (lVar5 != 0) {
    (*DAT_102310a48)(lVar5);
    lVar8 = lVar5;
  }
  local_40 = 0;
  iVar4 = (*DAT_102310ea8)(lVar8,&local_40);
  if (iVar4 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_GetSysCfg",
                  "(hAgent, &hSysCfg.GetHandle())","Pages/WPInstallDisk.cpp",0x53,"GetNextPageId");
  }
  local_48 = 0;
  iVar4 = (*DAT_102310eb8)(local_40,&local_48);
  if (iVar4 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTASysCfg_GetVmOs",
                  "(hSysCfg, &hVmOsInfo.GetHandle())","Pages/WPInstallDisk.cpp",0x55,"GetNextPageId"
                 );
  }
  local_4c = 0;
  iVar4 = (*DAT_102310fb8)(local_48,&local_4c);
  if (iVar4 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTASysCfgOsInfo_GetOsType","(hVmOsInfo, &vmOsType)","Pages/WPInstallDisk.cpp",
                  0x58,"GetNextPageId");
  }
  local_38 = 1;
  iVar4 = (*DAT_102310d30)(lVar7,&local_38);
  if (iVar4 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  if ((local_38 != 0) && (local_4c == 2)) {
    local_58 = 0;
    iVar4 = (*DAT_102310e18)(lVar7,&local_58);
    if (iVar4 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Unable to get compatibility info. error 0x%X",iVar4);
    }
    local_34 = 1;
    iVar4 = (*DAT_102310e28)(local_58,&local_34);
    if (iVar4 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    if (local_34 == 0) {
LAB_10099b106:
      uVar6 = FUN_1009983c0(param_1);
      cVar2 = FUN_100992560(uVar6);
      if (cVar2 == '\0') {
        uVar6 = FUN_1009983c0(param_1);
        bVar3 = FUN_100992020(uVar6);
        iVar4 = bVar3 + 6 + (uint)bVar3;
      }
      else {
        bVar3 = 1;
        iVar4 = 7;
      }
    }
    else {
      local_60 = 0;
      iVar4 = (*DAT_102310e60)(lVar7,&local_60);
      if (iVar4 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get user info. error 0x%X",
                      iVar4);
      }
      local_2c = 1;
      iVar4 = (*DAT_102310e90)(local_60,&local_2c);
      if (iVar4 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                      "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
      }
      if (local_2c == 0) {
LAB_10099b0d6:
        bVar1 = false;
      }
      else {
        local_30 = 1;
        iVar4 = (*DAT_102310e98)(local_60,&local_30);
        if (iVar4 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                        "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
        }
        bVar1 = true;
        if (local_30 != 0) goto LAB_10099b0d6;
      }
      if (local_60 != 0) {
        (*DAT_102310a50)();
      }
      local_60 = 0;
      if (!bVar1) goto LAB_10099b106;
      bVar3 = 1;
      iVar4 = 6;
    }
    if (local_58 != 0) {
      (*DAT_102310a50)();
    }
    local_58 = 0;
    if (bVar3 != 0) goto LAB_10099b166;
  }
  iVar4 = 10;
LAB_10099b166:
  if (local_48 != 0) {
    (*DAT_102310a50)();
  }
  local_48 = 0;
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  if (lVar8 != 0) {
    (*DAT_102310a50)(lVar8);
  }
  if (lVar7 != 0) {
    (*DAT_102310a50)(lVar7);
  }
  return iVar4;
}

