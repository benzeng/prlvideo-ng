
void FUN_100caa8c0(undefined8 param_1,undefined8 param_2)

{
  long local_38 [2];
  undefined8 local_28;
  
  if (DAT_102318458 == 0) {
    DAT_102318458 = FUN_100cab020();
  }
  (**(code **)(DAT_102318458 + 0x10))(local_38);
  local_28 = param_1;
  (**(code **)(local_38[0] + 0x30))(local_38,param_2);
  return;
}

