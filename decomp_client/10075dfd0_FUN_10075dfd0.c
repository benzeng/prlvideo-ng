
undefined8 * FUN_10075dfd0(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_2) {
  case 0:
    pcVar2 = "snapshot";
    break;
  case 1:
    pcVar2 = "suspend";
    goto LAB_10075e038;
  case 2:
    pcVar2 = "compress";
    break;
  case 3:
    puVar1 = (undefined *)QString::fromAscii_helper("cache",5);
    goto switchD_10075dff7_default;
  case 4:
    pcVar2 = "archive";
LAB_10075e038:
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,7);
  default:
    goto switchD_10075dff7_default;
  }
  puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,8);
switchD_10075dff7_default:
  *param_1 = puVar1;
  return param_1;
}

