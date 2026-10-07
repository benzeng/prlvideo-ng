
undefined8
FUN_100499150(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (param_2 < 0x24) {
    uVar1 = 0;
  }
  else {
    *param_3 = *param_1;
    *param_4 = param_1[1];
    *param_5 = param_1[2];
    *param_7 = param_1[3];
    uVar1 = *(undefined8 *)(param_1 + 5);
    param_6[1] = *(undefined8 *)(param_1 + 7);
    *param_6 = uVar1;
    uVar1 = FUN_1004991a0(param_1 + 9,(ulong)param_2 - 0x24,param_1[4],param_8);
  }
  return uVar1;
}

