
void FUN_100897670(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(code **)(param_1 + 4) = FUN_100897690;
  return;
}

