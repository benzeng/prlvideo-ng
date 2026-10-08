
undefined8 * FUN_10028c8b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    puVar1 = (undefined *)QString::fromAscii_helper("Validate",8);
    break;
  default:
    puVar1 = PTR_shared_null_1021e1288;
    break;
  case 2:
    pcVar2 = "ShowRegistrationDlg";
    goto LAB_10028c905;
  case 5:
    pcVar2 = "ShowTrialWarningDlg";
    goto LAB_10028c905;
  case 7:
    pcVar2 = "ShowUnregisteredDlg";
LAB_10028c905:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0x13);
    break;
  case 8:
    puVar1 = (undefined *)QString::fromAscii_helper("ActivateOnline",0xe);
    break;
  case 9:
    puVar1 = (undefined *)QString::fromAscii_helper("CheckWebPortalAvailable",0x17);
  }
  *param_1 = puVar1;
  return param_1;
}

