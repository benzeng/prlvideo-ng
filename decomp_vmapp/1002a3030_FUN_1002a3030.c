
void FUN_1002a3030(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_100bb29c0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  FUN_10029c770(param_1 + 5,1,2,48000);
  param_1[0x1c] = param_1 + 0x1e;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0x7d000000000;
  return;
}

