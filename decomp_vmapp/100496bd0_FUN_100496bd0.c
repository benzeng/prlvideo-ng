
void FUN_100496bd0(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  
  pQVar4 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    pQVar4 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar4 < 2) && ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar4 + 4) < (int)param_2) &&
         (uVar2 = *(uint *)(pQVar4 + 4), uVar2 != param_2)) {
        ___bzero(pQVar4 + (long)(int)uVar2 * 0x10 + *(long *)(pQVar4 + 0x10),
                 ((long)(int)param_2 - (long)(int)uVar2) * 0x10);
      }
      *(uint *)(pQVar4 + 4) = param_2;
    }
    else {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x10,8,(long)(int)param_3);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar4 + 4) = param_2;
      lVar6 = *param_1;
      uVar2 = *(uint *)(lVar6 + 4);
      uVar7 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar7 = uVar2;
      }
      pQVar9 = pQVar4 + *(long *)(pQVar4 + 0x10);
      pQVar8 = pQVar9;
      if (((long)(int)uVar7 & 0xfffffffffffffffU) != 0) {
        puVar5 = (undefined8 *)(lVar6 + *(long *)(lVar6 + 0x10));
        uVar7 = ~param_2;
        if ((int)~param_2 <= (int)~uVar2) {
          uVar7 = ~uVar2;
        }
        lVar6 = (long)(int)~uVar7 * 0x10;
        pQVar8 = pQVar4 + *(long *)(pQVar4 + 0x10) + lVar6;
        do {
          uVar3 = *puVar5;
          puVar1 = puVar5 + 1;
          puVar5 = puVar5 + 2;
          *(undefined8 *)(pQVar9 + 8) = *puVar1;
          *(undefined8 *)pQVar9 = uVar3;
          pQVar9 = pQVar9 + 0x10;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
        lVar6 = *param_1;
      }
      if ((*(int *)(lVar6 + 4) < (int)param_2) &&
         (pQVar8 != pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 0x10 + *(long *)(pQVar4 + 0x10))) {
        ___bzero(pQVar8,(long)(pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 0x10 +
                                        *(long *)(pQVar4 + 0x10)) - (long)pQVar8 &
                        0xfffffffffffffff0);
        lVar6 = *param_1;
      }
      *(uint *)(pQVar4 + 8) = *(uint *)(pQVar4 + 8) & 0x7fffffff | *(uint *)(lVar6 + 8) & 0x80000000
      ;
    }
  }
  pQVar9 = (QArrayData *)*param_1;
  if (pQVar9 == pQVar4) {
    return;
  }
  if (*(uint *)pQVar9 != 0xffffffff) {
    if (*(uint *)pQVar9 != 0) {
      LOCK();
      *(uint *)pQVar9 = *(uint *)pQVar9 - 1;
      UNLOCK();
      if (*(uint *)pQVar9 != 0) goto LAB_100496d59;
      pQVar9 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar9,0x10,8);
  }
LAB_100496d59:
  *param_1 = (long)pQVar4;
  return;
}

