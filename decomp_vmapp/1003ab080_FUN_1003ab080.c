
void FUN_1003ab080(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(byte *)((long)param_1 + 0x23) = *(byte *)((long)param_1 + 0x23) & 0xc0;
  return;
}

