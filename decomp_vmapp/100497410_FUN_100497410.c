
void FUN_100497410(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  *param_1 = &PTR_FUN_100bc2298;
  param_1[8] = &PTR_FUN_100bc22e0;
  FUN_100519360(DAT_1011c3698 + 0x10f0,0x14);
  pQVar1 = (QMapNodeBase *)param_1[0xf];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004974a1;
      pQVar1 = (QMapNodeBase *)param_1[0xf];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100498e90();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1004974a1:
  QMutex::~QMutex((QMutex *)(param_1 + 0xe));
  FUN_1004c0680(param_1 + 8);
  FUN_1005192c0(param_1);
  return;
}

