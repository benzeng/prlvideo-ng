
void FUN_10008a170(long param_1,QObject *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  QArrayData *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  
  piVar1 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_2d = *piVar1 != 0;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x20);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_2c = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_2c) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
    }
    *(int **)(param_1 + 0x20) = piVar1;
    *(QObject **)(param_1 + 0x28) = param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_2b = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_2b) {
      operator_delete(piVar1);
    }
  }
  pvVar3 = operator_new(0x18);
  FUN_100188480(&local_38,param_2);
  FUN_1007ef660(pvVar3,&local_38,0,param_1);
  *(void **)(param_1 + 0x48) = pvVar3;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10008a259;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10008a259:
  FUN_100087ea0(param_1);
  lVar4 = FUN_1007ef770(*(undefined8 *)(param_1 + 0x48));
  FUN_10008a2f0(param_1,lVar4 != 0);
  FUN_10008a610(param_1);
  return;
}

