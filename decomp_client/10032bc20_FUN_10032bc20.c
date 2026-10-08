
void FUN_10032bc20(long *param_1)

{
  long lVar1;
  ulong *puVar2;
  QMapNodeBase *pQVar3;
  
  lVar1 = QMapDataBase::createData();
  pQVar3 = (QMapNodeBase *)*param_1;
  if (*(long *)(pQVar3 + 0x10) != 0) {
    puVar2 = (ulong *)FUN_10032bcc0(*(long *)(pQVar3 + 0x10),lVar1);
    *(ulong **)(lVar1 + 0x10) = puVar2;
    *puVar2 = *puVar2 & 3 | lVar1 + 8U;
    pQVar3 = (QMapNodeBase *)*param_1;
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10032bc9e;
      pQVar3 = (QMapNodeBase *)*param_1;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar3,(int)*(long *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_10032bc9e:
  *param_1 = lVar1;
  QMapDataBase::recalcMostLeftNode();
  return;
}

