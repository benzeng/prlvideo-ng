
void FUN_100992d00(long param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_102310c20)(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_CreateComputer","(m_hMigration)","TransporterWizardLogic.cpp",
                  0x1ee,"initClient");
  }
  FUN_100991b50(param_1,1);
  return;
}

