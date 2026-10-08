
void FUN_100330d50(long param_1)

{
  long *plVar1;
  char cVar2;
  
  QMutex::lock();
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,
                  "[CLIENT] [CVmDesktopCoherenceLogic::startCoherence] ChrClient = 0x%p\n",
                  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  }
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) != 0) {
    QMutex::lock();
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
    if (plVar1 == (long *)0x0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x70))();
    }
    QMutex::unlock();
    if (cVar2 == '\0') {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,
                      "[CLIENT] [CVmDesktopCoherenceLogic::startCoherence] Starting Coherence\n");
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x48) + 0x78))();
    }
  }
  QMutex::unlock();
  return;
}

