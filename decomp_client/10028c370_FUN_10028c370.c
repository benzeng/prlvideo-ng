
void FUN_10028c370(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  int *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    if (DAT_102310958 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_100612710(pvVar2);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar2;
    }
    pvVar2 = DAT_102310958;
    uVar3 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
    FUN_10015a2b0(&local_30,uVar3);
    local_68 = (int *)0x0;
    uStack_60 = 0;
    local_50 = 0;
    local_58 = 0;
    local_40 = 0x80000000;
    local_48.field7 = 0;
    local_38 = 1;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_10060b2b0(pvVar2,4,&local_30,&local_68,uVar3);
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
  }
  return;
}

