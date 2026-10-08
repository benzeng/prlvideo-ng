
int FUN_1009932a0(long param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = (*DAT_102310cb0)(*(undefined8 *)(param_1 + 0x30),&local_c);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  iVar1 = 1;
  if (local_c != 3) {
    iVar1 = -(uint)(local_c != 0);
  }
  return iVar1;
}

