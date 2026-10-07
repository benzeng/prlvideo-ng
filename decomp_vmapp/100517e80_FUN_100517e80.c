
void FUN_100517e80(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  
  if (param_3 == 2) {
    lVar1 = 0;
    bVar2 = *(long *)(param_1 + 0x68) != 0;
    if (bVar2) {
      QMutex::lock();
      lVar1 = *(long *)(param_1 + 0x68);
    }
    FUN_10051b1b0(lVar1 + 8,param_2);
  }
  else {
    if (param_3 != 1) {
      return;
    }
    lVar1 = 0;
    bVar2 = *(long *)(param_1 + 0x68) != 0;
    if (bVar2) {
      QMutex::lock();
      lVar1 = *(long *)(param_1 + 0x68);
    }
    FUN_10000c490(lVar1 + 8,param_2);
    lVar1 = *(long *)(param_1 + 0x68);
    if ((*(long *)(lVar1 + 0x10) != 0) && (*(long *)(*(long *)(lVar1 + 0x10) + 0x10) != 0)) {
      FUN_100519ab0(param_1 + 0x28,param_2,lVar1 + 0x10,*(undefined4 *)(lVar1 + 0x18),0,0);
    }
  }
  if (!bVar2) {
    return;
  }
  QMutex::unlock();
  return;
}

