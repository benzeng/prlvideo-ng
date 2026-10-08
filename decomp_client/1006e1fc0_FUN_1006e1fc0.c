
undefined8 * FUN_1006e1fc0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  QArrayData *local_30;
  char local_28;
  undefined7 uStack_27;
  undefined1 local_19;
  
  FUN_100694760(&local_30);
  QString::fromUtf8_helper(&local_28,0x1e1141b);
  puVar2 = (undefined8 *)
           QString::insert((int)&local_30,(QChar *)0x0,
                           (int)*(undefined8 *)(CONCAT71(uStack_27,local_28) + 0x10) +
                           (int)CONCAT71(uStack_27,local_28));
  piVar1 = (int *)CONCAT71(uStack_27,local_28);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e2038;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_27,local_28),2,8);
  }
LAB_1006e2038:
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_28 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_28 = '\0';
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

