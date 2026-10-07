
void FUN_10054ef40(long param_1)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

