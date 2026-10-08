
void FUN_100a6fd70(long param_1,int param_2,QString *param_3,undefined8 param_4)

{
  QMutex::lock();
  if (param_2 == 5) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(int *)(param_1 + 8) = param_2;
    QString::operator=((QString *)(param_1 + 0x10),param_3);
    FUN_100a71450(param_1 + 0x18,param_4);
  }
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

