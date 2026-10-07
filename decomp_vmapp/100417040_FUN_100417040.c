
undefined8 FUN_100417040(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  QMutex::lock();
  iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
  if (iVar2 == 0) {
    QMutex::unlock();
    uVar3 = 0;
  }
  else {
    cVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    QMutex::unlock();
    uVar3 = 0;
    if (cVar1 != '\0') {
      FUN_1004170c0(param_1);
      uVar3 = 1;
    }
  }
  return uVar3;
}

