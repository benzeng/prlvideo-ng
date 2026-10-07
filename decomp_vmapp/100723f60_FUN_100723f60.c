
void FUN_100723f60(void *param_1)

{
  long *plVar1;
  
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x18) != 0) {
      FUN_100724b70();
    }
    plVar1 = *(long **)((long)param_1 + 0x48);
    if (plVar1 != (long *)0x0) {
      if (*plVar1 != 0) {
        FUN_100720d10();
      }
      if (plVar1[1] != 0) {
        FUN_10080e050();
      }
      plVar1[2] = 0;
      plVar1[1] = 0;
      *plVar1 = 0;
      _free(plVar1);
    }
    if (*(long *)((long)param_1 + 0x20) != 0) {
      FUN_100724b70();
    }
    if ((*(long *)((long)param_1 + 0x38) != 0) && (*(void **)((long)param_1 + 0x28) != (void *)0x0))
    {
      _free(*(void **)((long)param_1 + 0x28));
    }
    _free(param_1);
    return;
  }
  return;
}

