
void FUN_10029acd0(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    if (cVar2 != '\0') goto LAB_10029ad2a;
  }
  FUN_1008e3970("AudioAS","LocalDevices",0,"[CSoundOutputDevice] Change AC97 volume failed");
LAB_10029ad2a:
  QMutex::unlock();
  return;
}

