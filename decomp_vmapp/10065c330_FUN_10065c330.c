
void FUN_10065c330(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_10116d160;
  pDVar1 = (Data *)param_1[2];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10065c36e;
      pDVar1 = (Data *)param_1[2];
    }
    QListData::dispose(pDVar1);
  }
LAB_10065c36e:
  FUN_100788530(param_1);
  return;
}

