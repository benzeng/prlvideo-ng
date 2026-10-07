
void FUN_1002c78e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_100bb35e8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = param_3;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0x81;
  *(undefined4 *)(param_1 + 0x292) = 0;
  ___bzero(param_1 + 0xc,0x408);
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)((long)param_1 + 0x46c) = 0;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x291] = 0;
  param_1[0x290] = 0;
  param_1[0x28f] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x294] = 0;
  return;
}

