
undefined8 FUN_10087d430(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_10081f930(0,param_1,param_1 + 0xc);
  uVar2 = 1;
  if (*(code **)(param_2 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_2 + 0x38))(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
      FUN_10081fa50(0,param_1,param_1 + 0xc);
    }
  }
  return uVar2;
}

