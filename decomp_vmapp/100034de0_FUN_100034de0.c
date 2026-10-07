
void FUN_100034de0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  param_2[1] = *(undefined8 *)(param_1 + 0xa8);
  *param_2 = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  QMutex::unlock();
  return;
}

