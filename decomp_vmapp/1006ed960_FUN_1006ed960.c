
void FUN_1006ed960(long *param_1,long param_2)

{
  *param_1 = param_2;
  param_1[1] = (long)PTR_shared_null_100ba20d0;
  if (param_2 == 0) {
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","pAuthHelper",
                  "CAuthHelper.cpp",0xa8,"OwnerWrapper");
  }
  return;
}

