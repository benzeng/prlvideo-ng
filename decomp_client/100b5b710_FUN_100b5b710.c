
QThread * FUN_100b5b710(long param_1)

{
  QThread *this;
  
  if (param_1 != 0) {
    QMutex::lock();
  }
  this = *(QThread **)(param_1 + 8);
  if (this == (QThread *)0x0) {
    this = operator_new(0x38);
    QThread::QThread(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_10223f680;
    this[0x10] = (QThread)0x0;
    *(undefined4 *)(this + 0x14) = 0;
    this[0x18] = (QThread)0x0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(QThread **)(param_1 + 8) = this;
  }
  if (param_1 != 0) {
    QMutex::unlock();
  }
  return this;
}

