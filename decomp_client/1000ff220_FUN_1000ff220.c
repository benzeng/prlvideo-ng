
void FUN_1000ff220(QMapNodeBase *param_1,long param_2)

{
  QMapNodeBase *pQVar1;
  
  pQVar1 = *(QMapNodeBase **)(param_2 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000ff278;
      pQVar1 = *(QMapNodeBase **)(param_2 + 0x20);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1000e5b20();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1000ff278:
  QMapDataBase::freeNodeAndRebalance(param_1);
  return;
}

