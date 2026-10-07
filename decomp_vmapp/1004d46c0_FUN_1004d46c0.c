
void FUN_1004d46c0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc30d8;
  pQVar1 = (QArrayData *)param_1[8];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004d4703;
      pQVar1 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1004d4703:
  *param_1 = &PTR_FUN_100bc3aa8;
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 3));
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  return;
}

