
bool FUN_1008e4c10(long param_1,int param_2,long *param_3)

{
  if (param_2 == 0) {
    *param_3 = param_1 + 8;
    *(undefined4 *)(param_3 + 1) = 2;
  }
  return param_2 == 0;
}

