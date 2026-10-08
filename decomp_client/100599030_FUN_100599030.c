
undefined8 FUN_100599030(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (DAT_1022743e8 == 0) {
    DAT_1022743e8 = FUN_100599230("CSendKeyToVmInfo",0xffffffffffffffff,1);
  }
  iVar1 = DAT_1022743e8;
  *param_3 = param_2;
  param_3[1] = 0;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_1005990f0;
  param_3[5] = FUN_100599100;
  param_3[6] = FUN_100599120;
  param_3[7] = FUN_100599150;
  param_3[8] = FUN_100599180;
  param_3[9] = FUN_1005991a0;
  param_3[10] = FUN_1005991c0;
  param_3[0xb] = FUN_1005991e0;
  param_3[0xc] = FUN_100599200;
  return 0x100599201;
}

