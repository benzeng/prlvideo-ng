
void FUN_100260120(long *param_1,ulong param_2)

{
  undefined1 local_38 [24];
  
  if ((param_2 & 1) != 0) {
    FUN_1002601a0(param_1);
  }
  if ((param_2 & 0xe) != 0) {
    (**(code **)(*param_1 + 0x88))(param_1,local_38);
    (**(code **)(*(long *)param_1[0x15] + 0x28))((long *)param_1[0x15],local_38);
    if ((param_2 & 4) != 0) {
      (**(code **)(*(long *)param_1[0x15] + 0x20))((long *)param_1[0x15],local_38);
      (**(code **)(*param_1 + 0x90))(param_1,local_38);
    }
  }
  return;
}

