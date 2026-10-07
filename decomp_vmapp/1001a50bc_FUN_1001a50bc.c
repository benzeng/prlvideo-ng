
void FUN_1001a50bc(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0xf;
  if (param_1 == 0) {
    FUN_1001a4e9b(0,param_2);
  }
  else {
    FUN_1001a4e9b(*(undefined8 *)(param_1 + 0x18),param_2);
  }
  return;
}

