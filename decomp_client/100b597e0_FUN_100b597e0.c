
void FUN_100b597e0(long param_1)

{
  undefined8 local_20;
  undefined4 local_18;
  
  QThread::quit();
  QThread::wait(*(ulong *)(param_1 + 0x28));
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_18 = DAT_101cdba74;
  local_20 = DAT_101cdba6c;
  _AudioObjectRemovePropertyListener(1,&local_20,FUN_100b597b0,0);
  return;
}

