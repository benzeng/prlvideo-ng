
long * FUN_1004a8100(long *param_1,undefined8 *param_2,QString *param_3)

{
  QString *pQVar1;
  long *plVar2;
  long lVar3;
  QMapNodeBase *pQVar4;
  long *plVar5;
  char cVar6;
  uint *puVar7;
  long lVar8;
  QTypedArrayData<unsigned_short> *pQVar9;
  long lVar10;
  
  puVar7 = (uint *)*param_2;
  if (1 < *puVar7) {
    FUN_1004a88d0(param_2);
    puVar7 = (uint *)*param_2;
  }
  lVar3 = *(long *)(puVar7 + 4);
  lVar10 = 0;
  if (*(long *)(puVar7 + 4) != 0) {
    do {
      while (lVar8 = lVar3, cVar6 = operator<((QString *)(lVar8 + 0x18),param_3), cVar6 == '\0') {
        lVar3 = *(long *)(lVar8 + 8);
        lVar10 = lVar8;
        if (*(long *)(lVar8 + 8) == 0) goto LAB_1004a8176;
      }
      lVar3 = *(long *)(lVar8 + 0x10);
    } while (*(long *)(lVar8 + 0x10) != 0);
    lVar8 = lVar10;
    if (lVar10 != 0) {
LAB_1004a8176:
      pQVar1 = (QString *)(lVar8 + 0x18);
      cVar6 = operator<(param_3,pQVar1);
      if (cVar6 == '\0') {
        lVar3 = *(long *)(lVar8 + 0x20);
        *param_1 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        pQVar4 = (QMapNodeBase *)*param_2;
        pQVar9 = pQVar1->field0_0x0;
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            UNLOCK();
            if (*(int *)pQVar9 != 0) goto LAB_1004a81dd;
            pQVar9 = pQVar1->field0_0x0;
          }
          QArrayData::deallocate((QArrayData *)pQVar9,2,8);
        }
LAB_1004a81dd:
        plVar5 = *(long **)(lVar8 + 0x20);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        QMapDataBase::freeNodeAndRebalance(pQVar4);
        return param_1;
      }
    }
  }
  *param_1 = 0;
  return param_1;
}

