
bool FUN_100992560(long param_1)

{
  int iVar1;
  bool bVar2;
  long local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = 0;
  iVar1 = (*DAT_102310e18)(*(undefined8 *)(param_1 + 0x30),&local_30);
  if (iVar1 < 0) {
    bVar2 = false;
    FUN_100df99c0("","TransporterWizardModel",0,"Failed to get compatibility info error 0x%X",iVar1)
    ;
  }
  else {
    local_20 = 1;
    iVar1 = (*DAT_102310e48)(local_30,&local_20);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    if (local_20 == 0) {
      bVar2 = false;
    }
    else {
      local_1c = 1;
      iVar1 = (*DAT_102310e30)(local_30,&local_1c);
      if (iVar1 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                      "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
      }
      if (local_1c == 0) {
        bVar2 = false;
      }
      else {
        local_24 = 1;
        iVar1 = (*DAT_102310e38)(local_30,&local_24);
        if (iVar1 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                        "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
        }
        bVar2 = local_24 != 0;
      }
    }
  }
  if (local_30 != 0) {
    (*DAT_102310a50)();
  }
  return bVar2;
}

