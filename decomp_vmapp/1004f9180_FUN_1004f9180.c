
void FUN_1004f9180(undefined8 *param_1,undefined8 param_2)

{
  QMutex *pQVar1;
  
  *param_1 = param_2;
  pQVar1 = operator_new(0x10);
  QMutex::QMutex(pQVar1,0);
  pQVar1[1].field0_0x0.field0_0x0 = (QMutexData *)PTR_shared_null_100ba2188;
  param_1[1] = pQVar1;
  return;
}

