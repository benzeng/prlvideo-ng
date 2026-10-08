
undefined8 FUN_100581420(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (DAT_102274430 == 0) {
    DAT_102274430 = FUN_100581620("Remaps::Profile",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102274430;
  *param_3 = param_2;
  param_3[1] = 0;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_1005814e0;
  param_3[5] = FUN_1005814f0;
  param_3[6] = FUN_100581510;
  param_3[7] = FUN_100581540;
  param_3[8] = FUN_100581570;
  param_3[9] = FUN_100581590;
  param_3[10] = FUN_1005815b0;
  param_3[0xb] = FUN_1005815d0;
  param_3[0xc] = FUN_1005815f0;
  return 0x100581501;
}

