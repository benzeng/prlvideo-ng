
bool FUN_100992b40(long param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 1;
  iVar1 = (*DAT_102310c50)(*(undefined8 *)(param_1 + 0x30),&local_c);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_ValidateVmOs","(m_hMigration, &rToDo)",
                  "TransporterWizardLogic.cpp",0x1dc,"validateVmMigration");
  }
  FUN_100df99c0("","TransporterWizardModel",0,"VM operating system validation result %d",local_c);
  return local_c == 2;
}

