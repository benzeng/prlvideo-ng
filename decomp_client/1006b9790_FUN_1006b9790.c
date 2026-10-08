
QArrayData * FUN_1006b9790(void)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  lVar1 = QAction::menu();
  if (lVar1 == 0) {
    QObject::objectName();
    QString::toLocal8Bit();
    pQVar2 = local_40 + *(long *)(local_40 + 0x10);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006b992a;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1006b992a:
    if (*(int *)local_48 == -1) {
      return pQVar2;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return pQVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
    return pQVar2;
  }
  QAction::menu();
  QObject::objectName();
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_11 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1e11066);
  QString::append(&local_30);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006b9829;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1006b9829:
  QString::toUtf8();
  lVar1 = *(long *)(local_28 + 0x10);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006b986d;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1006b986d:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006b989d;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006b989d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return local_28 + lVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return local_28 + lVar1;
}

