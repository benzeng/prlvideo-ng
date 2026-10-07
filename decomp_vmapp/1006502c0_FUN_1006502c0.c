
void FUN_1006502c0(long *param_1)

{
  QMapNodeBase *pQVar1;
  undefined *puVar2;
  ulong *puVar3;
  
  puVar2 = PTR_shared_null_100ba20d8;
  if ((undefined *)*param_1 != PTR_shared_null_100ba20d8) {
    if (*(int *)PTR_shared_null_100ba20d8 != -1) {
      if (*(int *)PTR_shared_null_100ba20d8 == 0) {
        puVar2 = (undefined *)QMapDataBase::createData();
        if (*(long *)(PTR_shared_null_100ba20d8 + 0x10) != 0) {
          puVar3 = (ulong *)FUN_100013890(*(long *)(PTR_shared_null_100ba20d8 + 0x10),puVar2);
          *(ulong **)(puVar2 + 0x10) = puVar3;
          *puVar3 = *puVar3 & 3 | (ulong)(puVar2 + 8);
          QMapDataBase::recalcMostLeftNode();
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_100ba20d8 = *(int *)PTR_shared_null_100ba20d8 + 1;
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
        if (*(int *)pQVar1 != 0) goto LAB_100650388;
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_1000136c0();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
LAB_100650388:
  puVar2 = PTR_shared_null_100ba20d8;
  if (*(int *)PTR_shared_null_100ba20d8 != -1) {
    if (*(int *)PTR_shared_null_100ba20d8 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d8 = *(int *)PTR_shared_null_100ba20d8 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      FUN_1000136c0();
      QMapDataBase::freeTree((QMapNodeBase *)puVar2,(int)*(undefined8 *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_100ba20d8);
  }
  return;
}

