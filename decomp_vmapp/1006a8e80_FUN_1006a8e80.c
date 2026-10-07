
void FUN_1006a8e80(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      _free((void *)*param_1);
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
  }
  return;
}

