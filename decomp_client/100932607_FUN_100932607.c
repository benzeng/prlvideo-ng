
int * FUN_100932607(int *param_1)

{
  int *local_18;
  
  if (param_1 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else if ((*param_1 == 5) || (param_1[0x28] == 0x2d)) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = param_1;
    if (*param_1 != 1) {
      local_18 = (int *)FUN_100932607(*(undefined8 *)(param_1 + 0xe));
    }
  }
  return local_18;
}

