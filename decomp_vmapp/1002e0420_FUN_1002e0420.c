
void FUN_1002e0420(long *param_1)

{
  uint uVar1;
  
  FUN_1008e3970("","USB",0,"USB mouse enabled (after guest queue overflow)");
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  uVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  FUN_1000d7a90(*(undefined8 *)(DAT_1011c3698 + 0x107f8),(uVar1 & 1) * 5 + -3);
  return;
}

