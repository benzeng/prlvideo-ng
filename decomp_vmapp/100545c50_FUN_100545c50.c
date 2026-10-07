
undefined1 FUN_100545c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  QString::toUtf8();
  local_38 = 0;
  cVar1 = FUN_100761b20(local_40 + *(long *)(local_40 + 0x10),&local_38,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100545cca;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100545cca:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"validate_existing(%s) file doesn\'t exists",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return 0;
    }
    local_60 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
LAB_100545ebf:
    QArrayData::deallocate(local_60,1,8);
    return 0;
  }
  cVar1 = FUN_100545710(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_1005457d0(param_1,param_2,param_3,param_4 + 0x20);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_100545970(param_1,param_2,param_3,param_4 + 0x20), cVar1 == '\0')) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"validate_existing(%s,%#llx,%#llx) invalid",
                    local_60 + *(long *)(local_60 + 0x10),param_2,param_3);
      if (*(int *)local_60 == -1) {
        return 0;
      }
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      goto LAB_100545ebf;
    }
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"validate_existing(%s,%#llx,%#llx) valid compressed image",
                  local_58 + *(long *)(local_58 + 0x10),param_2,param_3);
    if (*(int *)local_58 == -1) {
      return 1;
    }
    local_50 = local_58;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 1;
      }
      local_31 = 0;
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"validate_existing(%s,%#llx,%#llx) valid plain image",
                  local_50 + *(long *)(local_50 + 0x10),param_2,param_3);
    if (*(int *)local_50 == -1) {
      return 1;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 1;
      }
      local_31 = 0;
    }
  }
  QArrayData::deallocate(local_50,1,8);
  return 1;
}

