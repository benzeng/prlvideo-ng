
ulong FUN_1009b4dc0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long local_68;
  long local_60;
  int local_54;
  long local_50;
  long local_48;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  lVar5 = FUN_1009983c0();
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar9 = 0;
  if (lVar5 != 0) {
    (*DAT_102310a48)(lVar5);
    lVar9 = lVar5;
  }
  local_3c = 0;
  uVar6 = FUN_1009983c0(param_1);
  cVar2 = FUN_100992100(uVar6,&local_3c);
  if (cVar2 != '\0') {
    lVar5 = FUN_1009983c0(param_1);
    uVar7 = *(ulong *)(lVar5 + 0x28);
    uVar8 = 0;
    if (uVar7 != 0) {
      (*DAT_102310a48)(uVar7);
      uVar8 = uVar7;
    }
    local_48 = 0;
    iVar4 = (*DAT_102310ea8)(uVar8,&local_48);
    if (iVar4 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_GetSysCfg",
                    "(hAgent, &hSysCfg.GetHandle())","Pages/WPCollectPCInfo.cpp",0x57,
                    "GetNextPageId");
    }
    local_50 = 0;
    iVar4 = (*DAT_102310eb8)(local_48,&local_50);
    if (iVar4 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTASysCfg_GetVmOs",
                    "(hSysCfg, &hVmOsInfo.GetHandle())","Pages/WPCollectPCInfo.cpp",0x59,
                    "GetNextPageId");
    }
    uVar6 = FUN_1009983a0(param_1);
    cVar2 = FUN_100990a80(uVar6);
    if (cVar2 == '\0') {
      local_38 = 1;
      iVar4 = (*DAT_102310fe8)(local_50,&local_38);
      if (iVar4 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                      "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
      }
      if (local_38 != 0) goto LAB_1009b4fa1;
      uVar7 = 9;
      bVar3 = 1;
    }
    else {
LAB_1009b4fa1:
      local_54 = 0;
      iVar4 = (*DAT_102310fb8)(local_50,&local_54);
      if (iVar4 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTASysCfgOsInfo_GetOsType","(hVmOsInfo, &vmOsType)",
                      "Pages/WPCollectPCInfo.cpp",99,"GetNextPageId");
      }
      if (local_54 == 2) {
        local_60 = 0;
        iVar4 = (*DAT_102310e18)(lVar9,&local_60);
        if (iVar4 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "Error: Unable to get compatibility info. error 0x%X",iVar4);
        }
        local_34 = 1;
        iVar4 = (*DAT_102310e28)(local_60,&local_34);
        if (iVar4 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                        "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
        }
        if (local_34 == 0) {
LAB_1009b525b:
          uVar6 = FUN_1009983c0(param_1);
          cVar2 = FUN_100992560(uVar6);
          if (cVar2 == '\0') {
            uVar6 = FUN_1009983c0(param_1);
            bVar3 = FUN_100992020(uVar6);
            uVar7 = (ulong)(bVar3 + 6 + (uint)bVar3);
          }
          else {
            uVar7 = 7;
            bVar3 = 1;
          }
        }
        else {
          local_68 = 0;
          iVar4 = (*DAT_102310e60)(lVar9,&local_68);
          if (iVar4 < 0) {
            FUN_100df99c0("","TransporterWizardModel",0,
                          "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                          "PrlPTAMigration_GetUserInfo","(hMigration, &hUserInfo.GetHandle())",
                          "Pages/WPCollectPCInfo.cpp",0x70,"GetNextPageId");
          }
          local_2c = 1;
          iVar4 = (*DAT_102310e90)(local_68,&local_2c);
          if (iVar4 < 0) {
            FUN_100df99c0("","TransporterWizardModel",0,
                          "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                          "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal")
            ;
          }
          if (local_2c == 0) {
LAB_1009b522b:
            bVar1 = false;
          }
          else {
            local_30 = 1;
            iVar4 = (*DAT_102310e98)(local_68,&local_30);
            if (iVar4 < 0) {
              FUN_100df99c0("","TransporterWizardModel",0,
                            "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                            "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,
                            "GetVal");
            }
            bVar1 = true;
            if (local_30 != 0) goto LAB_1009b522b;
          }
          if (local_68 != 0) {
            (*DAT_102310a50)();
          }
          local_68 = 0;
          if (!bVar1) goto LAB_1009b525b;
          uVar7 = 6;
          bVar3 = 1;
        }
        if (local_60 != 0) {
          (*DAT_102310a50)();
        }
        local_60 = 0;
        if (bVar3 != 0) goto LAB_1009b52c7;
      }
      bVar3 = 0;
    }
LAB_1009b52c7:
    if (local_50 != 0) {
      (*DAT_102310a50)();
    }
    local_50 = 0;
    if (local_48 != 0) {
      (*DAT_102310a50)();
    }
    local_48 = 0;
    if (uVar8 != 0) {
      (*DAT_102310a50)(uVar8);
    }
    if (bVar3 != 0) goto LAB_1009b531f;
  }
  uVar7 = 10;
LAB_1009b531f:
  if (lVar9 != 0) {
    (*DAT_102310a50)(lVar9);
  }
  return uVar7 & 0xffffffff;
}

