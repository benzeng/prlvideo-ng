
void FUN_1009929c0(long param_1)

{
  int iVar1;
  int local_14;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    local_14 = 1;
    iVar1 = (*DAT_102310c40)(*(long *)(param_1 + 0x30),&local_14);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    if (local_14 != 0) {
      iVar1 = (*DAT_102310c30)(*(undefined8 *)(param_1 + 0x30));
      if (iVar1 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_CloseComputer","(m_hMigration)","TransporterWizardLogic.cpp",
                      0x1cd,"disconnectFromPC");
      }
    }
  }
  return;
}

