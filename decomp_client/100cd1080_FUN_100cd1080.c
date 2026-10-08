
bool FUN_100cd1080(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  *(int *)(param_1 + 0x20) = param_2;
  bVar1 = 1 < param_2 - 1U;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x28) = param_4;
  }
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return !bVar1;
}

