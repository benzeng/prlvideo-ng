
void FUN_1006d4a30(long param_1)

{
  undefined8 local_20;
  undefined4 local_18;
  
  QThread::quit();
  QThread::wait(*(ulong *)(param_1 + 0x28));
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_18 = DAT_100b49e94;
  local_20 = DAT_100b49e8c;
  _AudioObjectRemovePropertyListener(1,&local_20,FUN_1006d4a00,0);
  return;
}

