
void FUN_100d2c700(undefined8 *param_1,undefined8 *param_2,QDomDocument *param_3)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_10225b460;
  QDomDocument::QDomDocument((QDomDocument *)(param_1 + 1),param_3);
  piVar1 = (int *)*param_2;
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_100d2af40(param_1 + 3);
  param_1[6] = PTR_shared_null_1021e12f0;
  FUN_100d25100((QDomDocument *)(param_1 + 1),param_2,param_1 + 6);
  return;
}

