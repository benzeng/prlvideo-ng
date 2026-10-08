
void _PxAppFree(long param_1)

{
  if (*(code **)(param_1 + -8) != (code *)0x0) {
    (**(code **)(param_1 + -8))();
  }
  _free((void *)(param_1 + -8));
  return;
}

