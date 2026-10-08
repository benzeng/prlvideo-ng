
void FUN_100af84c0(long *param_1)

{
  QMapNodeBase *pQVar1;
  undefined *puVar2;
  ulong *puVar3;
  
  puVar2 = PTR_shared_null_1021e12f0;
  if ((undefined *)*param_1 != PTR_shared_null_1021e12f0) {
    if (*(int *)PTR_shared_null_1021e12f0 != -1) {
      if (*(int *)PTR_shared_null_1021e12f0 == 0) {
        puVar2 = (undefined *)QMapDataBase::createData();
        if (*(long *)(PTR_shared_null_1021e12f0 + 0x10) != 0) {
          puVar3 = (ulong *)FUN_1000be6f0(*(long *)(PTR_shared_null_1021e12f0 + 0x10),puVar2);
          *(ulong **)(puVar2 + 0x10) = puVar3;
          *puVar3 = *puVar3 & 3 | (ulong)(puVar2 + 8);
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
    *param_1 = (long)puVar2;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100af8588;
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_1000be500();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
LAB_100af8588:
  puVar2 = PTR_shared_null_1021e12f0;
  if (*(int *)PTR_shared_null_1021e12f0 != -1) {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      FUN_1000be500();
      QMapDataBase::freeTree((QMapNodeBase *)puVar2,(int)*(undefined8 *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
  return;
}

