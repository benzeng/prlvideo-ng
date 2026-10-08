
void FUN_1009890d0(undefined8 *param_1)

{
  Data *pDVar1;
  
  param_1[-1] = &PTR_FUN_10227da00;
  *param_1 = &PTR_FUN_10227da58;
  pDVar1 = (Data *)param_1[1];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10098911d;
      pDVar1 = (Data *)param_1[1];
    }
    QListData::dispose(pDVar1);
  }
LAB_10098911d:
  operator_delete(param_1 + -1);
  return;
}

