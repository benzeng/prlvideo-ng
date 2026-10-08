
void FUN_10022a900(long param_1)

{
  long lVar1;
  Data *local_30;
  long local_28;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x90) + 4) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 == 0) {
    return;
  }
  local_28 = *(long *)(param_1 + 0xc0);
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  CSdkRequest::sendAnswer(lVar1,&local_28,0x3e81,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10022a993;
    }
    QListData::dispose(local_30);
  }
LAB_10022a993:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 4) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    QObject::deleteLater();
  }
  return;
}

