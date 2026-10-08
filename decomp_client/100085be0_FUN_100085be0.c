
void FUN_100085be0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar1 = FUN_10008b970();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_100794960();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10008ba40(&local_30,uVar3);
  uVar3 = FUN_100795f20(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100085c8b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100085c8b:
  pvVar4 = operator_new(0x38);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10008ba40(&local_38,uVar2);
  FUN_10023f880(pvVar4,uVar3,&local_38,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100085cfc;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100085cfc:
  CAbstractTask::execute();
  return;
}

