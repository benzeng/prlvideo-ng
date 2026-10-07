
void FUN_100405fa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_100bbfdf8;
  param_1[2] = PTR_shared_null_100ba20d0;
  uVar1 = FUN_100707430(0xffffffff,0x200);
  param_1[1] = uVar1;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

