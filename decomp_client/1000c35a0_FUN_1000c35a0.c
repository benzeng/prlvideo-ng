
undefined8 * FUN_1000c35a0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("[^\\w]",5);
  QRegExp::QRegExp((QRegExp *)&local_38,&local_40,1,0);
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  puVar2 = (undefined8 *)QString::replace((QRegExp *)&local_30,&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000c363e;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000c363e:
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_19 = *piVar1 != 0;
    UNLOCK();
  }
  QRegExp::~QRegExp((QRegExp *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000c368e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000c368e:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

