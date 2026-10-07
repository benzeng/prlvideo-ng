
undefined8 * FUN_10059ee60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  piVar1 = *(int **)(param_3 + 0x70);
  if (piVar1[1] != 0) {
    *param_1 = piVar1;
    if (*piVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_1;
  }
  QDir::fromNativeSeparators(&local_28);
  iVar2 = QString::lastIndexOf(&local_28,0x2f,0xffffffff,1);
  if (-1 < iVar2) {
    QString::right((int)&local_30);
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10059ef11;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_10059ef11:
  iVar2 = QString::lastIndexOf(&local_28,0x2e,0xffffffff,1);
  if (-1 < iVar2) {
    QString::left((int)&local_38);
    QString::operator=(&local_28,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10059ef79;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10059ef79:
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

