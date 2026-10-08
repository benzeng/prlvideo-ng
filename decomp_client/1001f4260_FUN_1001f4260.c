
void FUN_1001f4260(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint in_EAX;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_1 + 0x28);
  uStack_28._0_4_ = in_EAX;
  if (plVar1 != param_2) {
    if (*plVar1 != 0) {
      _PrlHandle_Free();
    }
    lVar2 = *param_2;
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef();
    }
  }
  uStack_28 = (ulong)(uint)uStack_28;
  _PrlHndlList_GetItemsCount(*plVar1,(long)&uStack_28 + 4);
  if (uStack_28._4_4_ == 0) {
    CAbstractTask::removeSubTask((int)param_1);
  }
  return;
}

