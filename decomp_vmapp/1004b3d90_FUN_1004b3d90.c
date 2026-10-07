
void FUN_1004b3d90(undefined8 *param_1)

{
  QArrayData *pQVar1;
  Data *pDVar2;
  
  FUN_1004b3fa0();
  param_1[2] = 0;
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004b3ddb;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1004b3ddb:
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  pDVar2 = (Data *)*param_1;
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) {
        return;
      }
      pDVar2 = (Data *)*param_1;
    }
    QListData::dispose(pDVar2);
  }
  return;
}

