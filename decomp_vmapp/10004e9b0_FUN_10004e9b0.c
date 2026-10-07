
void FUN_10004e9b0(long param_1,undefined4 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x88);
  lVar2 = 0;
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar2 = lVar1;
  }
  if (param_3 != '\0') {
    FUN_100050750(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  QMutex::unlock();
  if (lVar2 != 0) {
    FUN_1004c07d0(param_1,lVar2,param_2);
    return;
  }
  return;
}

