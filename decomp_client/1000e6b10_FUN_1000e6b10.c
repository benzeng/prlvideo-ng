
void FUN_1000e6b10(long *param_1)

{
  long lVar1;
  ulong *puVar2;
  QMapNodeBase *pQVar3;
  
  lVar1 = QMapDataBase::createData();
  pQVar3 = (QMapNodeBase *)*param_1;
  if (*(long *)(pQVar3 + 0x10) != 0) {
    puVar2 = (ulong *)FUN_1000e6bb0(*(long *)(pQVar3 + 0x10),lVar1);
    *(ulong **)(lVar1 + 0x10) = puVar2;
    *puVar2 = *puVar2 & 3 | lVar1 + 8U;
    pQVar3 = (QMapNodeBase *)*param_1;
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000e6b97;
      pQVar3 = (QMapNodeBase *)*param_1;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1000e5aa0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1000e6b97:
  *param_1 = lVar1;
  QMapDataBase::recalcMostLeftNode();
  return;
}

