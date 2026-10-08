
undefined8 * FUN_1007d71f0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_1001c20d0(&local_28);
  local_30 = (QArrayData *)QString::fromAscii_helper("<USERNAME>",10);
  puVar2 = (undefined8 *)QString::replace(param_2,&local_28,&local_30,1);
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_19 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d727b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007d727b:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

