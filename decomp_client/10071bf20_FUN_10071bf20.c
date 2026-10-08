
undefined4 FUN_10071bf20(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == *param_2) {
    if (param_1[1] == param_2[1]) {
      uVar1 = CONCAT31((int3)((uint)param_1[2] >> 8),param_1[2] == param_2[2]);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

