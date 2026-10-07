
void FUN_10054a690(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0xa3e78c);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10054a708;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10054a708:
  QString::toUtf8();
  local_20 = 0;
  cVar2 = FUN_100761b20(local_38 + *(long *)(local_38 + 0x10),&local_20,1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10054a766;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10054a766:
  if (cVar2 == '\0') goto LAB_10054a872;
  QString::toUtf8();
  cVar2 = FUN_100761940(local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10054a7ba;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10054a7ba:
  if (cVar2 == '\0') goto LAB_10054a872;
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::cleanup_obsolete(%s) deleted %s",
                local_48 + lVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10054a842;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10054a842:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10054a872;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10054a872:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

