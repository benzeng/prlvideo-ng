
void FUN_10072ff10(long param_1,int param_2)

{
  undefined8 uVar1;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("normal",6);
  if (param_2 == 3) {
    QString::fromUtf8_helper((char *)&local_28,0x1e1402f);
    QString::operator=(&local_40,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10073004d;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  else if (param_2 == 2) {
    QString::fromUtf8_helper((char *)&local_30,0x1e14025);
    QString::operator=(&local_40,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10073004d;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else if (param_2 == 1) {
    QString::fromUtf8_helper((char *)&local_38,0x1dba26e);
    QString::operator=(&local_40,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10073004d;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10073004d:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10072e090(uVar1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

