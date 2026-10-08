
void FUN_100caa0f0(long param_1,undefined8 param_2)

{
  if (DAT_102318458 == 0) {
    DAT_102318458 = FUN_100cab020();
  }
  (**(code **)(DAT_102318458 + 0x10))(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

