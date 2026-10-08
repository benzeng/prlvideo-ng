
void FUN_100066ae0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  
  QEvent::QEvent();
  *param_1 = &PTR_FUN_10226c4c8;
  piVar1 = (int *)*param_3;
  param_1[3] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (DAT_10230ffd0 < 2) {
    return;
  }
  pQVar2 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",2,"Custom event %d created with \'%s\' data.",param_2,
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100066bae;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100066bae:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

