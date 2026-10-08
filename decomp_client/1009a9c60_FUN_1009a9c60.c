
void FUN_1009a9c60(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0x50) = 3;
  lVar3 = FUN_1009983c0();
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar5 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar5 = lVar3;
  }
  iVar2 = (*DAT_102310da0)(lVar5,"migration successfully done");
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_SaveMigrationStatistic",
                  "( hMigration, \"migration successfully done\" )","Pages/WPProgress.cpp",0x1dc,
                  "ProcessFinishNotify");
  }
  uVar4 = FUN_1009983a0(param_1);
  cVar1 = FUN_100990a70(uVar4);
  if (cVar1 != '\0') {
    uVar4 = FUN_1009983a0(param_1);
    lVar3 = FUN_100990b00(uVar4);
    if ((*(byte *)(lVar3 + 0x20) & 8) != 0) {
      FUN_1009983a0(param_1);
      CAbstractWizardModel::wizardCtrl();
      CWizardController::finish();
      goto LAB_1009a9d5c;
    }
  }
  FUN_1009983a0(param_1);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::goNext();
LAB_1009a9d5c:
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009a9d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_102310a50)(lVar5);
    return;
  }
  return;
}

