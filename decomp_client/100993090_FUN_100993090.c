
void FUN_100993090(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0;
  iVar1 = (*DAT_102310c78)(&local_14,&local_18);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_GetLocalBatteryStatus","(&status, &error)",
                  "TransporterWizardLogic.cpp",0x284,"checkLocalBattery");
  }
  if (local_18 == 0x8000000) {
    *(bool *)param_2 = local_14 != 0;
  }
  return;
}

