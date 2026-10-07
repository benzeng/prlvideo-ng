
void FUN_100741c30(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _close(*(int *)((long)param_1 + 4));
    FUN_100741ba0(param_1);
    _free(*(void **)((long)param_1 + 8));
    _free(param_1);
    return;
  }
  return;
}

