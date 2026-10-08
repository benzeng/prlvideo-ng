
undefined8 FUN_100acac60(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  cVar2 = (**(code **)(*param_1 + 0x98))();
  if (cVar2 == '\0') {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"Unable to start Coherence: tool not available");
    }
    uVar3 = 1;
  }
  else {
    QMutex::lock();
    lVar1 = param_1[0xb];
    QMutex::unlock();
    if ((int)lVar1 == 1) {
      return 1;
    }
    uStack_38 = CONCAT44(1,(undefined4)uStack_38);
    _PrlDevDisplay_IsSlidingMouseEnabled(param_1[9],(long)&uStack_38 + 4);
    if (uStack_38._4_4_ != 0) {
      _PrlDevDisplay_SetMouseCursorState(param_1[9],1);
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"CoherenceToolClient: Starting Coherence...");
      }
      FUN_100ae0eb0(param_1);
      QTimer::stop();
      QTimer::start((int)param_1 + 0xa0);
      QMutex::lock();
      FUN_100ad5120(param_1[0xf],1);
      *(undefined1 *)((long)param_1 + 0x81) = 1;
      QTime::start();
      FUN_100acae30(param_1);
      QMutex::unlock();
      return 0;
    }
    uVar3 = 5;
  }
  FUN_100ae0ef0(param_1,uVar3);
  return 1;
}

