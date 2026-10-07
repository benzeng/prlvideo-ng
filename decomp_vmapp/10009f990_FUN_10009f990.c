
void FUN_10009f990(long param_1,undefined8 *param_2)

{
  long lVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  FUN_10051a600(param_1 + 0x10f0,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10009f9f8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10009f9f8:
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
    return;
  }
  DAT_1011cc810 = DAT_1011cc810 + 1;
  QMutex::unlock();
  if (*(long *)(lVar1 + 0x40) != 0) {
    FUN_100024c30();
  }
  lVar1 = *(long *)(lVar1 + 0xe8);
  if (lVar1 != 0) {
    local_38 = (QArrayData *)*param_2;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_100052fc0(lVar1,&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009fa8e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10009fa8e:
  FUN_100026030(&DAT_1011cc7f8);
  return;
}

