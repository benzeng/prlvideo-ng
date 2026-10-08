
bool FUN_100992bf0(long param_1)

{
  int iVar1;
  bool bVar2;
  long local_28;
  int local_1c;
  
  local_28 = 0;
  iVar1 = (*DAT_102310e18)(*(undefined8 *)(param_1 + 0x30),&local_28);
  if (iVar1 < 0) {
    bVar2 = false;
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error: Unable to get compatibility info. error 0x%X",iVar1);
  }
  else {
    local_1c = 1;
    iVar1 = (*DAT_102310e20)(local_28,&local_1c);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    bVar2 = local_1c != 0;
  }
  if (local_28 != 0) {
    (*DAT_102310a50)();
  }
  return bVar2;
}

