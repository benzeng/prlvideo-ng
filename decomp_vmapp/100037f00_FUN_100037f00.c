
void FUN_100037f00(QMapNodeBase *param_1,long param_2)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_2 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100037f41;
      pQVar1 = *(QArrayData **)(param_2 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100037f41:
  pQVar1 = *(QArrayData **)(param_2 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100037f71;
      pQVar1 = *(QArrayData **)(param_2 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100037f71:
  QMapDataBase::freeNodeAndRebalance(param_1);
  return;
}

