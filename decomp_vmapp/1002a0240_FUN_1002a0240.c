
void FUN_1002a0240(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1002997a0();
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x30) + 8))();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1002997a0();
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 8))();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

