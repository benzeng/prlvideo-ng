
undefined8 FUN_100acaf40(long *param_1,char param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0xa0))();
  if (cVar2 == '\0') {
    QMutex::lock();
    lVar1 = param_1[0xb];
    QMutex::unlock();
    if ((int)lVar1 != 1) {
      return 1;
    }
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"CoherenceToolClient: Stopping Coherence...");
    }
    if (param_2 == '\0') {
      FUN_100acb230(param_1,0,0,0);
    }
    FUN_100acb0d0(param_1,param_2,1);
  }
  else {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "CoherenceToolClient: Stop Coherence while start in progress. Cleanup state.");
    }
    FUN_100acb020(param_1);
  }
  return 0;
}

