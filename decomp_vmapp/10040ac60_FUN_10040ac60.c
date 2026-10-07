
void FUN_10040ac60(long param_1,char param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x38);
  if (param_2 != '\0') {
    plVar2 = (long *)(param_1 + 0x30);
  }
  QMutex::lock();
  puVar1 = (undefined8 *)*plVar2;
  if ((puVar1 != (undefined8 *)0x0) && (*(int *)((long)puVar1 + 0x3c) == 1)) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","PrlAudioCore",1,"Default device has been changed");
    }
    (**(code **)*puVar1)(puVar1);
  }
  QMutex::unlock();
  return;
}

