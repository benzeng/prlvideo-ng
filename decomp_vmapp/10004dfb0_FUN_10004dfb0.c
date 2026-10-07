
void FUN_10004dfb0(QMutex *param_1)

{
  QMapNodeBase *pQVar1;
  QMutexData *pQVar2;
  
  pQVar2 = param_1[3].field0_0x0.field0_0x0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10004dfe3;
      pQVar2 = param_1[3].field0_0x0.field0_0x0;
    }
    QListData::dispose((Data *)pQVar2);
  }
LAB_10004dfe3:
  pQVar1 = (QMapNodeBase *)param_1[2].field0_0x0.field0_0x0;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10004e02b;
      pQVar1 = (QMapNodeBase *)param_1[2].field0_0x0.field0_0x0;
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10004df50();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10004e02b:
  QMutex::~QMutex(param_1);
  return;
}

