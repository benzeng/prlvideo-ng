
undefined1 FUN_100acb0d0(long param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  QMutex::lock();
  bVar4 = true;
  if (*(int *)(param_1 + 0x58) == 1) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(**(long **)(param_1 + 0x78) + 0x68))();
    bVar4 = false;
    QMutex::unlock();
    QTimer::stop();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x70));
    FUN_10018c2b0(uVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getMouseSync();
    uVar2 = MouseSync::isEnabled();
    _PrlDevDisplay_SetMouseCursorState(uVar1,uVar2);
    FUN_100ae0f50(param_1,param_2,param_3);
    uVar2 = 1;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"CoherenceToolClient: Coherence Mode stopped.");
    }
  }
  else {
    uVar2 = 0;
  }
  if (bVar4) {
    QMutex::unlock();
  }
  return uVar2;
}

