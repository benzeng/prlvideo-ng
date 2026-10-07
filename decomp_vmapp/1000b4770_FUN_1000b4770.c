
bool FUN_1000b4770(long param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == '\0') {
    FUN_1000acd00(param_1,0x100000000,0,1);
    bVar2 = true;
  }
  else {
    cVar1 = FUN_1000afac0(param_1);
    if (cVar1 == '\0') {
      bVar2 = false;
      FUN_1008e3970("","vm",0,"WS can be protected only from the paused state ");
    }
    else {
      QMutex::lock();
      if (*(int *)(param_1 + 0x109b0) == 0) {
        *(undefined4 *)(param_1 + 0x109b0) = 3;
        FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810),7);
        cVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x109a8),param_1 + 68000U);
        if (cVar1 == '\0') {
          FUN_1008e3970("","vm",0,"Failed to protect a WS: request timed out");
        }
        else if (*(int *)(param_1 + 0x109b0) == 3) {
          FUN_1008e3970("","vm",0,"WS pages protection in progress...");
          *(undefined4 *)(param_1 + 0x109b0) = 4;
          QWaitCondition::wait((QMutex *)(param_1 + 0x109a8),param_1 + 68000U);
        }
        else {
          FUN_1008e3970("","vm",0,"Failed to protect a WS: request error");
        }
        bVar2 = *(int *)(param_1 + 0x109b0) == 1;
        if (!bVar2) {
          FUN_1000acd00(param_1,0x100000000,0,1);
        }
        *(undefined4 *)(param_1 + 0x109b0) = 0;
      }
      else {
        bVar2 = false;
        FUN_1008e3970("","vm",0,"WS pages protection is already in progress (%u)",
                      *(undefined4 *)(param_1 + 0x109b0));
      }
      QMutex::unlock();
    }
  }
  return bVar2;
}

