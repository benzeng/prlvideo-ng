
void FUN_1008ceb70(long param_1,undefined8 param_2)

{
  if (DAT_1011c2a18 == 0) {
    DAT_1011c2a18 = FUN_1008cfaa0();
  }
  (**(code **)(DAT_1011c2a18 + 0x10))(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

