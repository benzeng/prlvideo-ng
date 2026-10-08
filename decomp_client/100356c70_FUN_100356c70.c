
undefined1 FUN_100356c70(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  QMapNodeBase *pQVar6;
  ulong *puVar7;
  QWidget *pQVar8;
  QMapNodeBase *pQVar9;
  undefined1 uVar10;
  
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar4 = FUN_10018c280();
    plVar5 = (long *)FUN_100319950(uVar4);
    pQVar6 = (QMapNodeBase *)*plVar5;
    if (*(int *)pQVar6 == 0) {
      pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(*plVar5 + 0x10) != 0) {
        puVar7 = (ulong *)FUN_1000340b0(*(long *)(*plVar5 + 0x10),pQVar6);
        *(ulong **)(pQVar6 + 0x10) = puVar7;
        *puVar7 = *puVar7 & 3 | (ulong)(pQVar6 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*(int *)pQVar6 != -1) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      UNLOCK();
      pQVar6 = (QMapNodeBase *)*plVar5;
    }
    if (*(long *)(pQVar6 + 0x10) != 0) {
      pQVar9 = *(QMapNodeBase **)(pQVar6 + 0x20);
      while (pQVar9 != pQVar6 + 8) {
        if ((((*(long *)(pQVar9 + 0x20) != 0) && (*(int *)(*(long *)(pQVar9 + 0x20) + 4) != 0)) &&
            (lVar1 = *(long *)(pQVar9 + 0x28), lVar1 != 0)) &&
           (((pQVar8 = (QWidget *)FUN_100323e30(lVar1,0), pQVar8 != (QWidget *)0x0 &&
             (cVar2 = MacUtils::isWindowInNativeFullScreen(pQVar8), cVar2 != '\0')) &&
            (cVar2 = MacUtils::isWindowPrimaryInFullScreen(pQVar8), cVar2 != '\0')))) {
          uVar10 = 1;
          if (param_2 != (undefined4 *)0x0) {
            uVar3 = FUN_100323e20(lVar1);
            *param_2 = uVar3;
          }
          goto LAB_100356d92;
        }
        pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
      }
    }
    uVar10 = 0;
LAB_100356d92:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        UNLOCK();
        if (*(int *)pQVar6 != 0) {
          return uVar10;
        }
      }
      if (*(long *)(pQVar6 + 0x10) != 0) {
        FUN_100034170();
        QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar6);
    }
  }
  return uVar10;
}

