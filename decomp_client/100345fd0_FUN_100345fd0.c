
undefined1 FUN_100345fd0(undefined8 param_1,double param_2,long param_3,int *param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  long lVar6;
  QWidget *pQVar7;
  QMapNodeBase *pQVar8;
  undefined1 uVar9;
  long lVar10;
  double extraout_XMM0_Qa;
  double dVar11;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  QWidget local_b0 [48];
  QPointF local_80 [48];
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  local_50 = 0;
  uVar2 = 0;
  if ((*(long *)(param_3 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_3 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_3 + 0x18);
  }
  uVar2 = FUN_100319c50(uVar2);
  cVar1 = FUN_100331100(uVar2,&local_50);
  lVar10 = *(long *)(param_3 + 0x10);
  uVar2 = 0;
  if (cVar1 != '\0') {
    if ((lVar10 != 0) && (uVar2 = 0, *(int *)(lVar10 + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
    }
    uVar2 = FUN_100319c50(uVar2);
    FUN_100331180(uVar2);
    dVar11 = DAT_100e110f0;
    if (param_5 == 0) {
      return 1;
    }
    param_4 = param_4 + 1;
    do {
      *(ulong *)(param_4 + -1) =
           CONCAT44((int)((double)(*param_4 - local_50._4_4_) * extraout_XMM0_Qa + dVar11),
                    (int)((double)(param_4[-1] - (int)local_50) * extraout_XMM0_Qa + dVar11));
      param_4 = param_4 + 2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    return 1;
  }
  if ((lVar10 != 0) && (uVar2 = 0, *(int *)(lVar10 + 4) != 0)) {
    uVar2 = *(undefined8 *)(param_3 + 0x18);
  }
  plVar3 = (long *)FUN_100319950(uVar2);
  pQVar4 = (QMapNodeBase *)*plVar3;
  if (*(int *)pQVar4 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar3 + 0x10) != 0) {
      puVar5 = (ulong *)FUN_1000340b0(*(long *)(*plVar3 + 0x10),pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar4 != -1) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
    pQVar4 = (QMapNodeBase *)*plVar3;
  }
  lVar10 = 0;
  if (*(long *)(pQVar4 + 0x10) != 0) {
    pQVar8 = *(QMapNodeBase **)(pQVar4 + 0x20);
    while (lVar10 = 0, pQVar8 != pQVar4 + 8) {
      if ((((*(long *)(pQVar8 + 0x20) != 0) && (*(int *)(*(long *)(pQVar8 + 0x20) + 4) != 0)) &&
          (lVar10 = *(long *)(pQVar8 + 0x28), lVar10 != 0)) &&
         ((lVar6 = FUN_100323e30(lVar10,0), lVar6 != 0 &&
          (pQVar7 = (QWidget *)FUN_100379860(lVar6), pQVar7 != (QWidget *)0x0)))) {
        local_48 = (double)*param_4;
        local_40 = (double)param_4[1];
        cVar1 = WidgetUtils::isWidgetUnderPoint(pQVar7,(QPointF *)&local_48);
        if (cVar1 != '\0') break;
      }
      pQVar8 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10034621d;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_10034621d:
  uVar9 = 0;
  if ((lVar10 != 0) && (lVar6 = FUN_100323e30(lVar10,0), lVar6 != 0)) {
    pQVar7 = (QWidget *)FUN_100379860(lVar6);
    if (pQVar7 == (QWidget *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar2 = FUN_100325fd0(lVar10);
      WidgetUtils::getWidgetTransformMatrix(local_b0);
      QMatrix::inverted((bool *)local_80);
      if (param_5 != 0) {
        param_4 = param_4 + 1;
        do {
          local_d0 = (double)param_4[-1];
          local_c8 = (double)*param_4;
          local_c0 = WidgetUtils::mapFromGlobal(pQVar7,(QPointF *)&local_d0);
          local_b8 = param_2;
          dVar11 = (double)QMatrix::map(local_80);
          param_2 = param_2 + (double)(int)((ulong)uVar2 >> 0x20) + DAT_100e110f0;
          *(ulong *)(param_4 + -1) =
               CONCAT44((int)param_2,(int)(dVar11 + (double)(int)uVar2 + DAT_100e110f0));
          param_4 = param_4 + 2;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      uVar9 = 1;
    }
  }
  return uVar9;
}

