
undefined8 FUN_1008c6e40(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_100880ec0(param_3,"%*s",param_4,"");
  if (*param_2 != 0) {
    FUN_10087d780(param_3,"Not Before: ",0xc);
    FUN_1008a3d40(param_3,*param_2);
    if (param_2[1] != 0) {
      FUN_10087d780(param_3,", ",2);
    }
  }
  if (param_2[1] != 0) {
    FUN_10087d780(param_3,"Not After: ",0xb);
    FUN_1008a3d40(param_3,param_2[1]);
  }
  return 1;
}

