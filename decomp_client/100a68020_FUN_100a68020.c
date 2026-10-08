
undefined8 FUN_100a68020(undefined4 *param_1,uint param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  
  *(long *)(param_1 + 4) = param_3;
  param_1[6] = param_4;
  param_1[7] = 1;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_2 + 0xc;
  uVar1 = (ulong)param_2;
  *(undefined4 *)(param_3 + uVar1) = 0;
  *(undefined4 *)(param_3 + 8 + uVar1) = 0;
  *(undefined4 *)(param_3 + 4 + uVar1) = 0x1000;
  return 0;
}

