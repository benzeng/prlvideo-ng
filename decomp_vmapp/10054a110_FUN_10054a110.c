
undefined8 FUN_10054a110(long param_1,undefined1 param_2)

{
  char cVar1;
  long lVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::attach_existing(%s)",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054a18b;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10054a18b:
  *(undefined1 *)(param_1 + 0x60) = 0;
  QString::toUtf8();
  local_30 = 0;
  cVar1 = FUN_100761b20(local_40 + *(long *)(local_40 + 0x10),&local_30,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054a1ed;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10054a1ed:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::attach_existing(%s) file doesn\'t exist",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return 1;
    }
    local_58 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    goto LAB_10054a304;
  }
  QString::toUtf8();
  lVar2 = FUN_100761ab0(local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054a241;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10054a241:
  if (lVar2 == 0) {
    cVar1 = FUN_100548fe0(param_1,param_2);
    if (cVar1 == '\0') {
      return 4;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
    return 0;
  }
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::attach_existing(%s) file has non zero size",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 == -1) {
    return 1;
  }
  if (*(int *)local_58 != 0) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + -1;
    UNLOCK();
    if (*(int *)local_58 != 0) {
      return 1;
    }
    local_29 = 0;
  }
LAB_10054a304:
  QArrayData::deallocate(local_58,1,8);
  return 1;
}

