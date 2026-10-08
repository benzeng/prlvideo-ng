
void FUN_100d2af60(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  *param_1 = &PTR_FUN_10225b400;
  pQVar1 = (QMapNodeBase *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d2afbf;
      pQVar1 = (QMapNodeBase *)param_1[2];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100d2c110();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100d2afbf:
  pQVar1 = (QMapNodeBase *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QMapNodeBase *)param_1[1];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100d2c000();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

