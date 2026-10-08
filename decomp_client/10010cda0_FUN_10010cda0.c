
undefined8 * FUN_10010cda0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  
  if (param_2 == 2) {
    FUN_10010cec0(param_1,param_3);
    return param_1;
  }
  if (param_2 == 1) {
    FUN_10010cf90(param_1,param_3);
    return param_1;
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (param_2 == 0) {
    switch(param_3) {
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
      goto switchD_10010cded_default;
    }
    puVar1 = (undefined *)QString::fromAscii_helper(pcVar2,7);
  }
switchD_10010cded_default:
  *param_1 = puVar1;
  return param_1;
}

