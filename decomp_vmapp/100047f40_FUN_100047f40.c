
uint FUN_100047f40(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = param_2;
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x78));
  iVar1 = FUN_100046530(param_1 + 0x70,&local_38);
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x78));
  uVar2 = 0xf0000000;
  if (iVar1 == 0) {
    local_30 = param_2;
    QMutex::lock();
    iVar1 = FUN_100036ff0(param_1 + 0x140,&local_30);
    QMutex::unlock();
    uVar2 = -(uint)(iVar1 == 0) | 0xf0000000;
  }
  return uVar2;
}

