
void FUN_1005078f0(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  *param_1 = &PTR_FUN_100bc4308;
  pQVar1 = (QMapNodeBase *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100507950;
      pQVar1 = (QMapNodeBase *)param_1[2];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10004df50();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100507950:
  operator_delete(param_1);
  return;
}

