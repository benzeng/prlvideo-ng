
void FUN_10029a070(long *param_1)

{
  char cVar1;
  
  if ((long *)param_1[0x13] != (long *)0x0) {
    cVar1 = (**(code **)(*(long *)param_1[0x13] + 0x58))();
    if (cVar1 == '\0') {
      (**(code **)(*(long *)param_1[0x13] + 0x50))();
      if ((int)param_1[0x24] == 2) {
        (**(code **)(*(long *)param_1[0x23] + 0x30))((long *)param_1[0x23],1);
        (**(code **)(*(long *)param_1[0x25] + 0x30))((long *)param_1[0x25],1);
        (**(code **)(*(long *)param_1[0x23] + 0x30))((long *)param_1[0x23],0);
        (**(code **)(*(long *)param_1[0x25] + 0x30))((long *)param_1[0x25],0);
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
      if (cVar1 == '\0') {
        LOCK();
        *(undefined8 *)(param_1[0x17] + 0xf0) = 0;
        UNLOCK();
        *(undefined4 *)(param_1[0x14] + 100) = *(undefined4 *)(param_1[0x14] + 0x68);
      }
    }
  }
  return;
}

