
void FUN_100992e90(long param_1,int param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = (*DAT_102310ce8)(*(long *)(param_1 + 0x30),param_2 == 0);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_SetExcludeDocItemsMigration",
                    "(m_hMigration, TO_PRL_BOOL(excludeDocuments))","TransporterWizardLogic.cpp",
                    0x24a,"setMigrationSource");
    }
  }
  return;
}

