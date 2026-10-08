
undefined8 FUN_100ca23c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_100c5c0c0(param_3,"%*s",param_4,"");
  if (*param_2 != 0) {
    FUN_100c58980(param_3,"Not Before: ",0xc);
    FUN_100c7f2c0(param_3,*param_2);
    if (param_2[1] != 0) {
      FUN_100c58980(param_3,", ",2);
    }
  }
  if (param_2[1] != 0) {
    FUN_100c58980(param_3,"Not After: ",0xb);
    FUN_100c7f2c0(param_3,param_2[1]);
  }
  return 1;
}

