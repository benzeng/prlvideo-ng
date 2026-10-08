
undefined8 * FUN_1003b4b30(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_2) {
  case 1:
    pcVar2 = ":/Images/general_32x32.png";
    goto LAB_1003b4b69;
  case 2:
    pcVar2 = ":/Images/options_32x32.png";
LAB_1003b4b69:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0x1a);
    break;
  case 3:
    pcVar2 = ":/Images/hardware_32x32.png";
    goto LAB_1003b4b85;
  case 4:
    pcVar2 = ":/Images/security_32x32.png";
LAB_1003b4b85:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0x1b);
    break;
  case 5:
    puVar1 = (undefined *)QString::fromAscii_helper(":/Images/backup_32x32.png",0x19);
    break;
  case 6:
    puVar1 = (undefined *)QString::fromAscii_helper(":/Images/enterprise_32x32.png",0x1d);
    break;
  case 7:
    puVar1 = (undefined *)QString::fromAscii_helper(":/Images/dev_settings_32x32.png",0x1f);
  }
  *param_1 = puVar1;
  return param_1;
}

