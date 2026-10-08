
void FUN_100ae8bd0(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  QArrayData *local_30;
  undefined1 local_21;
  
  piVar1 = *(int **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  plVar4 = *(long **)(param_1 + 0x10);
  local_30 = (QArrayData *)plVar4[2];
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
    plVar4 = *(long **)(param_1 + 0x10);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  FUN_100ae8800(param_1,&local_30);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x18);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100ae8ca5;
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100ae8ca5:
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar1);
    }
  }
  return;
}

