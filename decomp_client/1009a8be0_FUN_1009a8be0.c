
void FUN_1009a8be0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar1 = DAT_102310c30;
  if (param_2 == 0x8000000) {
    iVar2 = FUN_1009987b0(param_1);
    pcVar1 = DAT_102310df8;
    if (iVar2 == 1) {
      lVar3 = FUN_1009983c0(param_1);
      iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x30));
      if (-1 < iVar2) {
        return;
      }
      uVar5 = 0x123;
      pcVar4 = "PrlPTAMigration_Resume";
      goto LAB_1009a8d7a;
    }
    iVar2 = FUN_1009987b0(param_1);
    pcVar1 = DAT_102310e00;
    if (iVar2 != 2) {
      return;
    }
    lVar3 = FUN_1009983c0(param_1);
    iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x30));
    if (-1 < iVar2) {
      return;
    }
    uVar5 = 0x127;
  }
  else {
    lVar3 = FUN_1009983c0(param_1);
    iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x30));
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_CloseComputer","(getPTLogic()->GetMigrationHandle())",
                    "Pages/WPProgress.cpp",0x12e,"ProcessHandshakeNotify");
    }
    pcVar1 = DAT_102310e00;
    lVar3 = FUN_1009983c0(param_1);
    iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x30));
    if (-1 < iVar2) {
      return;
    }
    uVar5 = 0x131;
  }
  pcVar4 = "PrlPTAMigration_Cancel";
LAB_1009a8d7a:
  FUN_100df99c0("","TransporterWizardModel",0,
                "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",pcVar4,
                "(getPTLogic()->GetMigrationHandle())","Pages/WPProgress.cpp",uVar5,
                "ProcessHandshakeNotify");
  return;
}

