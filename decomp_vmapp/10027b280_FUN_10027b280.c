
void FUN_10027b280(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_10008d470(param_1 + 4);
  return;
}

