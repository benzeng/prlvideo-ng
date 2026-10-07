
int FUN_1006173d0(void)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = FUN_100615920(1);
  if (-1 < iVar1) {
    iVar1 = 0;
    FUN_100257600(&DAT_1011cca50);
  }
  QMutex::unlock();
  return iVar1;
}

