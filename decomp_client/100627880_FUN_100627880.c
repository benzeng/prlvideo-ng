
undefined8 * FUN_100627880(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  switch(param_2) {
  case 0:
    pcVar3 = "wizard_activation";
    iVar2 = 0x11;
    break;
  case 1:
    pcVar3 = "wizard_activation_business";
    iVar2 = 0x1a;
    break;
  case 2:
    pcVar3 = "wizard_trial_promo";
    iVar2 = 0x12;
    break;
  case 3:
    pcVar3 = "wizard_trial_promo_link";
    iVar2 = 0x17;
    break;
  case 4:
    pcVar3 = "wizard_available_licenses";
    iVar2 = 0x19;
    break;
  case 5:
    pcVar3 = "menu_buy_action";
    iVar2 = 0xf;
    break;
  case 6:
    pcVar3 = "vm_window";
    iVar2 = 9;
    break;
  case 7:
    pcVar3 = "about_dialog";
    iVar2 = 0xc;
    break;
  case 8:
    pcVar3 = "message_license_expired";
    iVar2 = 0x17;
    break;
  case 9:
    pcVar3 = "message_get_trial_expired";
    iVar2 = 0x19;
    break;
  case 10:
    pcVar3 = "message_lic_already_in_use";
    iVar2 = 0x1a;
    break;
  case 0xb:
    pcVar3 = "message_license_err_trial_key";
    iVar2 = 0x1d;
    break;
  case 0xc:
    pcVar3 = "message_trial_expires";
    iVar2 = 0x15;
    break;
  default:
    pcVar3 = "unknown";
    iVar2 = 7;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

