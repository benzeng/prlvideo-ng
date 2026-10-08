
undefined8 FUN_100265840(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  local_30 = *(long *)(param_1 + 0x138);
  if (local_30 != 0) {
    _PrlHandle_AddRef();
  }
  lVar1 = FUN_10015e160(uVar2,&local_28,param_1 + 0x140,&local_30,0);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (lVar1 == 0) {
    uVar2 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to create Bootcamp VM. Failed to create VM registration request");
  }
  else {
    uVar2 = 0;
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar2;
}

