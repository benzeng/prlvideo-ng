
void FUN_1005fc970(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  undefined8 *puVar6;
  QArrayData *pQVar7;
  uint uVar8;
  long lVar9;
  QArrayData *pQVar10;
  
  pQVar5 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    pQVar5 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar5 < 2) && ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar5 + 4) < (int)param_2) && (*(uint *)(pQVar5 + 4) != param_2)) {
        lVar9 = *(long *)(pQVar5 + 0x10);
        pQVar10 = pQVar5 + (long)(int)*(uint *)(pQVar5 + 4) * 0x20 + lVar9;
        do {
          FUN_1007d6870(pQVar10);
          *(undefined8 *)(pQVar10 + 0x10) = 0;
          *(undefined4 *)(pQVar10 + 0x18) = 0xffffffff;
          pQVar10 = pQVar10 + 0x20;
        } while (pQVar10 != pQVar5 + (long)(int)param_2 * 0x20 + lVar9);
      }
      *(uint *)(pQVar5 + 4) = param_2;
    }
    else {
      pQVar5 = (QArrayData *)QArrayData::allocate(0x20,8,(long)(int)param_3);
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar5 + 4) = param_2;
      lVar9 = *param_1;
      uVar2 = *(uint *)(lVar9 + 4);
      uVar8 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar8 = uVar2;
      }
      pQVar10 = pQVar5 + *(long *)(pQVar5 + 0x10);
      pQVar7 = pQVar10;
      if (((long)(int)uVar8 & 0x7ffffffffffffffU) != 0) {
        puVar6 = (undefined8 *)(lVar9 + *(long *)(lVar9 + 0x10));
        uVar8 = ~param_2;
        if ((int)~param_2 <= (int)~uVar2) {
          uVar8 = ~uVar2;
        }
        lVar9 = (long)(int)~uVar8 * 0x20;
        pQVar7 = pQVar5 + *(long *)(pQVar5 + 0x10) + lVar9;
        do {
          *(undefined8 *)(pQVar10 + 0x18) = puVar6[3];
          *(undefined8 *)(pQVar10 + 0x10) = puVar6[2];
          uVar3 = *puVar6;
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 4;
          *(undefined8 *)(pQVar10 + 8) = *puVar1;
          *(undefined8 *)pQVar10 = uVar3;
          pQVar10 = pQVar10 + 0x20;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
        lVar9 = *param_1;
      }
      if ((*(int *)(lVar9 + 4) < (int)param_2) &&
         (lVar4 = *(long *)(pQVar5 + 0x10), uVar2 = *(uint *)(pQVar5 + 4),
         pQVar7 != pQVar5 + (long)(int)uVar2 * 0x20 + lVar4)) {
        do {
          FUN_1007d6870(pQVar7);
          *(undefined8 *)(pQVar7 + 0x10) = 0;
          *(undefined4 *)(pQVar7 + 0x18) = 0xffffffff;
          pQVar7 = pQVar7 + 0x20;
        } while (pQVar7 != pQVar5 + (long)(int)uVar2 * 0x20 + lVar4);
        lVar9 = *param_1;
      }
      *(uint *)(pQVar5 + 8) = *(uint *)(pQVar5 + 8) & 0x7fffffff | *(uint *)(lVar9 + 8) & 0x80000000
      ;
    }
  }
  pQVar10 = (QArrayData *)*param_1;
  if (pQVar10 == pQVar5) {
    return;
  }
  if (*(uint *)pQVar10 != 0xffffffff) {
    if (*(uint *)pQVar10 != 0) {
      LOCK();
      *(uint *)pQVar10 = *(uint *)pQVar10 - 1;
      UNLOCK();
      if (*(uint *)pQVar10 != 0) goto LAB_1005fcb30;
      pQVar10 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar10,0x20,8);
  }
LAB_1005fcb30:
  *param_1 = (long)pQVar5;
  return;
}

