
void FUN_100d95e60(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!sOwnersFileName.isEmpty()"
                  ,"CAuthHelper.cpp",0xad,"OwnerWrapper");
  }
  return;
}

