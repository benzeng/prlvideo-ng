
int FUN_100138af8(undefined1 *param_1,int *param_2,undefined1 *param_3,int *param_4)

{
  long lVar1;
  int local_3c;
  int local_c;
  
  if ((((param_1 == (undefined1 *)0x0) || (param_3 == (undefined1 *)0x0)) || (param_2 == (int *)0x0)
      ) || (param_4 == (int *)0x0)) {
    local_3c = -1;
  }
  else {
    if (*param_4 < *param_2) {
      local_c = *param_4;
    }
    else {
      local_c = *param_2;
    }
    if (local_c < 0) {
      local_3c = -1;
    }
    else {
      for (lVar1 = (long)local_c; lVar1 != 0; lVar1 = lVar1 + -1) {
        *param_1 = *param_3;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
      }
      *param_2 = local_c;
      *param_4 = local_c;
      local_3c = *param_2;
    }
  }
  return local_3c;
}

