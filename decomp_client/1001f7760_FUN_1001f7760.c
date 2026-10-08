
undefined8 FUN_1001f7760(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_40;
  QString local_38;
  QString local_30;
  int local_28;
  undefined1 local_21;
  
  local_28 = 100000;
  _PrlEvent_GetType(*param_2,&local_28);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100188480(&local_38);
    QString::operator=(&local_30,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001f77ef;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1001f77ef:
  if (local_28 == 0x18897) {
    uVar1 = CMessageManager::instance();
    local_40 = *param_2;
    if (local_40 != 0) {
      _PrlHandle_AddRef();
    }
    if (((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
       (lVar2 = *(long *)(param_1 + 0x40), lVar2 == 0)) {
      lVar2 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        lVar2 = *(long *)(param_1 + 0x50);
      }
    }
    CMessageManager::showMessageFromServer(uVar1,&local_40,&local_30,lVar2);
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return 0;
}

