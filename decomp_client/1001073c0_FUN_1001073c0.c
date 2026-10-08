
void FUN_1001073c0(long *param_1)

{
  long lVar1;
  ulong *puVar2;
  QMapNodeBase *pQVar3;
  
  lVar1 = QMapDataBase::createData();
  pQVar3 = (QMapNodeBase *)*param_1;
  if (*(long *)(pQVar3 + 0x10) != 0) {
    puVar2 = (ulong *)FUN_100107460(*(long *)(pQVar3 + 0x10),lVar1);
    *(ulong **)(lVar1 + 0x10) = puVar2;
    *puVar2 = *puVar2 & 3 | lVar1 + 8U;
    pQVar3 = (QMapNodeBase *)*param_1;
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100107447;
      pQVar3 = (QMapNodeBase *)*param_1;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100107550();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100107447:
  *param_1 = lVar1;
  QMapDataBase::recalcMostLeftNode();
  return;
}

