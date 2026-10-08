
undefined8 * FUN_1002304a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_3) {
  case 1:
    pcVar2 = "CheckAccessRights";
    goto LAB_10023051b;
  case 2:
    puVar1 = (undefined *)QString::fromAscii_helper("ConfirmSwitch",0xd);
    break;
  case 3:
    pcVar2 = "InitiateSwitch";
    goto LAB_100230508;
  case 4:
    puVar1 = (undefined *)QString::fromAscii_helper("LeaveCurrentMode",0x10);
    break;
  case 5:
    pcVar2 = "SwitchDisplays";
LAB_100230508:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0xe);
    break;
  case 6:
    pcVar2 = "AnimateTransition";
LAB_10023051b:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,0x11);
    break;
  case 7:
    puVar1 = (undefined *)QString::fromAscii_helper("PostSwitch",10);
  }
  *param_1 = puVar1;
  return param_1;
}

