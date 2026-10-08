
void FUN_1002023d0(long *param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  QArrayData *local_30;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  
  piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar2 = (int *)param_1[10];
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_25 = *piVar1 != 0;
      UNLOCK();
      piVar2 = (int *)param_1[10];
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_24 = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_24) && ((void *)param_1[10] != (void *)0x0)) {
        operator_delete((void *)param_1[10]);
      }
    }
    param_1[10] = (long)piVar1;
    param_1[0xb] = (long)param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_23 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_23) {
      operator_delete(piVar1);
    }
  }
  FUN_100188480(&local_30,param_2);
  FUN_100116b80(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100202493;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100202493:
  FUN_10080dda0(param_1,100);
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

