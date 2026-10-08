
void FUN_100999f90(undefined8 param_1,char param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != '\0') {
    lVar2 = FUN_1009983c0();
    lVar2 = *(long *)(lVar2 + 0x30);
    lVar3 = 0;
    if (lVar2 != 0) {
      (*DAT_102310a48)(lVar2);
      lVar3 = lVar2;
    }
    iVar1 = (*DAT_102310bf8)(lVar3,1);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_SetType","(hMigration, MT_P2V_WITHIN_NET)",
                    "Pages/WPMigrationMode.cpp",0x7a,"onButtonWithinNetToggled");
    }
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010099a045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_102310a50)(lVar3);
      return;
    }
  }
  return;
}

