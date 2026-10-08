
void FUN_100c95d20(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(code **)(param_1 + 0x48) = FUN_100c95d40;
  return;
}

