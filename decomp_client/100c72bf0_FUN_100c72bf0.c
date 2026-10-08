
void FUN_100c72bf0(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(code **)(param_1 + 4) = FUN_100c72c10;
  return;
}

