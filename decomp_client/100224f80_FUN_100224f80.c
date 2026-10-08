
undefined8 * FUN_100224f80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_3) {
  case 0:
    pcVar2 = "ShowSilentStart";
    goto LAB_100224ff5;
  case 1:
    puVar1 = (undefined *)QString::fromAscii_helper("SwitchViewMode",0xe);
    break;
  case 2:
    puVar1 = (undefined *)QString::fromAscii_helper("LaunchVm",8);
    break;
  case 3:
    puVar1 = (undefined *)QString::fromAscii_helper("CheckVmEncryption",0x11);
    break;
  case 4:
    pcVar2 = "CheckVmValidity";
LAB_100224ff5:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0xf);
    break;
  case 5:
    puVar1 = (undefined *)QString::fromAscii_helper("CheckOldFormatVm",0x10);
    break;
  case 6:
    puVar1 = (undefined *)QString::fromAscii_helper("CheckThirdPartyFormatVm",0x17);
  }
  *param_1 = puVar1;
  return param_1;
}

