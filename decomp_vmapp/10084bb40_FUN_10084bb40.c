
void FUN_10084bb40(long *param_1)

{
  if (*param_1 != 0) {
    ___bzero(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

