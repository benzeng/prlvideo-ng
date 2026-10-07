
void FUN_1004b7810(long param_1,QString *param_2)

{
  QMutex::lock();
  QString::operator=((QString *)(param_1 + 0x40),param_2);
  QMutex::unlock();
  return;
}

