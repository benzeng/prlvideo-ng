
void FUN_10040b530(long param_1,char param_2,char param_3)

{
  long *plVar1;
  char *pcVar2;
  
  FUN_1006d5830(param_1 + 0x10);
  if (param_3 == '\0') {
    QMutex::lock();
  }
  FUN_10040ffc0(DAT_1011cc6c8,param_2,0);
  FUN_100410020(DAT_1011cc6c8,param_2,0);
  plVar1 = (long *)(param_1 + 0x38);
  if (param_2 != '\0') {
    plVar1 = (long *)(param_1 + 0x30);
  }
  plVar1 = (long *)*plVar1;
  if (plVar1 == (long *)0x0) {
    pcVar2 = "output";
    if (param_2 != '\0') {
      pcVar2 = "input";
    }
    FUN_1008e3970("","PrlAudioCore",0,"Try to close NULL %s device",pcVar2);
  }
  else {
    FUN_10040c630(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (param_2 == '\0') {
      *(long *)(param_1 + 0x38) = 0;
    }
    else {
      *(long *)(param_1 + 0x30) = 0;
    }
  }
  if (param_3 != '\0') {
    return;
  }
  QMutex::unlock();
  return;
}

