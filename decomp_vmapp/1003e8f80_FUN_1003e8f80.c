
undefined8 FUN_1003e8f80(long param_1)

{
  char cVar1;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x88))();
    }
    _usleep(100);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 0;
}

