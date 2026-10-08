
void FUN_100190930(long *param_1)

{
  QMapNodeBase *pQVar1;
  long lVar2;
  undefined *puVar3;
  ulong *puVar4;
  
  puVar3 = PTR_shared_null_1021e12f0;
  if ((undefined *)*param_1 != PTR_shared_null_1021e12f0) {
    if (*(int *)PTR_shared_null_1021e12f0 != -1) {
      if (*(int *)PTR_shared_null_1021e12f0 == 0) {
        puVar3 = (undefined *)QMapDataBase::createData();
        if (*(long *)(PTR_shared_null_1021e12f0 + 0x10) != 0) {
          puVar4 = (ulong *)FUN_1001914a0(*(long *)(PTR_shared_null_1021e12f0 + 0x10),puVar3);
          *(ulong **)(puVar3 + 0x10) = puVar4;
          *puVar4 = *puVar4 & 3 | (ulong)(puVar3 + 8);
          QMapDataBase::recalcMostLeftNode();
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
        UNLOCK();
      }
    }
    pQVar1 = (QMapNodeBase *)*param_1;
    *param_1 = (long)puVar3;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_1001909ef;
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
LAB_1001909ef:
  puVar3 = PTR_shared_null_1021e12f0;
  if (*(int *)PTR_shared_null_1021e12f0 != -1) {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + -1;
      UNLOCK();
      if (*(int *)puVar3 != 0) {
        return;
      }
    }
    lVar2 = *(long *)(puVar3 + 0x10);
    if (lVar2 != 0) {
      QMapDataBase::freeTree((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)lVar2);
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
  return;
}

