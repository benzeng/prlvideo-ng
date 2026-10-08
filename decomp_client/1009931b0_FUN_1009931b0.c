
void FUN_1009931b0(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_102310cb8)(*(undefined8 *)(param_1 + 0x30),(param_2 == 1) * '\x03');
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_SetDocsMigrationMode","(m_hMigration, docsMigrationMode)",
                  "TransporterWizardLogic.cpp",0x297,"setDocumentsMigrationMode");
  }
  iVar1 = (*DAT_102310ce8)(*(undefined8 *)(param_1 + 0x30),param_2 == 1);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_SetExcludeDocItemsMigration",
                  "(m_hMigration, TO_PRL_BOOL(excludeDocuments))","TransporterWizardLogic.cpp",0x29a
                  ,"setDocumentsMigrationMode");
  }
  return;
}

