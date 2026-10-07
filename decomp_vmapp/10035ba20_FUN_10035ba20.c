
void FUN_10035ba20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_28;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = param_1 + 6;
  param_1[8] = param_1 + 6;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(ulong *)((long)param_1 + 0x14) = (ulong)uStack_28;
  *(undefined4 *)(param_1 + 5) = 3;
  uVar1 = FUN_10070e6f0("I@video.query_wait");
  param_1[10] = uVar1;
  return;
}

