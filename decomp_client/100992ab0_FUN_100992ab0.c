
bool FUN_100992ab0(long param_1)

{
  int iVar1;
  bool bVar2;
  int local_c;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar2 = false;
  }
  else {
    local_c = 1;
    iVar1 = (*DAT_102310c40)(*(long *)(param_1 + 0x30),&local_c);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    bVar2 = local_c != 0;
  }
  return bVar2;
}

