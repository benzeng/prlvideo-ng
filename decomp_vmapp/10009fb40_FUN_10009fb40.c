
void FUN_10009fb40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
  }
  else {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    lVar2 = *(long *)(lVar1 + 0x68);
    if ((lVar2 != 0) && (lVar2 = lVar2 + -0x10, lVar2 != 0)) {
      local_38 = (QArrayData *)*param_2;
      if (1 < *(int *)local_38 + 1U) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
      }
      FUN_1004a7910(lVar2,&local_38);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10009fbeb;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
  }
LAB_10009fbeb:
  local_40 = (QArrayData *)*param_2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_10051a660(param_1 + 0x10f0,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009fc46;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10009fc46:
  if (lVar1 != 0) {
    FUN_100026030(&DAT_1011cc7f8);
  }
  return;
}

