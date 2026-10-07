
void FUN_1004384f0(long *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  QArrayData *pQVar4;
  long *plVar5;
  uint uVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  long lVar9;
  
  pQVar4 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    pQVar4 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar4 < 2) && ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == param_3)) {
      uVar2 = *(uint *)(pQVar4 + 4);
      lVar9 = (long)(int)uVar2;
      if ((int)uVar2 < (int)param_2) {
        if (uVar2 != param_2) {
          ___bzero(pQVar4 + lVar9 * 8 + *(long *)(pQVar4 + 0x10),((int)param_2 - lVar9) * 8);
        }
      }
      else if (uVar2 != param_2) {
        pQVar7 = pQVar4 + (long)(int)param_2 * 8 + *(long *)(pQVar4 + 0x10);
        lVar9 = lVar9 * 8 + (long)(int)param_2 * -8;
        do {
          plVar5 = *(long **)pQVar7;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          pQVar7 = pQVar7 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      *(uint *)(pQVar4 + 4) = param_2;
    }
    else {
      pQVar4 = (QArrayData *)QArrayData::allocate(8,8,(long)(int)param_3);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar4 + 4) = param_2;
      lVar9 = *param_1;
      uVar2 = *(uint *)(lVar9 + 4);
      uVar6 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar6 = uVar2;
      }
      pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10);
      pQVar8 = pQVar7;
      if (((long)(int)uVar6 & 0x1fffffffffffffffU) != 0) {
        plVar5 = (long *)(lVar9 + *(long *)(lVar9 + 0x10));
        uVar6 = ~param_2;
        if ((int)~param_2 <= (int)~uVar2) {
          uVar6 = ~uVar2;
        }
        pQVar8 = pQVar4 + *(long *)(pQVar4 + 0x10) + (long)(int)~uVar6 * 8;
        lVar9 = (long)(int)~uVar6 << 3;
        do {
          lVar3 = *plVar5;
          *(long *)pQVar7 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          pQVar7 = pQVar7 + 8;
          plVar5 = plVar5 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
        lVar9 = *param_1;
      }
      if ((*(int *)(lVar9 + 4) < (int)param_2) &&
         (pQVar8 != pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 8 + *(long *)(pQVar4 + 0x10))) {
        ___bzero(pQVar8,(long)(pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 8 +
                                        *(long *)(pQVar4 + 0x10)) - (long)pQVar8 &
                        0xfffffffffffffff8);
        lVar9 = *param_1;
      }
      *(uint *)(pQVar4 + 8) = *(uint *)(pQVar4 + 8) & 0x7fffffff | *(uint *)(lVar9 + 8) & 0x80000000
      ;
    }
  }
  pQVar7 = (QArrayData *)*param_1;
  if (pQVar7 == pQVar4) {
    return;
  }
  if (*(uint *)pQVar7 != 0xffffffff) {
    if (*(uint *)pQVar7 != 0) {
      LOCK();
      *(uint *)pQVar7 = *(uint *)pQVar7 - 1;
      UNLOCK();
      if (*(uint *)pQVar7 != 0) goto LAB_100438749;
      pQVar7 = (QArrayData *)*param_1;
    }
    lVar9 = (long)*(int *)(pQVar7 + 4) << 3;
    if (lVar9 != 0) {
      pQVar8 = pQVar7 + *(long *)(pQVar7 + 0x10);
      do {
        plVar5 = *(long **)pQVar8;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        pQVar8 = pQVar8 + 8;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    QArrayData::deallocate(pQVar7,8,8);
  }
LAB_100438749:
  *param_1 = (long)pQVar4;
  return;
}

