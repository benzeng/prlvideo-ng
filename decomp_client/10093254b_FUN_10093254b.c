
undefined4 FUN_10093254b(int *param_1,int param_2)

{
  undefined4 local_18;
  
  if (param_1 == (int *)0x0) {
    local_18 = 0;
  }
  else if ((*param_1 == 5) || (param_1[0x28] == 0x2d)) {
    local_18 = 0;
  }
  else if (*param_1 == 1) {
    if (param_1[0x28] == param_2) {
      local_18 = 1;
    }
    else if ((param_1[0x28] == 0x2e) || (param_1[0x28] == 0x2d)) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_10093254b(*(undefined8 *)(param_1 + 0xe),param_2);
    }
  }
  else {
    local_18 = FUN_10093254b(*(undefined8 *)(param_1 + 0xe),param_2);
  }
  return local_18;
}

