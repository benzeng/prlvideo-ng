
void FUN_100697b80(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  int *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (DAT_102310958 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_100612710(pvVar1);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar1;
  }
  pvVar1 = DAT_102310958;
  FUN_10015a2b0(&local_30,*(undefined8 *)(param_1 + 0x18));
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0x80000000;
  local_48.field7 = 0;
  local_38 = 1;
  uVar2 = FUN_100695ba0(param_1);
  FUN_10060b2b0(pvVar1,0,&local_30,&local_68,uVar2);
  QVariant::~QVariant((QVariant *)&local_48);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_21 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

