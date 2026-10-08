
void FUN_100acb390(long param_1)

{
  char cVar1;
  bool bVar2;
  
  QMutex::lock();
  bVar2 = true;
  if (*(int *)(param_1 + 0x58) == 0) {
    cVar1 = FUN_100acd1e0(param_1,param_1 + 0xe0);
    if (cVar1 != '\0') goto LAB_100acb455;
    *(undefined4 *)(param_1 + 0x58) = 1;
    bVar2 = false;
    QMutex::unlock();
    cVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x60))();
    if (cVar1 != '\0') {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"CoherenceToolClient: Coherence Mode started.");
      }
      QTimer::stop();
      FUN_100ae0ed0(param_1);
      FUN_100ad2310(*(undefined8 *)(param_1 + 0x78));
      _PrlDevDisplay_NeedCursorData(*(undefined8 *)(param_1 + 0x48));
    }
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
LAB_100acb455:
  if (!bVar2) {
    return;
  }
  QMutex::unlock();
  return;
}

