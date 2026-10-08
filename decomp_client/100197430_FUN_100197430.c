
undefined8 FUN_100197430(long param_1)

{
  undefined8 uVar1;
  Data_conflict local_38;
  undefined4 local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  QString::toUtf8();
  uVar1 = _PrlVm_Authorise(uVar1,local_28 + *(long *)(local_28 + 0x10),0);
  local_30 = 0x80000000;
  local_38.field7 = 0;
  uVar1 = FUN_100191960(param_1,uVar1,0x85f,&local_38);
  QVariant::~QVariant((QVariant *)&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

