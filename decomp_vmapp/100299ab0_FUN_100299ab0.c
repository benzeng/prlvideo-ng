
void FUN_100299ab0(long *param_1,char param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (1 < DAT_1011b55f8) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    pcVar3 = "Resume";
    if (param_2 != '\0') {
      pcVar3 = "Pause";
    }
    FUN_1008e3970("AudioAS","LocalDevices",2,"[CSoundDevice] [%s] %s",uVar2,pcVar3);
  }
  QMutex::lock();
  plVar1 = (long *)param_1[0x13];
  if (plVar1 == (long *)0x0) {
    QMutex::unlock();
    if (param_2 != '\0') {
      return;
    }
  }
  else {
    if (param_2 != '\0') {
      (**(code **)(*plVar1 + 0x50))();
      QMutex::unlock();
      return;
    }
    (**(code **)(*plVar1 + 0x48))();
    QMutex::unlock();
  }
  (**(code **)(*param_1 + 0x68))(param_1,1,1,1,1);
  FUN_1002effe0(param_1[0x20]);
  return;
}

