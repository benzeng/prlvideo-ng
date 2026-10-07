
undefined1 FUN_100089e20(long param_1)

{
  char cVar1;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    QDir::absolutePath();
    cVar1 = FUN_1006f89a0(&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100089e82;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_100089e82:
    if (cVar1 != '\0') {
      QDir::absolutePath();
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"[GuestMem] invalid swap dir. Path to vm is remote. (path=%s)",
                    local_30 + *(long *)(local_30 + 0x10));
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_19 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100089efc;
        }
        QArrayData::deallocate(local_30,1,8);
      }
LAB_100089efc:
      if (*(int *)local_38 == -1) {
        return 0;
      }
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 0;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
      return 0;
    }
  }
  cVar1 = QDir::exists();
  if (cVar1 != '\0') {
    return 1;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100089f6a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100089f6a:
  QDir::absolutePath();
  cVar1 = QDir::mkpath(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100089fb5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100089fb5:
  QDir::~QDir((QDir *)&local_40);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}

