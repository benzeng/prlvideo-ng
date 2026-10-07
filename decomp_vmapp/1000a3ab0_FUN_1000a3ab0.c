
void FUN_1000a3ab0(long param_1)

{
  if (*(long *)(param_1 + 0x1158) != 0) {
    FUN_1000a3b00(param_1);
    *(undefined8 *)(param_1 + 0x1158) = 0;
  }
  if (*(long **)(param_1 + 0x1950) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1950) + 8))();
  }
  *(undefined8 *)(param_1 + 0x1950) = 0;
  return;
}

