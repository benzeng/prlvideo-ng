
void FUN_100330e80(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  QMutex::lock();
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,
                  "[CLIENT] [CVmDesktopCoherenceLogic::stopCoherence] ChrClietnRef = 0x%p\n",
                  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,
                    "[CLIENT] [CVmDesktopCoherenceLogic::stopCoherence] Stopping Coherence\n");
      plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
    }
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
  }
  QMutex::unlock();
  return;
}

