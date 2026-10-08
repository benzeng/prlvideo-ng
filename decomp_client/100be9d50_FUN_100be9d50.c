
bool FUN_100be9d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x260) = param_2;
    *(undefined8 *)(param_1 + 0x268) = param_3;
  }
  return param_1 != 0;
}

