
void FUN_100522b00(undefined8 *param_1,undefined4 param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_1007eb990(&local_20);
  *param_1 = local_20;
  FUN_1007eb930(&local_28);
  param_1[1] = local_28;
  *(undefined4 *)((long)param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

