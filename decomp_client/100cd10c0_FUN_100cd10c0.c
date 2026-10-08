
bool FUN_100cd10c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  *(int *)(param_1 + 0x20) = param_2;
  if (param_2 != 6) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = param_3;
    *(undefined8 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return param_2 == 6;
}

