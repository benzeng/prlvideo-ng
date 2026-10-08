
void FUN_1001c34e0(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  QArrayData *pQVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  QArrayData *pQVar11;
  ulong uVar12;
  long lVar13;
  QArrayData *pQVar14;
  
  pQVar11 = (QArrayData *)*param_1;
  pQVar14 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    if ((*(uint *)pQVar11 < 2) && ((*(uint *)(pQVar11 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar11 + 4) < (int)param_2) &&
         (lVar6 = (long)(int)*(uint *)(pQVar11 + 4), *(uint *)(pQVar11 + 4) != param_2)) {
        lVar3 = *(long *)(pQVar11 + 0x10);
        lVar13 = lVar6 * 0x10;
        uVar10 = ((ulong)((long)(int)param_2 * 0x10 + -0x10 + lVar6 * -0x10) >> 4) + 1;
        uVar8 = 0;
        if ((uVar10 & 0x1ffffffffffffffe) != 0) {
          lVar6 = lVar6 + (uVar10 & 0x1ffffffffffffffe);
          pQVar14 = pQVar11 + lVar3 + 0x18 + lVar13;
          uVar12 = uVar10 & 0xfffffffffffffffe;
          do {
            *(undefined4 *)(pQVar14 + -0x18) = 0;
            *(undefined4 *)(pQVar14 + -8) = 0;
            *(undefined8 *)(pQVar14 + -0x10) = 0;
            *(undefined8 *)pQVar14 = 0;
            pQVar14 = pQVar14 + 0x20;
            uVar12 = uVar12 - 2;
            uVar8 = uVar10 & 0x1ffffffffffffffe;
          } while (uVar12 != 0);
        }
        if (uVar10 != uVar8) {
          pQVar14 = pQVar11 + lVar6 * 0x10 + lVar3;
          do {
            *(undefined4 *)pQVar14 = 0;
            *(undefined8 *)(pQVar14 + 8) = 0;
            pQVar14 = pQVar14 + 0x10;
          } while (pQVar14 != pQVar11 + (long)(int)param_2 * 0x10 + lVar3);
        }
      }
      *(uint *)(pQVar11 + 4) = param_2;
      return;
    }
    pQVar14 = (QArrayData *)QArrayData::allocate(0x10,8,(long)(int)param_3);
    if (pQVar14 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar14 + 4) = param_2;
    lVar6 = *param_1;
    uVar2 = *(uint *)(lVar6 + 4);
    uVar5 = param_2;
    if ((int)uVar2 <= (int)param_2) {
      uVar5 = uVar2;
    }
    pQVar11 = pQVar14 + *(long *)(pQVar14 + 0x10);
    pQVar7 = pQVar11;
    if (((long)(int)uVar5 & 0xfffffffffffffffU) != 0) {
      puVar9 = (undefined8 *)(lVar6 + *(long *)(lVar6 + 0x10));
      uVar5 = ~param_2;
      if ((int)~param_2 <= (int)~uVar2) {
        uVar5 = ~uVar2;
      }
      lVar6 = (long)(int)~uVar5 * 0x10;
      pQVar7 = pQVar14 + *(long *)(pQVar14 + 0x10) + lVar6;
      do {
        uVar4 = *puVar9;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 2;
        *(undefined8 *)(pQVar11 + 8) = *puVar1;
        *(undefined8 *)pQVar11 = uVar4;
        pQVar11 = pQVar11 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
      lVar6 = *param_1;
    }
    if (*(int *)(lVar6 + 4) < (int)param_2) {
      lVar3 = *(long *)(pQVar14 + 0x10);
      uVar2 = *(uint *)(pQVar14 + 4);
      if (pQVar7 != pQVar14 + (long)(int)uVar2 * 0x10 + lVar3) {
        uVar10 = ((ulong)(pQVar14 + ((lVar3 + -0x10 + (long)(int)uVar2 * 0x10) - (long)pQVar7)) >> 4
                 ) + 1;
        uVar8 = 0;
        pQVar11 = pQVar7;
        if ((uVar10 & 0x1ffffffffffffffe) != 0) {
          pQVar11 = pQVar7 + (uVar10 & 0x1ffffffffffffffe) * 0x10;
          pQVar7 = pQVar7 + 0x18;
          uVar12 = uVar10 & 0xfffffffffffffffe;
          do {
            *(undefined4 *)(pQVar7 + -0x18) = 0;
            *(undefined4 *)(pQVar7 + -8) = 0;
            *(undefined8 *)(pQVar7 + -0x10) = 0;
            *(undefined8 *)pQVar7 = 0;
            pQVar7 = pQVar7 + 0x20;
            uVar12 = uVar12 - 2;
            uVar8 = uVar10 & 0x1ffffffffffffffe;
          } while (uVar12 != 0);
        }
        if (uVar10 != uVar8) {
          do {
            *(undefined4 *)pQVar11 = 0;
            *(undefined8 *)(pQVar11 + 8) = 0;
            pQVar11 = pQVar11 + 0x10;
          } while (pQVar11 != pQVar14 + (long)(int)uVar2 * 0x10 + lVar3);
        }
      }
    }
    *(uint *)(pQVar14 + 8) = *(uint *)(pQVar14 + 8) & 0x7fffffff | *(uint *)(lVar6 + 8) & 0x80000000
    ;
    pQVar11 = (QArrayData *)*param_1;
  }
  if (pQVar11 == pQVar14) {
    return;
  }
  if (*(uint *)pQVar11 != 0xffffffff) {
    if (*(uint *)pQVar11 != 0) {
      LOCK();
      *(uint *)pQVar11 = *(uint *)pQVar11 - 1;
      UNLOCK();
      if (*(uint *)pQVar11 != 0) goto LAB_1001c3786;
      pQVar11 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar11,0x10,8);
  }
LAB_1001c3786:
  *param_1 = (long)pQVar14;
  return;
}

