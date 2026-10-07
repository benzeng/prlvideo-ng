
bool FUN_1008a11f0(long *param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    if (*param_1 != param_2) {
      param_2 = FUN_10089c040(&DAT_100be16c0,param_2);
      if (param_2 == 0) {
        param_2 = *param_1;
      }
      else {
        FUN_1008a4c40(*param_1,&DAT_100be16c0);
        *param_1 = param_2;
      }
    }
    bVar1 = param_2 != 0;
  }
  return bVar1;
}

