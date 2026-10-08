
void FUN_100d95da0(long *param_1,long param_2)

{
  *param_1 = param_2;
  param_1[1] = (long)PTR_shared_null_1021e1288;
  if (param_2 == 0) {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","pAuthHelper",
                  "CAuthHelper.cpp",0xa8,"OwnerWrapper");
  }
  return;
}

