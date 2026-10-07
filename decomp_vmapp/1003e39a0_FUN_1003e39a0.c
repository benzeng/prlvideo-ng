
undefined8 FUN_1003e39a0(long *param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x15) = param_2;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  uVar1 = param_2 >> 0x10 & 0xf;
  if ((uVar1 != 5) && (uVar1 < 9)) {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    if (param_2 == 0x62800) {
      (**(code **)(*param_1 + 0x298))(param_1,param_1[7],0x40);
    }
  }
  return 0xffffffff;
}

