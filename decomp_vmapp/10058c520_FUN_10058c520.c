
char FUN_10058c520(long param_1)

{
  char cVar1;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x10d8) == 8) {
    QMutex::unlock();
    cVar1 = '\x01';
  }
  else {
    cVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x1168),*(long *)(param_1 + 8) + 0x90);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x10d8) != 8)) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","state == DONE","Storage.cpp",
                    0xcf9,"wait");
    }
    QMutex::unlock();
  }
  return cVar1;
}

