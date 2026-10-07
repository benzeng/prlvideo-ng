
void FUN_1005592d0(long param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    _free(param_2);
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  }
  return;
}

