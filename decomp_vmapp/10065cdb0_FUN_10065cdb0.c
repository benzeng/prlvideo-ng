
void FUN_10065cdb0(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_10116d160;
  pDVar1 = (Data *)param_1[2];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10065cdee;
      pDVar1 = (Data *)param_1[2];
    }
    QListData::dispose(pDVar1);
  }
LAB_10065cdee:
  FUN_100788530(param_1);
  operator_delete(param_1);
  return;
}

