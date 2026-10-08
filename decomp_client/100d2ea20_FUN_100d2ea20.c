
void FUN_100d2ea20(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  *param_1 = &PTR_FUN_10230f6c0;
  pQVar1 = (QMapNodeBase *)param_1[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d2ea82;
      pQVar1 = (QMapNodeBase *)param_1[4];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100d2ea82:
  FUN_100d2b080(param_1 + 1);
  return;
}

