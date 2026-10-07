
void * FUN_100466400(long param_1)

{
  int iVar1;
  void *pvVar2;
  void *local_38;
  int local_2c;
  
  QMutex::lock();
  iVar1 = FUN_100466220(param_1);
  pvVar2 = (void *)0x0;
  local_2c = iVar1;
  if (iVar1 != -1) {
    pvVar2 = operator_new(0x28);
    FUN_1004658c0(pvVar2,iVar1);
    local_38 = pvVar2;
    FUN_100466ae0(param_1 + 8,&local_2c,&local_38);
  }
  QMutex::unlock();
  return pvVar2;
}

