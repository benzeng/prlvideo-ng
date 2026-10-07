
undefined4 FUN_100106620(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = CONCAT31((int3)((uint)param_1[1] >> 8),param_1[1] == param_2[1]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

