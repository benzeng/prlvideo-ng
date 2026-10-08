
int FUN_100b05160(long *param_1,QString *param_2)

{
  QString *pQVar1;
  long *plVar2;
  QMapNodeBase *pQVar3;
  long *plVar4;
  char cVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  QTypedArrayData<unsigned_short> *pQVar9;
  long lVar10;
  int iVar11;
  
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    FUN_100b06f10(param_1);
    puVar6 = (uint *)*param_1;
  }
  lVar7 = *(long *)(puVar6 + 4);
  iVar11 = 0;
  do {
    if (lVar7 == 0) {
      return iVar11;
    }
    lVar10 = 0;
    do {
      while (lVar8 = lVar7, cVar5 = operator<((QString *)(lVar8 + 0x18),param_2), cVar5 == '\0') {
        lVar7 = *(long *)(lVar8 + 8);
        lVar10 = lVar8;
        if (*(long *)(lVar8 + 8) == 0) goto LAB_100b0520c;
      }
      lVar7 = *(long *)(lVar8 + 0x10);
    } while (*(long *)(lVar8 + 0x10) != 0);
    lVar8 = lVar10;
    if (lVar10 == 0) {
      return iVar11;
    }
LAB_100b0520c:
    pQVar1 = (QString *)(lVar8 + 0x18);
    cVar5 = operator<(param_2,pQVar1);
    if (cVar5 != '\0') {
      return iVar11;
    }
    pQVar3 = (QMapNodeBase *)*param_1;
    pQVar9 = pQVar1->field0_0x0;
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        UNLOCK();
        if (*(int *)pQVar9 != 0) goto LAB_100b05251;
        pQVar9 = pQVar1->field0_0x0;
      }
      QArrayData::deallocate((QArrayData *)pQVar9,2,8);
    }
LAB_100b05251:
    plVar4 = *(long **)(lVar8 + 0x28);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = *(long **)(lVar8 + 0x20);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    QMapDataBase::freeNodeAndRebalance(pQVar3);
    iVar11 = iVar11 + 1;
    lVar7 = *(long *)(*param_1 + 0x10);
  } while( true );
}

