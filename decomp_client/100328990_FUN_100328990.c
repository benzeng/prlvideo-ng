
void FUN_100328990(QObject *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10220bab0;
  QMutex::lock();
  if (*(QObject **)(param_1 + 0x58) != (QObject *)0x0) {
    QObject::disconnect(*(QObject **)(param_1 + 0x58),"2DesktopGeometryChangedSignal()",param_1,
                        "2coherenceDesktopGeometryChanged()");
    FUN_100adb160(0);
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(param_1 + 0x50));
  FUN_100327dc0(param_1);
  return;
}

