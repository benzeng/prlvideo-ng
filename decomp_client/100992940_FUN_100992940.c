
void FUN_100992940(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = (*DAT_102310c38)();
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_ConnectComputer","(m_hMigration)","TransporterWizardLogic.cpp",
                    0x1c4,"connectToPC");
    }
  }
  return;
}

