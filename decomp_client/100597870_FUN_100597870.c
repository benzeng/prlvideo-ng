
undefined8 FUN_100597870(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (DAT_102274440 == 0) {
    DAT_102274440 = FUN_100597a70("CMouseRemapInfo",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102274440;
  *param_3 = param_2;
  param_3[1] = 0;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_100597930;
  param_3[5] = FUN_100597940;
  param_3[6] = FUN_100597960;
  param_3[7] = FUN_100597990;
  param_3[8] = FUN_1005979c0;
  param_3[9] = FUN_1005979e0;
  param_3[10] = FUN_100597a00;
  param_3[0xb] = FUN_100597a20;
  param_3[0xc] = FUN_100597a40;
  return 0x100597a01;
}

