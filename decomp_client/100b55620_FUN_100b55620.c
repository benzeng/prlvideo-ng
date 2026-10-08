
char FUN_100b55620(QString *param_1)

{
  char cVar1;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100b55960(param_1,&local_30,&local_38);
  if (cVar1 != '\0') {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0x1e2468c);
    QString::append(&local_48);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100b556c1;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_100b556c1:
    local_40.field0_0x0 = local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_40);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100b55723;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100b55723:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100b55753;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100b55753:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b55783;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b55783:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return cVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return cVar1;
}

