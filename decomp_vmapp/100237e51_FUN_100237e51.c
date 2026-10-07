
undefined4 * FUN_100237e51(undefined8 param_1,undefined4 *param_2,long param_3,undefined4 *param_4)

{
  undefined4 *local_28;
  
  local_28 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    if (param_3 == 0) {
      *param_2 = 0xffffffff;
      local_28 = param_2;
    }
    else if (*(undefined4 **)(param_3 + 0x30) == param_2) {
      *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    }
    else if (*(undefined4 **)(param_3 + 0x48) == param_2) {
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_2 + 0x10);
    }
    else if (*(undefined4 **)(param_3 + 0x50) == param_2) {
      *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_2 + 0x10);
    }
  }
  else {
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  return local_28;
}

