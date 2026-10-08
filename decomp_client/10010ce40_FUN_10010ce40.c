
undefined8 * FUN_10010ce40(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_shared_null_1021e1288;
  switch(param_2) {
  case 0:
    pcVar2 = "IDE 0:0";
    break;
  case 1:
    pcVar2 = "IDE 0:1";
    break;
  case 2:
    pcVar2 = "IDE 1:0";
    break;
  case 3:
    pcVar2 = "IDE 1:1";
    break;
  default:
    goto switchD_10010ce67_default;
  }
  puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,7);
switchD_10010ce67_default:
  *param_1 = puVar1;
  return param_1;
}

