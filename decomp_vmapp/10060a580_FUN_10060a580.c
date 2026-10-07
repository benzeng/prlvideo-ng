
void FUN_10060a580(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0xffffffff00000000;
  return;
}

