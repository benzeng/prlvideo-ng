
void FUN_1004cde50(long param_1,undefined4 param_2)

{
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(param_2) {
  case 0:
  case 3:
    QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_1022179f0,0x1dfa155);
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
    break;
  case 1:
    QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_1022179f0,0x1dfa164);
    QString::operator=(&local_28,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    break;
  case 2:
    QMetaObject::tr((char *)&local_40,(char *)&PTR_PTR_1022179f0,0x1dfa175);
    QString::operator=(&local_28,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  if (*(int *)(local_28.field0_0x0 + 4) != 0) {
    QAbstractButton::setText(*(QString **)(*(long *)(param_1 + 0x38) + 0xa0));
  }
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88),0));
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

