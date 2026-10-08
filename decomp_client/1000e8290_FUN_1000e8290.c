
void FUN_1000e8290(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  QArrayData *pQVar2;
  uint uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  pQVar2 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar2 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar2 < 2) && ((*(uint *)(pQVar2 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar2 + 4) < (int)param_2) && (*(uint *)(pQVar2 + 4) != param_2)) {
        ___bzero(pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x50 + *(long *)(pQVar2 + 0x10),
                 pQVar2 + (((long)(int)param_2 * 0x50 + -0x50 + *(long *)(pQVar2 + 0x10)) -
                          (long)(pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x50 +
                                          *(long *)(pQVar2 + 0x10))) +
                 (0x50 - (ulong)(pQVar2 + (((long)(int)param_2 * 0x50 + -0x50 +
                                           *(long *)(pQVar2 + 0x10)) -
                                          (long)(pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x50 +
                                                          *(long *)(pQVar2 + 0x10)))) % 0x50));
      }
      *(uint *)(pQVar2 + 4) = param_2;
    }
    else {
      pQVar2 = (QArrayData *)QArrayData::allocate(0x50,8,(long)(int)param_3);
      if (pQVar2 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar2 + 4) = param_2;
      lVar7 = *param_1;
      uVar1 = *(uint *)(lVar7 + 4);
      uVar3 = param_2;
      if ((int)uVar1 <= (int)param_2) {
        uVar3 = uVar1;
      }
      pQVar5 = pQVar2 + *(long *)(pQVar2 + 0x10);
      if ((long)(int)uVar3 * 0x50 != 0) {
        uVar3 = ~param_2;
        if ((int)~param_2 <= (int)~uVar1) {
          uVar3 = ~uVar1;
        }
        pQVar5 = pQVar2 + *(long *)(pQVar2 + 0x10) + 0x50 +
                          (((long)(int)~uVar3 * 0x50 - 0x50U) / 0x14 & 0xffffffffffffffc) * 0x14;
        lVar8 = (long)(int)~uVar3 * 0x50;
        pQVar4 = pQVar2 + *(long *)(pQVar2 + 0x10);
        pvVar6 = (void *)(lVar7 + *(long *)(lVar7 + 0x10));
        do {
          _memcpy(pQVar4,pvVar6,0x50);
          lVar8 = lVar8 + -0x50;
          pQVar4 = pQVar4 + 0x50;
          pvVar6 = (void *)((long)pvVar6 + 0x50);
        } while (lVar8 != 0);
        lVar7 = *param_1;
      }
      if (*(int *)(lVar7 + 4) < (int)param_2) {
        if (pQVar5 != pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x50 + *(long *)(pQVar2 + 0x10)) {
          ___bzero(pQVar5,pQVar2 + (((long)(int)*(uint *)(pQVar2 + 4) * 0x50 + -0x50 +
                                    *(long *)(pQVar2 + 0x10)) - (long)pQVar5) +
                          (0x50 - (ulong)(pQVar2 + (((long)(int)*(uint *)(pQVar2 + 4) * 0x50 + -0x50
                                                    + *(long *)(pQVar2 + 0x10)) - (long)pQVar5)) %
                                  0x50));
          lVar7 = *param_1;
        }
      }
      *(uint *)(pQVar2 + 8) = *(uint *)(pQVar2 + 8) & 0x7fffffff | *(uint *)(lVar7 + 8) & 0x80000000
      ;
    }
  }
  pQVar5 = (QArrayData *)*param_1;
  if (pQVar5 == pQVar2) {
    return;
  }
  if (*(uint *)pQVar5 != 0xffffffff) {
    if (*(uint *)pQVar5 != 0) {
      LOCK();
      *(uint *)pQVar5 = *(uint *)pQVar5 - 1;
      UNLOCK();
      if (*(uint *)pQVar5 != 0) goto LAB_1000e84ca;
      pQVar5 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar5,0x50,8);
  }
LAB_1000e84ca:
  *param_1 = (long)pQVar2;
  return;
}

