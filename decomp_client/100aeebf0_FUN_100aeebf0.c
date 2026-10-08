
long FUN_100aeebf0(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if ((DAT_102313b70 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102313b70), iVar2 != 0)) {
    QMutex::QMutex((QMutex *)&DAT_102313b68,0);
    ___cxa_atexit(PTR__QMutex_1021e14b0,&DAT_102313b68,0x100000000);
    ___cxa_guard_release(&DAT_102313b70);
  }
  QMutex::lock();
  lVar3 = DAT_1022cf0f0;
  if (DAT_1022cf0f0 == -1) {
    cVar1 = FUN_100d80630(1);
    if (cVar1 == '\0') {
      iVar2 = FUN_100aeea90(0x6008781e,&DAT_1022cf0f0,8);
      lVar3 = DAT_1022cf0f0;
      if (iVar2 != 0) {
        FUN_100df99c0("","pvsHostInfo",0,"Failed to get HVT features");
        lVar3 = 3;
      }
    }
    else {
      DAT_1022cf0f0 = 5;
      lVar3 = 5;
    }
  }
  QMutex::unlock();
  return lVar3;
}

