
undefined8 FUN_1009999d0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_40;
  int local_34;
  
  lVar3 = FUN_1009983c0();
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar5 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar5 = lVar3;
  }
  uVar4 = FUN_1009983a0(param_1);
  cVar1 = FUN_100990a80(uVar4);
  if (cVar1 != '\0') {
    local_34 = 0;
    iVar2 = (*DAT_102310c00)(lVar5,&local_34);
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_IsExtStorModeOnClient","(hMigration, &bExtStorModeOnClient)",
                    "Pages/WPMigrationMode.cpp",0x28,"Commit");
    }
    if (local_34 == 0) {
      lVar3 = FUN_1009983c0(param_1);
      lVar3 = *(long *)(lVar3 + 0x28);
      lVar6 = 0;
      if (lVar3 != 0) {
        (*DAT_102310a48)(lVar3);
        lVar6 = lVar3;
      }
      local_40 = 0;
      iVar2 = (*DAT_102310b80)(lVar6,&local_40);
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : Unable to get self peer info error 0x%X",iVar2);
      }
      iVar2 = (*DAT_102310bb8)(local_40,0xc);
      if (iVar2 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : Unable to set self peer product type error 0x%X",iVar2);
      }
      if (local_40 != 0) {
        (*DAT_102310a50)();
      }
      local_40 = 0;
      if (lVar6 != 0) {
        (*DAT_102310a50)(lVar6);
      }
    }
  }
  uVar4 = FUN_1009983c0(param_1);
  FUN_100991b50(uVar4,1);
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return 1;
}

