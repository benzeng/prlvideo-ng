
void FUN_1004b79e0(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(*(long *)(param_2 + 0x30) + 0x240);
  if ((dVar1 == param_1) && (!NAN(dVar1) && !NAN(param_1))) {
    return;
  }
  *(double *)(*(long *)(param_2 + 0x30) + 0x240) = param_1;
  QMutex::lock();
  FUN_1004b95a0(*(undefined8 *)(param_2 + 0x20));
  QMutex::unlock();
  return;
}

