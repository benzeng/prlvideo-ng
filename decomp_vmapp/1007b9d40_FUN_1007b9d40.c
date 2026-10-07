
undefined1 FUN_1007b9d40(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
    if (*param_2 != 0) {
      uVar3 = *(undefined8 *)(*param_2 + 0x10);
    }
    cVar1 = FUN_100790e90(uVar3);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      QMutex::lock();
      lVar2 = QThread::currentThread();
      if ((lVar2 == param_1) || (*(int *)(param_1 + 0x40) == 1)) {
        FUN_1007c4730(param_1 + 0xd0,param_2);
        uVar4 = 1;
        QWaitCondition::wakeOne();
      }
      else {
        uVar4 = 0;
      }
      QMutex::unlock();
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

