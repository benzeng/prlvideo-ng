
undefined8 FUN_100198ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  QArrayData *pQVar2;
  Data_conflict local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar2 = local_40 + *(long *)(local_40 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  uVar1 = _PrlVm_StoreValueByKey(uVar1,pQVar2,local_48 + *(long *)(local_48 + 0x10),param_4);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  uVar1 = FUN_100191960(param_1,uVar1,0x853,&local_58);
  QVariant::~QVariant((QVariant *)&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100198bb9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100198bb9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar1;
}

