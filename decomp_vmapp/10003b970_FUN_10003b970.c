
void FUN_10003b970(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_100ba7e58;
  pDVar1 = (Data *)param_1[6];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10003b9ae;
      pDVar1 = (Data *)param_1[6];
    }
    QListData::dispose(pDVar1);
  }
LAB_10003b9ae:
  QMutex::~QMutex((QMutex *)(param_1 + 5));
  FUN_1004c0680(param_1);
  return;
}

