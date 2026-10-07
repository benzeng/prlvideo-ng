
void FUN_1000c6990(long param_1)

{
  FUN_1000d68b0(param_1 + 0x2b8);
  FUN_1000d5620(param_1 + 0x208);
  if (*(long **)(param_1 + 0x318) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x318) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x318) = 0;
  if (*(void **)(param_1 + 0x340) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x340));
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (*(void **)(param_1 + 0x348) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x348));
  }
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (*(void **)(param_1 + 0x350) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x350));
  }
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  return;
}

