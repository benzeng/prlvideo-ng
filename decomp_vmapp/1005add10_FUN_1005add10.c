
void FUN_1005add10(undefined8 *param_1)

{
  ___bzero(param_1,0x1000);
  *param_1 = 0x686361436c7250;
  param_1[1] = 0x302e302e30;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x20;
  *(undefined4 *)((long)param_1 + 0x24) = 0x20000;
  *(undefined4 *)(param_1 + 5) = 0x200;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}

