
void FUN_100644130(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x88))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_100038db0(param_1 + 8);
  FUN_1006500f0(param_1 + 0x28,*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x28) = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

