
void FUN_100518270(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_100bc4938;
  param_1[5] = &PTR_FUN_100bc4990;
  FUN_100519360(DAT_1011c3698 + 0x10f0,0xe);
  QMutex::~QMutex((QMutex *)(param_1 + 0x12));
  FUN_100037320(param_1 + 0x11);
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  pDVar1 = (Data *)param_1[0xf];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_1005182f9;
      pDVar1 = (Data *)param_1[0xf];
    }
    QListData::dispose(pDVar1);
  }
LAB_1005182f9:
  pDVar1 = (Data *)param_1[0xe];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10051831f;
      pDVar1 = (Data *)param_1[0xe];
    }
    QListData::dispose(pDVar1);
  }
LAB_10051831f:
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

