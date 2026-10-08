
void FUN_1008d89e4(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0xf;
  if (param_1 == 0) {
    FUN_1008d87c3(0,param_2);
  }
  else {
    FUN_1008d87c3(*(undefined8 *)(param_1 + 0x18),param_2);
  }
  return;
}

