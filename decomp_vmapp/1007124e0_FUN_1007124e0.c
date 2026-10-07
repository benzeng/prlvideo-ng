
void FUN_1007124e0(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100bce1c0;
  QMutex::unlock();
  QThread::wait((ulong)param_1);
  if (*(int *)(param_1 + 0x30) != 0) {
    _IOPMAssertionRelease();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
      (**(code **)(param_1 + 0x58))
                (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
    }
    if (*(code **)(param_1 + 0x68) != (code *)0x0) {
      (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    _dlclose();
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  QThread::~QThread(param_1);
  return;
}

