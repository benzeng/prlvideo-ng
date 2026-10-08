
void FUN_100acb020(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x58) = 0;
  (**(code **)(**(long **)(param_1 + 0x78) + 0x68))();
  *(undefined1 *)(param_1 + 0x81) = 0;
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
  FUN_100ae0ef0(param_1,0xd);
  return;
}

