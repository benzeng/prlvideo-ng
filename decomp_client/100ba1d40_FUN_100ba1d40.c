
void FUN_100ba1d40(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((long)param_1 + 0x10) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x10));
    }
    if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x18));
    }
    _free(param_1);
    return;
  }
  return;
}

