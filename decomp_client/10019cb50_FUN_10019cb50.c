
void FUN_10019cb50(undefined8 param_1,long *param_2)

{
  KeyboardMouseProfiles *this;
  QString QVar1;
  void *pvVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  undefined1 local_31;
  
  this = operator_new(0xa8);
  KeyboardMouseProfiles::KeyboardMouseProfiles(this);
  QVar1.field0_0x0 = operator_new(0xa0);
  Profile::Profile((Profile *)QVar1.field0_0x0);
  local_40 = QVar1.field0_0x0;
  if (DAT_102310998 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006faf60(pvVar2);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar2;
  }
  FUN_1006fb7e0(&local_48,DAT_102310998);
  Profile::setValue(QVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019cc11;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10019cc11:
  FUN_10019d020(this + 0x98,&local_40);
  QVar1.field0_0x0 = operator_new(0xa0);
  Profile::Profile((Profile *)QVar1.field0_0x0);
  local_40 = QVar1.field0_0x0;
  if (DAT_102310970 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006b2390(pvVar2);
    DAT_102274b20 = 1;
    DAT_102310970 = pvVar2;
  }
  FUN_1006b2540(&local_50,DAT_102310970);
  Profile::setValue(QVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019ccb9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10019ccb9:
  FUN_10019d020(this + 0x98,&local_40);
  (**(code **)(*param_2 + 0xe0))(param_2,this);
  return;
}

