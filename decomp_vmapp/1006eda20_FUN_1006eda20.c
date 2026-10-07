
void FUN_1006eda20(undefined8 *param_1,long *param_2)

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
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!sOwnersFileName.isEmpty()"
                  ,"CAuthHelper.cpp",0xad,"OwnerWrapper");
  }
  return;
}

