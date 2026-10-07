
void FUN_10009f860(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  QArrayData *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
    return;
  }
  DAT_1011cc810 = DAT_1011cc810 + 1;
  QMutex::unlock();
  if ((*(long *)(lVar1 + 0x28) != 0) && (lVar1 = *(long *)(lVar1 + 0x28) + -0x10, lVar1 != 0)) {
    local_38 = (QArrayData *)*param_2;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_100468770(lVar1,&local_38,param_3);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_2a = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_10009f904;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10009f904:
  FUN_100026030(&DAT_1011cc7f8);
  return;
}

