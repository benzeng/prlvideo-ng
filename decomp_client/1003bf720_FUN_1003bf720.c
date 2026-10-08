
void FUN_1003bf720(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  FUN_1003be560(&local_50);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df1f84);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003bf7bd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003bf7bd:
  FUN_1003e1800(&local_40,uVar4,&local_48,0);
  uVar1 = QVariant::toUInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003bf816;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003bf816:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003bf846;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003bf846:
  uVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
  FUN_100110c30(uVar2,uVar3,uVar1);
  return;
}

