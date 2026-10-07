
undefined8 * FUN_10076e280(undefined8 *param_1,long param_2)

{
  int *piVar1;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (*(char *)(param_2 + 8) != '\0') {
    piVar1 = *(int **)(param_2 + 0x78);
    *param_1 = piVar1;
    if (*piVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_1;
  }
  QString::number((int)&local_28,*(int *)(param_2 + 100));
  if (*(int *)(param_2 + 0x68) == 0) goto LAB_10076e371;
  QString::number((int)&local_38,*(int *)(param_2 + 0x68));
  QString::fromUtf8_helper((char *)&local_30,0xa02eac);
  QString::append(&local_30);
  QString::append(&local_28);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10076e341;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10076e341:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10076e371;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10076e371:
  *param_1 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

