
undefined8 FUN_1000356e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"devicesCommandId = %d",*(undefined4 *)(param_3 + 0xc));
  }
  switch(*(undefined4 *)(param_3 + 0xc)) {
  case 1:
    uVar1 = FUN_1000388c0(param_2,param_3 + 0x10);
    break;
  case 2:
    uVar1 = FUN_1000389d0(param_2,param_3 + 0x10);
    break;
  case 3:
    uVar1 = FUN_1000387e0(param_2);
    break;
  case 4:
    uVar1 = FUN_100038180(param_2,param_3 + 0x20,*(undefined4 *)(param_3 + 0x18));
    break;
  case 5:
    uVar1 = FUN_100038850(param_2);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

