
void FUN_100542210(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_100bc5378;
  param_1[5] = &PTR_FUN_100bc53d0;
  FUN_100519360(DAT_1011c3698 + 0x10f0,0x12);
  QMutex::~QMutex((QMutex *)(param_1 + 0xe));
  pDVar1 = (Data *)param_1[0xd];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10054227e;
      pDVar1 = (Data *)param_1[0xd];
    }
    QListData::dispose(pDVar1);
  }
LAB_10054227e:
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

