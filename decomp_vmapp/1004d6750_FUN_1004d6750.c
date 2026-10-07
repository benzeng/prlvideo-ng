
void FUN_1004d6750(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((long)param_1 + 8) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 8));
    }
    operator_delete(param_1);
    return;
  }
  return;
}

