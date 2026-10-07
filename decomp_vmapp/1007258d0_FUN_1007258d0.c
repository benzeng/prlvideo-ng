
void FUN_1007258d0(void *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x18));
    }
    if (*(void **)((long)param_1 + 0x20) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x20));
    }
    puVar1 = *(undefined8 **)((long)param_1 + 0x38);
    while (puVar1 != (undefined8 *)((long)param_1 + 0x38)) {
      puVar1 = (undefined8 *)*puVar1;
      FUN_1007258d0();
    }
    _free(param_1);
    return;
  }
  return;
}

