
undefined8 FUN_10037e820(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 0x300;
    break;
  case 4:
    *param_3 = 0x301;
    break;
  case 5:
    *param_3 = 0x302;
    break;
  case 6:
    *param_3 = 0x303;
    break;
  case 7:
    *param_3 = 0x304;
    break;
  case 8:
    *param_3 = 0x305;
    break;
  case 9:
    *param_3 = 0x306;
    break;
  case 10:
    *param_3 = 0x307;
    break;
  case 0xb:
    *param_3 = 0x308;
    break;
  default:
    goto switchD_10037e83b_caseD_c;
  case 0xe:
    *param_3 = 0x8001;
    break;
  case 0xf:
    *param_3 = 0x8002;
  }
  uVar1 = 1;
switchD_10037e83b_caseD_c:
  return uVar1;
}

