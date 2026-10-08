
void FUN_100992d80(long param_1)

{
  int iVar1;
  
  FUN_100991b50(param_1,0);
  iVar1 = (*DAT_102310c28)(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_ClearComputer","(m_hMigration)","TransporterWizardLogic.cpp",
                  0x1f7,"deinitClient");
  }
  return;
}

