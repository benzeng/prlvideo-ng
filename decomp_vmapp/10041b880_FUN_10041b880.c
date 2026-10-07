
undefined1 FUN_10041b880(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  QMutex::lock();
  iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
  if (iVar2 == 0) {
    QMutex::unlock();
    uVar1 = 0;
  }
  else {
    uVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    QMutex::unlock();
  }
  return uVar1;
}

