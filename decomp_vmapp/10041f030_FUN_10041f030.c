
int FUN_10041f030(long *param_1,QString *param_2)

{
  QString *pQVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  QTypedArrayData<unsigned_short> *pQVar7;
  long lVar8;
  int iVar9;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_10041f730(param_1);
    puVar4 = (uint *)*param_1;
  }
  lVar5 = *(long *)(puVar4 + 4);
  iVar9 = 0;
  do {
    if (lVar5 == 0) {
      return iVar9;
    }
    lVar8 = 0;
    do {
      while (lVar6 = lVar5, cVar3 = operator<((QString *)(lVar6 + 0x18),param_2), cVar3 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_10041f0d8;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 == 0) {
      return iVar9;
    }
LAB_10041f0d8:
    pQVar1 = (QString *)(lVar6 + 0x18);
    cVar3 = operator<(param_2,pQVar1);
    if (cVar3 != '\0') {
      return iVar9;
    }
    pQVar2 = (QMapNodeBase *)*param_1;
    pQVar7 = pQVar1->field0_0x0;
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        UNLOCK();
        if (*(int *)pQVar7 != 0) goto LAB_10041f070;
        pQVar7 = pQVar1->field0_0x0;
      }
      QArrayData::deallocate((QArrayData *)pQVar7,2,8);
    }
LAB_10041f070:
    QMapDataBase::freeNodeAndRebalance(pQVar2);
    iVar9 = iVar9 + 1;
    lVar5 = *(long *)(*param_1 + 0x10);
  } while( true );
}

