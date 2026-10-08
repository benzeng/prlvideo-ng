
undefined1 FUN_10031bb10(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  QString local_40;
  QVariant local_38;
  QString local_28;
  undefined1 local_19;
  
  uVar2 = FUN_100060bb0();
  FUN_1000609c0(uVar2);
  QObject::property((char *)&local_38);
  QVariant::toString();
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x28);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_19 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  uVar1 = operator==(&local_28,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10031bba5;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10031bba5:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10031bbd5;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10031bbd5:
  QVariant::~QVariant(&local_38);
  return uVar1;
}

