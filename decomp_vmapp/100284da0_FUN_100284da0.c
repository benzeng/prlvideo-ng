
void FUN_100284da0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  FUN_100284cb0(param_1,param_1 + 0x20,param_4);
  return;
}

