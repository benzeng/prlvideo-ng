
void FUN_100adb160(void)

{
  long *plVar1;
  long *plVar2;
  
  QMutex::lock();
  plVar2 = DAT_102311858;
  plVar1 = DAT_102311858 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    DAT_102311858 = (long *)0x0;
  }
  QMutex::unlock();
  return;
}

