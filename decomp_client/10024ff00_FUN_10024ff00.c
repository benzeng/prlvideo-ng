
undefined8 FUN_10024ff00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (DAT_1022743b0 == 0) {
    DAT_1022743b0 = FUN_100250100("GUI::StringPair",0xffffffffffffffff,1);
  }
  iVar1 = DAT_1022743b0;
  *param_3 = param_2;
  param_3[1] = 0;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_10024ffc0;
  param_3[5] = FUN_10024ffd0;
  param_3[6] = FUN_10024fff0;
  param_3[7] = FUN_100250020;
  param_3[8] = FUN_100250050;
  param_3[9] = FUN_100250070;
  param_3[10] = FUN_100250090;
  param_3[0xb] = FUN_1002500b0;
  param_3[0xc] = FUN_1002500d0;
  return 0x100250001;
}

