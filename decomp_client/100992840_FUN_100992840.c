
void FUN_100992840(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = (*DAT_102310c48)();
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_InitializeComputer","(m_hMigration)",
                    "TransporterWizardLogic.cpp",0x1b4,"collectPCInfo");
    }
  }
  return;
}

