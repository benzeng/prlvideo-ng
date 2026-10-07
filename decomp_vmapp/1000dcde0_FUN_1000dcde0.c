
void FUN_1000dcde0(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 6) = 1;
  *(undefined1 *)((long)param_1 + 7) = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0x22) = 0;
  param_1[9] = 0xfee00000;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x2a) = 0;
  *(undefined1 *)((long)param_1 + 0x2b) = 0;
  *param_1 = 0x504d4350;
  *(undefined8 *)(param_1 + 2) = 0x20202020534c5250;
  *(undefined8 *)(param_1 + 4) = 0x2020202020204d56;
  param_1[6] = 0x20202020;
  return;
}

