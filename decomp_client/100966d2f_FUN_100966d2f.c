
undefined4 FUN_100966d2f(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *local_30;
  long *local_28;
  
  if ((((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) && (*param_2 != 0)) &&
     (local_28 = param_2, *param_3 != 0)) {
    for (; local_30 = param_3, *local_28 != 0; local_28 = local_28 + 1) {
      for (; *local_30 != 0; local_30 = local_30 + 1) {
        iVar1 = FUN_1009669bf(*local_28,*local_30);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

