
void FUN_100387470(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  void *pvVar3;
  int *local_40;
  long *local_38;
  long *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  FUN_1003895f0(&local_40,param_1 + 0x40);
  local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
  local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
  if (local_40[2] != local_40[3]) {
    do {
      local_28 = 1;
      lVar1 = *(long *)*local_38;
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
          (lVar1 = ((long *)*local_38)[1], lVar1 != 0)) && (lVar1 != param_2)) {
        QGraphicsItem::setOpacity(DAT_100e11050);
      }
      local_38 = local_38 + 1;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) goto LAB_10038753f;
      local_19 = 0;
    }
    FUN_100389550(&local_40,local_40);
  }
LAB_10038753f:
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_19 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (pvVar3 = *(void **)(param_1 + 0x58), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}

