
void FUN_100adc990(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_10223a2a8;
  pDVar1 = (Data *)param_1[3];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100adc9ce;
      pDVar1 = (Data *)param_1[3];
    }
    QListData::dispose(pDVar1);
  }
LAB_100adc9ce:
  operator_delete(param_1);
  return;
}

