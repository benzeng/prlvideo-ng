
void FUN_10029c150(long param_1)

{
  char *pcVar1;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x50) == 5) {
    *(undefined4 *)(param_1 + 0x50) = 4;
  }
  else if (*(int *)(param_1 + 0x50) - 2U < 2) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      pcVar1 = "out";
    }
    else {
      pcVar1 = "in";
    }
    FUN_1008e3970("","LocalDevices",0,"[CHostAudio] [%s] volume sync: uninstalled",pcVar1);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  QMutex::unlock();
  return;
}

