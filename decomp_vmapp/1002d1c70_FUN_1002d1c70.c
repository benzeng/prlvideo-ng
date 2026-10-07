
undefined8 FUN_1002d1c70(undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  byte bVar1;
  long *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[1] = 0x840001000000;
  local_38 = (long *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_10008d2d0(&local_38,*param_2 & 0xfffffffffffffff0 | 1,0xe);
  bVar1 = 0x32;
  if ((*(uint *)((long)param_2 + 0xc) & 0xf0000) != 0x40000) {
    bVar1 = 0;
  }
  *local_38 = (ulong)bVar1 * 0x101010101010101;
  *(int *)(local_38 + 1) = (int)((ulong)bVar1 * 0x101010101010101);
  *(undefined2 *)((long)local_38 + 0xc) = 0;
  FUN_10008d3f0(&local_38);
  return 0x2c00;
}

