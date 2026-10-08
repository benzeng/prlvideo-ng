
void FUN_1007abfb0(QString *param_1)

{
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (((param_1[0x23].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) ||
      (*(int *)(param_1[0x23].field0_0x0 + 4) == 0)) ||
     (param_1[0x24].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to update widget title.");
    return;
  }
  FUN_10018d830(&local_38);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_11 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1dc0f00);
  QString::append(&local_30);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac05a;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1007ac05a:
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1df5b8d);
  local_28.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_11 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  QWidget::setWindowTitle(param_1);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac0db;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1007ac0db:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac10b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007ac10b:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ac13b;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1007ac13b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

