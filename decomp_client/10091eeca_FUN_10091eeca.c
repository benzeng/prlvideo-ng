
undefined4 FUN_10091eeca(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_10091e82d();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      return 0xffffffff;
    }
  }
  FUN_10091e8e0(*param_1,param_2);
  return 0;
}

