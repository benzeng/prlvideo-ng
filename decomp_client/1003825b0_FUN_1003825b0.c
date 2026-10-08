
void FUN_1003825b0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 local_30;
  int *local_28;
  undefined1 local_19;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar3 != 0)) {
    local_30 = *param_2;
    local_28 = (int *)param_2[1];
    if (local_28 != (int *)0x0) {
      LOCK();
      *local_28 = *local_28 + 1;
      UNLOCK();
      LOCK();
      piVar1 = local_28 + 1;
      *piVar1 = *piVar1 + 1;
      local_19 = *piVar1 != 0;
      UNLOCK();
    }
    FUN_100386210(lVar3,&local_30);
    piVar1 = local_28;
    if (local_28 != (int *)0x0) {
      LOCK();
      piVar2 = local_28 + 1;
      *piVar2 = *piVar2 + -1;
      local_19 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_19) {
        (**(code **)(local_28 + 2))(local_28);
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if (!(bool)local_19) {
        operator_delete(piVar1);
      }
    }
  }
  return;
}

