
void FUN_10029c070(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  QMutex::lock();
  if (*(int *)(param_1 + 0x50) == 4) {
    *(undefined4 *)(param_1 + 0x50) = 5;
  }
  else if (*(int *)(param_1 + 0x50) == 1) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      pcVar2 = "out";
    }
    else {
      pcVar2 = "in";
    }
    FUN_1008e3970("","LocalDevices",0,"[CHostAudio] [%s] volume sync: wakeup",pcVar2);
    *(undefined4 *)(param_1 + 0x50) = 2;
    lVar1 = FUN_1007d87f0();
    *(long *)(param_1 + 0x58) = lVar1 + *(long *)(param_1 + 0x60);
    QMutex::unlock();
    local_1c = 0x3f800000;
    local_20 = 0;
    FUN_100409a80(*(undefined1 *)(param_1 + 0x18),&local_20,&local_1c);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(local_1c);
    return;
  }
  QMutex::unlock();
  return;
}

