
undefined8 FUN_100231110(long *param_1)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  QMapNodeBase *pQVar9;
  ulong *puVar10;
  QMapNodeBase *pQVar11;
  QMapNodeBase *pQVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined4 local_40;
  int local_3c;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  lVar13 = 0;
  if ((param_1[3] != 0) && (lVar13 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar13 = param_1[4];
  }
  uVar4 = FUN_100319450(lVar13);
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  lVar13 = 0;
  if ((param_1[3] != 0) && (lVar13 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar13 = param_1[4];
  }
  uVar7 = FUN_100319390(lVar13);
  lVar13 = 0;
  cVar2 = FUN_100356c70(uVar7,0);
  plVar1 = param_1 + 9;
  FUN_1002392a0();
  if ((param_1[3] != 0) && (lVar13 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar13 = param_1[4];
  }
  plVar8 = (long *)FUN_100319950(lVar13);
  pQVar9 = (QMapNodeBase *)*plVar8;
  if (*(int *)pQVar9 == 0) {
    pQVar9 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar8 + 0x10) != 0) {
      puVar10 = (ulong *)FUN_1000340b0(*(long *)(*plVar8 + 0x10),pQVar9);
      *(ulong **)(pQVar9 + 0x10) = puVar10;
      *puVar10 = *puVar10 & 3 | (ulong)(pQVar9 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar9 != -1) {
    LOCK();
    *(int *)pQVar9 = *(int *)pQVar9 + 1;
    local_35 = *(int *)pQVar9 != 0;
    UNLOCK();
    pQVar9 = (QMapNodeBase *)*plVar8;
  }
  pQVar11 = pQVar9;
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 == 0) {
      pQVar11 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar9 + 0x10) != 0) {
        puVar10 = (ulong *)FUN_1000340b0(*(long *)(pQVar9 + 0x10),pQVar11);
        *(ulong **)(pQVar11 + 0x10) = puVar10;
        *puVar10 = *puVar10 & 3 | (ulong)(pQVar11 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + 1;
      local_34 = *(int *)pQVar9 != 0;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar11 + 0x10) != 0) {
    pQVar12 = *(QMapNodeBase **)(pQVar11 + 0x20);
    while (pQVar12 != pQVar11 + 8) {
      if (((*(long *)(pQVar12 + 0x20) != 0) && (*(int *)(*(long *)(pQVar12 + 0x20) + 4) != 0)) &&
         (lVar13 = *(long *)(pQVar12 + 0x28), lVar13 != 0)) {
        uVar4 = FUN_100323e20(lVar13);
        iVar5 = (**(code **)(*param_1 + 0x108))(param_1,lVar13);
        local_40 = uVar4;
        local_3c = iVar5;
        cVar3 = FUN_100325f80(lVar13);
        iVar15 = 0;
        if (cVar3 == '\0') {
          iVar15 = *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8);
        }
        if (cVar2 != '\0') {
          lVar14 = 0;
          if ((param_1[3] != 0) && (lVar14 = 0, *(int *)(param_1[3] + 4) != 0)) {
            lVar14 = param_1[4];
          }
          iVar6 = FUN_100319ae0(lVar14);
          if (iVar6 == 2) {
            cVar3 = FUN_100356e60(lVar13);
            if ((cVar3 == '\0') || (cVar3 = FUN_100325f80(lVar13), cVar3 == '\0')) {
              iVar15 = 0;
              if (iVar5 != 0) {
                iVar15 = *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8);
              }
            }
            else {
              lVar13 = *plVar1;
              iVar5 = *(int *)(lVar13 + 8);
              iVar15 = -1;
              if (iVar5 < *(int *)(lVar13 + 0xc)) {
                iVar15 = -1;
                lVar14 = 0;
                do {
                  iVar6 = iVar15;
                  if (*(int *)(*(long *)(lVar13 + 0x10 + (long)iVar5 * 8 + lVar14 * 8) + 4) == 0) {
                    iVar6 = (int)lVar14;
                  }
                  if (iVar15 < lVar14) {
                    iVar15 = iVar6;
                  }
                  lVar14 = lVar14 + 1;
                } while (lVar14 < *(int *)(lVar13 + 0xc) - iVar5);
              }
              iVar15 = iVar15 + 1;
            }
          }
        }
        FUN_100239430(plVar1,iVar15,&local_40);
      }
      pQVar12 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_33 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10023142d;
    }
    if (*(long *)(pQVar11 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar11,(int)*(undefined8 *)(pQVar11 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar11);
  }
LAB_10023142d:
  FUN_100231550(param_1);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return 0;
      }
    }
    if (*(long *)(pQVar9 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar9,(int)*(undefined8 *)(pQVar9 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar9);
  }
  return 0;
}

