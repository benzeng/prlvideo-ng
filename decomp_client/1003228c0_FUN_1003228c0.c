
void FUN_1003228c0(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  
  pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar4 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar4 < 2) && ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar4 + 4) < (int)param_2) &&
         (uVar2 = *(uint *)(pQVar4 + 4), uVar2 != param_2)) {
        lVar7 = (long)(int)uVar2 * -0x24;
        ___bzero(pQVar4 + (long)(int)uVar2 * 0x24 + *(long *)(pQVar4 + 0x10),
                 (lVar7 + (long)(int)param_2 * 0x24) -
                 (ulong)(lVar7 + -0x24 + (long)(int)param_2 * 0x24) % 0x24);
      }
      *(uint *)(pQVar4 + 4) = param_2;
    }
    else {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x24,8,(long)(int)param_3);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar4 + 4) = param_2;
      lVar7 = *param_1;
      uVar2 = *(uint *)(lVar7 + 4);
      uVar6 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar6 = uVar2;
      }
      pQVar8 = pQVar4 + *(long *)(pQVar4 + 0x10);
      pQVar9 = pQVar8;
      if ((long)(int)uVar6 * 0x24 != 0) {
        puVar5 = (undefined8 *)(lVar7 + *(long *)(lVar7 + 0x10));
        uVar6 = ~param_2;
        if ((int)~param_2 <= (int)~uVar2) {
          uVar6 = ~uVar2;
        }
        pQVar9 = pQVar4 + *(long *)(pQVar4 + 0x10) + 0x24 +
                          (((long)(int)~uVar6 * 0x24 - 0x24U) / 0x24) * 0x24;
        lVar7 = (long)(int)~uVar6 * 0x24;
        do {
          *(undefined4 *)(pQVar8 + 0x20) = *(undefined4 *)(puVar5 + 4);
          *(undefined8 *)(pQVar8 + 0x18) = puVar5[3];
          *(undefined8 *)(pQVar8 + 0x10) = puVar5[2];
          uVar3 = *puVar5;
          puVar1 = puVar5 + 1;
          puVar5 = (undefined8 *)((long)puVar5 + 0x24);
          *(undefined8 *)(pQVar8 + 8) = *puVar1;
          *(undefined8 *)pQVar8 = uVar3;
          pQVar8 = pQVar8 + 0x24;
          lVar7 = lVar7 + -0x24;
        } while (lVar7 != 0);
        lVar7 = *param_1;
      }
      if (*(int *)(lVar7 + 4) < (int)param_2) {
        if (pQVar9 != pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 0x24 + *(long *)(pQVar4 + 0x10)) {
          ___bzero(pQVar9,pQVar4 + (((long)(int)*(uint *)(pQVar4 + 4) * 0x24 +
                                    *(long *)(pQVar4 + 0x10) + -0x24) - (long)pQVar9) +
                          (0x24 - (ulong)(pQVar4 + (((long)(int)*(uint *)(pQVar4 + 4) * 0x24 +
                                                    *(long *)(pQVar4 + 0x10) + -0x24) - (long)pQVar9
                                                   )) % 0x24));
          lVar7 = *param_1;
        }
      }
      *(uint *)(pQVar4 + 8) = *(uint *)(pQVar4 + 8) & 0x7fffffff | *(uint *)(lVar7 + 8) & 0x80000000
      ;
    }
  }
  pQVar8 = (QArrayData *)*param_1;
  if (pQVar8 == pQVar4) {
    return;
  }
  if (*(uint *)pQVar8 != 0xffffffff) {
    if (*(uint *)pQVar8 != 0) {
      LOCK();
      *(uint *)pQVar8 = *(uint *)pQVar8 - 1;
      UNLOCK();
      if (*(uint *)pQVar8 != 0) goto LAB_100322ae1;
      pQVar8 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar8,0x24,8);
  }
LAB_100322ae1:
  *param_1 = (long)pQVar4;
  return;
}

