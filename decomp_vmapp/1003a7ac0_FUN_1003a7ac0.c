
void FUN_1003a7ac0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = param_1;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xfe;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}

