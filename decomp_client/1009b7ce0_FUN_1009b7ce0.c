
void FUN_1009b7ce0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  QString *pQVar1;
  QArrayData *pQVar2;
  bool bVar3;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = *(QString **)(param_1 + 0x68);
  pQVar2 = (QArrayData *)*param_3;
  if (*(int *)(pQVar2 + 4) == 0) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    bVar3 = false;
  }
  else {
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_40,0x1dbaca4);
    QString::append(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b7d72;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1009b7d72:
    local_48.field0_0x0 = local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    bVar3 = true;
    QString::append(&local_48);
  }
  QLineEdit::setText(pQVar1);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b7e3b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1009b7e3b:
  if ((bVar3) && (*(int *)local_50.field0_0x0 != -1)) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b7e70;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1009b7e70:
  QLineEdit::setText(*(QString **)(param_1 + 0x78));
  return;
}

