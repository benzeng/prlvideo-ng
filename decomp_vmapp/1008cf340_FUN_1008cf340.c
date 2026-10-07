
void FUN_1008cf340(undefined8 param_1,undefined8 param_2)

{
  long local_38 [2];
  undefined8 local_28;
  
  if (DAT_1011c2a18 == 0) {
    DAT_1011c2a18 = FUN_1008cfaa0();
  }
  (**(code **)(DAT_1011c2a18 + 0x10))(local_38);
  local_28 = param_1;
  (**(code **)(local_38[0] + 0x30))(local_38,param_2);
  return;
}

