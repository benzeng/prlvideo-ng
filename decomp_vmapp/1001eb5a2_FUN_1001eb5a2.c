
undefined4 FUN_1001eb5a2(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_1001eaf05();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      return 0xffffffff;
    }
  }
  FUN_1001eafb8(*param_1,param_2);
  return 0;
}

