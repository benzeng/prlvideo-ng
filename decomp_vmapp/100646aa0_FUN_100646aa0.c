
long FUN_100646aa0(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if ((DAT_1011bcb20 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1011bcb20), iVar2 != 0)) {
    QMutex::QMutex((QMutex *)&DAT_1011bcb18,0);
    ___cxa_atexit(PTR__QMutex_100ba2138,&DAT_1011bcb18,0x100000000);
    ___cxa_guard_release(&DAT_1011bcb20);
  }
  QMutex::lock();
  lVar3 = DAT_10116d140;
  if (DAT_10116d140 == -1) {
    cVar1 = FUN_1006d81f0(1);
    if (cVar1 == '\0') {
      iVar2 = FUN_100646940(0x6008781e,&DAT_10116d140,8);
      lVar3 = DAT_10116d140;
      if (iVar2 != 0) {
        FUN_1008e3970("","pvsHostInfo",0,"Failed to get HVT features");
        lVar3 = 3;
      }
    }
    else {
      DAT_10116d140 = 5;
      lVar3 = 5;
    }
  }
  QMutex::unlock();
  return lVar3;
}

