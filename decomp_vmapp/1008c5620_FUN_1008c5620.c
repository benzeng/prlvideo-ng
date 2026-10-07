
undefined8 FUN_1008c5620(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  uVar1 = 0;
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  return uVar1;
}

