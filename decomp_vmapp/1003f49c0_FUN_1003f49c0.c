
QThread * FUN_1003f49c0(void)

{
  int iVar1;
  QThread *pQVar2;
  
  pQVar2 = (QThread *)0x0;
  if ((-2 < DAT_1011bbc80) && (pQVar2 = DAT_1011bbc88, -1 < DAT_1011bbc80)) {
    QMutex::lock();
    if (DAT_1011bbc80 == 0) {
      pQVar2 = operator_new(0x48);
      QThread::QThread(pQVar2,(QObject *)0x0);
      *(undefined ***)pQVar2 = &PTR_FUN_100bbfb70;
      QMutex::QMutex((QMutex *)(pQVar2 + 0x20),0);
      pQVar2[0x28] = (QThread)0x0;
      *(undefined8 *)(pQVar2 + 0x40) = 0;
      *(undefined8 *)(pQVar2 + 0x38) = 0;
      *(undefined8 *)(pQVar2 + 0x30) = 0;
      DAT_1011bbc88 = pQVar2;
      if ((DAT_1011bbca0 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011bbca0), iVar1 != 0)) {
        ___cxa_atexit(FUN_1003f5ab0,&DAT_1011bbc98,0x100000000);
        ___cxa_guard_release(&DAT_1011bbca0);
      }
      DAT_1011bbc80 = -1;
    }
    QMutex::unlock();
    pQVar2 = DAT_1011bbc88;
  }
  return pQVar2;
}

