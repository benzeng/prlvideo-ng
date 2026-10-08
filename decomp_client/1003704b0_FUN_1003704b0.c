
undefined8 FUN_1003704b0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  local_28 = param_3;
  lVar3 = FUN_1003762d0(*(undefined8 *)(param_1 + 0x20),&local_30);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x20) + 8;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100370526;
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100370526:
  uVar4 = 0;
  if (lVar3 != *(long *)(param_1 + 0x20) + 8) {
    piVar1 = *(int **)(lVar3 + 0x28);
    uVar4 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = *(undefined8 *)(lVar3 + 0x30);
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = 0;
      if (piVar1[1] != 0) {
        uVar4 = uVar2;
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
  return uVar4;
}

