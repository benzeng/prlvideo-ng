
long FUN_100992f10(long param_1)

{
  int iVar1;
  long lVar2;
  long local_20;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    local_20 = 0;
    iVar1 = (*DAT_102310d48)(*(long *)(param_1 + 0x30),&local_20);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    lVar2 = local_20;
    local_20 = CONCAT44(local_20._4_4_,1);
    iVar1 = (*DAT_102310cf0)(*(undefined8 *)(param_1 + 0x30),&local_20);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    if ((int)local_20 != 0) {
      local_20 = 0;
      iVar1 = (*DAT_102310d50)(*(undefined8 *)(param_1 + 0x30),&local_20);
      if (iVar1 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                      "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
      }
      lVar2 = lVar2 - local_20;
    }
  }
  return lVar2;
}

