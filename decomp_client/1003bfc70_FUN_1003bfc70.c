
bool FUN_1003bfc70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QString local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  FUN_1003be560(&local_48);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_19 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1df1f84);
  QString::append(&local_40);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003bfd08;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003bfd08:
  FUN_1003e1800(&local_38,uVar2,&local_40,0);
  iVar1 = QVariant::toUInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003bfd60;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003bfd60:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1003bfd90;
      local_19 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003bfd90:
  return iVar1 == 3;
}

