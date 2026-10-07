
void FUN_10042d6a0(int *param_1)

{
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  if ((*param_1 == 0xb) && (*(int *)(((QString *)(param_1 + 2))->field0_0x0 + 4) != 0)) {
    QString::toUtf8();
    if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f)
      ;
    }
    _remove((char *)(local_30 + *(long *)(local_30 + 0x10)));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10042d72d;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_10042d72d:
  if (*(undefined **)(param_1 + 2) != PTR_shared_null_100ba20d0) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 2),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10042d781;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_10042d781:
  if (-1 < param_1[4]) {
    _close(param_1[4]);
  }
  param_1[4] = -1;
  *param_1 = 0xc;
  return;
}

