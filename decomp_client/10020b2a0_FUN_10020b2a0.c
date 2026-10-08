
void FUN_10020b2a0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  Data *local_30;
  long local_28;
  undefined1 local_19;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x140) != 0) &&
     (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x140) + 4) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x148);
  }
  local_28 = *(long *)(param_1 + 0x158);
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  CSdkRequest::sendAnswer(uVar1,&local_28,param_3 != 1 | 0x3e82,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10020b331;
    }
    QListData::dispose(local_30);
  }
LAB_10020b331:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

