
undefined1 FUN_10040b720(long param_1,char param_2)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  
  FUN_1006d5830(param_1 + 0x10);
  plVar2 = (long *)(param_1 + 0x38);
  if (param_2 != '\0') {
    plVar2 = (long *)(param_1 + 0x30);
  }
  QMutex::lock();
  if (*plVar2 == 0) {
    pcVar3 = "output";
    if (param_2 != '\0') {
      pcVar3 = "input";
    }
    uVar1 = 0;
    FUN_1008e3970("","PrlAudioCore",0,"Failed volume change for NULL %s device",pcVar3);
  }
  else {
    uVar1 = FUN_10040cd10();
  }
  QMutex::unlock();
  return uVar1;
}

