
void FUN_1007112e0(QMutex *param_1)

{
  QMutexData *pQVar1;
  
  pQVar1 = param_1[1].field0_0x0.field0_0x0;
  if (pQVar1 != (QMutexData *)0x0) {
    (**(code **)(*(long *)pQVar1 + 0x20))();
  }
  param_1[1].field0_0x0.field0_0x0 = (QMutexData *)0x0;
  QMutex::~QMutex(param_1);
  return;
}

