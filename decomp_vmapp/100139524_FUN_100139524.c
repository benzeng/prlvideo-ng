
undefined4 FUN_100139524(undefined1 *param_1,int *param_2,long param_3,undefined4 *param_4)

{
  undefined4 local_2c;
  
  if (param_3 == 0) {
    if (*param_2 < 2) {
      *param_2 = 0;
      *param_4 = 0;
      local_2c = 0;
    }
    else {
      *param_1 = 0xff;
      param_1[1] = 0xfe;
      *param_2 = 2;
      *param_4 = 0;
      local_2c = 2;
    }
  }
  else {
    local_2c = FUN_10013917f(param_1,param_2,param_3,param_4);
  }
  return local_2c;
}

