
undefined8 FUN_100198840(long param_1,char param_2)

{
  undefined8 uVar1;
  Data_conflict local_48;
  undefined4 local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  CBaseNode::toString(SUB81(&local_38,0),(bool)(param_2 + '\x10'));
  QString::toUtf8();
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  uVar1 = _PrlVm_UpdateToolsSection(uVar1,local_30 + *(long *)(local_30 + 0x10));
  local_40 = 0x80000000;
  local_48.field7 = 0;
  uVar1 = FUN_100191960(param_1,uVar1,0x411,&local_48);
  QVariant::~QVariant((QVariant *)&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100198909;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100198909:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar1;
}

