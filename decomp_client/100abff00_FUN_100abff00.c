
void FUN_100abff00(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  undefined8 *puVar7;
  uint uVar8;
  QArrayData *pQVar9;
  long lVar10;
  
  pQVar6 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar6 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar6 < 2) && ((*(uint *)(pQVar6 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar6 + 4) < (int)param_2) && (*(uint *)(pQVar6 + 4) != param_2)) {
        lVar10 = *(long *)(pQVar6 + 0x10);
        pQVar5 = pQVar6 + (long)(int)*(uint *)(pQVar6 + 4) * 0x20 + lVar10;
        do {
          *(undefined8 *)(pQVar5 + 0x18) = 0;
          *(undefined8 *)(pQVar5 + 0x10) = 0;
          *(undefined8 *)(pQVar5 + 8) = 0;
          *(undefined8 *)pQVar5 = 0;
          *(undefined8 *)(pQVar5 + 0x18) = 0xffffffffffffffff;
          pQVar5 = pQVar5 + 0x20;
        } while (pQVar5 != pQVar6 + (long)(int)param_2 * 0x20 + lVar10);
      }
      *(uint *)(pQVar6 + 4) = param_2;
    }
    else {
      pQVar6 = (QArrayData *)QArrayData::allocate(0x20,8,(long)(int)param_3);
      if (pQVar6 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar6 + 4) = param_2;
      lVar10 = *param_1;
      uVar2 = *(uint *)(lVar10 + 4);
      uVar8 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar8 = uVar2;
      }
      pQVar5 = pQVar6 + *(long *)(pQVar6 + 0x10);
      pQVar9 = pQVar5;
      if (((long)(int)uVar8 & 0x7ffffffffffffffU) != 0) {
        puVar7 = (undefined8 *)(lVar10 + *(long *)(lVar10 + 0x10));
        uVar8 = ~param_2;
        if ((int)~param_2 <= (int)~uVar2) {
          uVar8 = ~uVar2;
        }
        lVar10 = (long)(int)~uVar8 * 0x20;
        pQVar9 = pQVar6 + *(long *)(pQVar6 + 0x10) + lVar10;
        do {
          *(undefined8 *)(pQVar5 + 0x18) = puVar7[3];
          *(undefined8 *)(pQVar5 + 0x10) = puVar7[2];
          uVar3 = *puVar7;
          puVar1 = puVar7 + 1;
          puVar7 = puVar7 + 4;
          *(undefined8 *)(pQVar5 + 8) = *puVar1;
          *(undefined8 *)pQVar5 = uVar3;
          pQVar5 = pQVar5 + 0x20;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
        lVar10 = *param_1;
      }
      if ((*(int *)(lVar10 + 4) < (int)param_2) &&
         (lVar4 = *(long *)(pQVar6 + 0x10), uVar2 = *(uint *)(pQVar6 + 4),
         pQVar9 != pQVar6 + (long)(int)uVar2 * 0x20 + lVar4)) {
        do {
          *(undefined8 *)(pQVar9 + 0x18) = 0;
          *(undefined8 *)(pQVar9 + 0x10) = 0;
          *(undefined8 *)(pQVar9 + 8) = 0;
          *(undefined8 *)pQVar9 = 0;
          *(undefined8 *)(pQVar9 + 0x18) = 0xffffffffffffffff;
          pQVar9 = pQVar9 + 0x20;
        } while (pQVar9 != pQVar6 + (long)(int)uVar2 * 0x20 + lVar4);
        lVar10 = *param_1;
      }
      *(uint *)(pQVar6 + 8) =
           *(uint *)(pQVar6 + 8) & 0x7fffffff | *(uint *)(lVar10 + 8) & 0x80000000;
    }
  }
  pQVar5 = (QArrayData *)*param_1;
  if (pQVar5 == pQVar6) {
    return;
  }
  if (*(uint *)pQVar5 != 0xffffffff) {
    if (*(uint *)pQVar5 != 0) {
      LOCK();
      *(uint *)pQVar5 = *(uint *)pQVar5 - 1;
      UNLOCK();
      if (*(uint *)pQVar5 != 0) goto LAB_100ac0102;
      pQVar5 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar5,0x20,8);
  }
LAB_100ac0102:
  *param_1 = (long)pQVar6;
  return;
}

