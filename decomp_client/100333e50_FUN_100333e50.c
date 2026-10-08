
void FUN_100333e50(long param_1,undefined4 param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  long lVar5;
  long lVar6;
  QMapNodeBase *pQVar7;
  undefined1 auVar8 [16];
  
  plVar1 = (long *)FUN_100319950(*(undefined8 *)(param_1 + 0x10));
  pQVar2 = (QMapNodeBase *)*plVar1;
  if (*(int *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar1 + 0x10) != 0) {
      puVar3 = (ulong *)FUN_1000340b0(*(long *)(*plVar1 + 0x10),pQVar2);
      *(ulong **)(pQVar2 + 0x10) = puVar3;
      *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar2 != -1) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    pQVar2 = (QMapNodeBase *)*plVar1;
  }
  pQVar4 = pQVar2;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 == 0) {
      pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar2 + 0x10) != 0) {
        puVar3 = (ulong *)FUN_1000340b0(*(long *)(pQVar2 + 0x10),pQVar4);
        *(ulong **)(pQVar4 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | (ulong)(pQVar4 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar4 + 0x10) != 0) {
    pQVar7 = *(QMapNodeBase **)(pQVar4 + 0x20);
    while (pQVar7 != pQVar4 + 8) {
      if ((((*(long *)(pQVar7 + 0x20) != 0) && (*(int *)(*(long *)(pQVar7 + 0x20) + 4) != 0)) &&
          (*(long *)(pQVar7 + 0x28) != 0)) &&
         ((lVar5 = FUN_100323e30(*(long *)(pQVar7 + 0x28),0), lVar5 != 0 &&
          (lVar6 = FUN_100379860(lVar5), lVar6 != 0)))) {
        QWidget::setAcceptDrops(SUB81(lVar5,0));
        QWidget::setAcceptDrops(SUB81(lVar6,0));
      }
      pQVar7 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10033400e;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_10033400e:
  auVar8 = FUN_100319c50(*(undefined8 *)(param_1 + 0x10));
  FUN_100333290(auVar8._0_8_,(char)param_2,auVar8._8_8_,param_2);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

