
undefined8 FUN_10053c2d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10053c4b0();
  *param_3 = param_2;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = uVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 1;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_10053c370;
  param_3[5] = FUN_10053c380;
  param_3[6] = FUN_10053c3a0;
  param_3[7] = FUN_10053c3d0;
  param_3[8] = FUN_10053c400;
  param_3[9] = FUN_10053c420;
  param_3[10] = FUN_10053c440;
  param_3[0xb] = FUN_10053c460;
  param_3[0xc] = FUN_10053c480;
  return 0x10053c401;
}

