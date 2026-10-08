
void FUN_1005b2c70(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = FUN_1005b87b0(uVar1);
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b87d0(uVar1,0);
  if (lVar2 == 0) {
    return;
  }
  pvVar3 = operator_new(0x50);
  FUN_100188480(&local_30,lVar2);
  FUN_100240130(pvVar3,&local_30,0,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1005b2d0b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005b2d0b:
  CAbstractTask::execute();
  return;
}

