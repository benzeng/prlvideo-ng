
undefined8 FUN_10041c000(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (DAT_102273fb0 == 0) {
    DAT_102273fb0 = FUN_10041c0b0("CVmEdWidgetIniterPrivate::IdValueMap",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273fb0;
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 1) = 10;
  *(undefined4 *)((long)param_3 + 0xc) = 0;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  param_3[3] = FUN_10041c070;
  param_3[4] = FUN_10041c090;
  return 0x10041c001;
}

