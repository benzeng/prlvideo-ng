
void FUN_10019e1ac(undefined8 *param_1)

{
  int local_c;
  
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *param_1 = *(undefined8 *)PTR____stdoutp_100ba2338;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  for (local_c = 0; local_c < 100; local_c = local_c + 1) {
    *(undefined1 *)((long)param_1 + (long)local_c + 8) = 0x20;
  }
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  return;
}

