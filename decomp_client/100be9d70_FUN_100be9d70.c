
bool FUN_100be9d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x250) = param_2;
    *(undefined8 *)(param_1 + 600) = param_3;
  }
  return param_1 != 0;
}

