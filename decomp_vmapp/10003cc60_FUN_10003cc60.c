
void FUN_10003cc60(long param_1)

{
  QMutex::lock();
  if (*(int *)(*(long *)(param_1 + 0xb0) + 4) != 0) {
    FUN_10051c510(param_1,param_1 + 0xb0);
    QByteArray::clear();
  }
  QMutex::unlock();
  return;
}

