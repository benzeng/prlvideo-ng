
void FUN_10004fb80(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 3) {
    QMutex::lock();
    lVar1 = *(long *)(param_1 + 0x88);
    lVar2 = 0;
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      lVar2 = lVar1;
    }
    FUN_100050750(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x80) = 0;
    QMutex::unlock();
    if (lVar2 != 0) {
      FUN_1004c07d0(param_1,lVar2,0xf0000025);
      return;
    }
  }
  return;
}

