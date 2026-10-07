
void FUN_10027b660(undefined4 *param_1,long param_2,undefined4 param_3)

{
  *(long *)(*(long *)(param_1 + 6) + 0xf4) = *(long *)(*(long *)(param_1 + 6) + 0xf4) + 1;
  *param_1 = param_1[1];
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[4] = param_3;
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0xb) & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
  return;
}

