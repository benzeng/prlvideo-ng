
void FUN_1008cf230(undefined8 param_1)

{
  long local_30 [2];
  undefined8 local_20;
  
  if (DAT_1011c2a18 == 0) {
    DAT_1011c2a18 = FUN_1008cfaa0();
  }
  (**(code **)(DAT_1011c2a18 + 0x10))(local_30);
  local_20 = param_1;
  (**(code **)(local_30[0] + 0x20))(local_30);
  return;
}

