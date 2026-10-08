
void FUN_100ac3150(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  *param_1 = &PTR_FUN_10223af00;
  QTimer::~QTimer((QTimer *)(param_1 + 0x16d));
  QTimer::~QTimer((QTimer *)(param_1 + 0x169));
  QTimer::~QTimer((QTimer *)(param_1 + 0x165));
  pQVar1 = (QMapNodeBase *)param_1[0x160];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ac31d4;
      pQVar1 = (QMapNodeBase *)param_1[0x160];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100ac31d4:
  pQVar1 = (QMapNodeBase *)param_1[0x15f];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ac3219;
      pQVar1 = (QMapNodeBase *)param_1[0x15f];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100ac3219:
  pQVar1 = (QMapNodeBase *)param_1[0x15e];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ac325e;
      pQVar1 = (QMapNodeBase *)param_1[0x15e];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100ac325e:
  FUN_100acfe70(param_1);
  return;
}

