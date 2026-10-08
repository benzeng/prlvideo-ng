
undefined8 * FUN_100dad0b0(undefined8 *param_1,long *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString local_30;
  undefined1 local_23;
  
  if (*(int *)(param_2[1] + 4) == 0) {
    (**(code **)(*param_2 + 0x30))(&local_30);
    QString::operator=((QString *)(param_2 + 1),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30.field0_0x0 != 0) goto LAB_100dad116;
        local_23 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_100dad116:
  pQVar1 = ((QString *)(param_2 + 1))->field0_0x0;
  *param_1 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

