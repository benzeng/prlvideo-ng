
void FUN_100a5e700(undefined8 param_1)

{
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QByteArray::QByteArray((QByteArray *)&local_30,"macln:",-1);
  QByteArray::append((QByteArray *)&local_30);
  FUN_100a60680(&local_38,local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)(local_38 + 4) == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","LayoutSyncClient",1,"cannot find match for %s",
                    local_30 + *(long *)(local_30 + 0x10));
    }
    FUN_100a5e640(param_1,local_30 + *(long *)(local_30 + 0x10));
  }
  else {
    FUN_100a5e510(param_1,&local_38,1);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a5e7d9;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100a5e7d9:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

