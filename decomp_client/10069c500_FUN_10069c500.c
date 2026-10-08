
void FUN_10069c500(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar1 = FUN_100370280();
  FUN_100188480(&local_30,*(undefined8 *)(param_1 + 0x28));
  uVar1 = FUN_1003704b0(uVar1,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10069c56f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10069c56f:
  pvVar2 = operator_new(0x40);
  FUN_10021b330(pvVar2,2,*(undefined8 *)(param_1 + 0x28),uVar1);
  CAbstractTask::execute();
  return;
}

