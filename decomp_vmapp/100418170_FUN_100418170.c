
char FUN_100418170(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  QMutex::lock();
  iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
  }
  QMutex::unlock();
  if (cVar1 != '\0') {
    FUN_1004181e0(param_1,param_2);
  }
  return cVar1;
}

