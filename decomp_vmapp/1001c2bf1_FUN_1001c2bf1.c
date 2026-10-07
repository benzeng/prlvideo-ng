
undefined4 FUN_1001c2bf1(int *param_1,undefined8 *param_2,int *param_3)

{
  undefined4 local_28;
  
  if (((param_1 == (int *)0x0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (int *)0x0)) {
    local_28 = 0xffffffff;
  }
  else if (*param_1 == 5) {
    *param_2 = *(undefined8 *)(param_1 + 10);
    if (param_1[0xc] < 1) {
      *param_3 = 0;
    }
    else {
      *param_3 = param_1[0xc];
    }
    local_28 = 0;
  }
  else if (*param_1 == 6) {
    *param_2 = *(undefined8 *)(param_1 + 10);
    if (param_1[0xc] < 1) {
      *param_3 = 0;
    }
    else {
      *param_3 = param_1[0xc];
    }
    local_28 = 0;
  }
  else {
    local_28 = 0xffffffff;
  }
  return local_28;
}

