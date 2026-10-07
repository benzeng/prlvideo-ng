
void FUN_1004a0f90(long *param_1)

{
  long lVar1;
  ulong *puVar2;
  QMapNodeBase *pQVar3;
  
  lVar1 = QMapDataBase::createData();
  pQVar3 = (QMapNodeBase *)*param_1;
  if (*(long *)(pQVar3 + 0x10) != 0) {
    puVar2 = (ulong *)FUN_1004a1030(*(long *)(pQVar3 + 0x10),lVar1);
    *(ulong **)(lVar1 + 0x10) = puVar2;
    *puVar2 = *puVar2 & 3 | lVar1 + 8U;
    pQVar3 = (QMapNodeBase *)*param_1;
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004a1017;
      pQVar3 = (QMapNodeBase *)*param_1;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1004a11c0();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1004a1017:
  *param_1 = lVar1;
  QMapDataBase::recalcMostLeftNode();
  return;
}

