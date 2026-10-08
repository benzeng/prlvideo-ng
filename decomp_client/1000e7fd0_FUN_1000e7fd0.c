
void FUN_1000e7fd0(long *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  QArrayData *pQVar9;
  ulong uVar10;
  ulong uVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  QArrayData *pQVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  QArrayData *pQVar21;
  uint uVar22;
  
  pQVar9 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar9 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar9 < 2) && ((*(uint *)(pQVar9 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar9 + 4) < (int)param_2) &&
         (uVar22 = *(uint *)(pQVar9 + 4), uVar22 != param_2)) {
        ___bzero(pQVar9 + (long)(int)uVar22 * 4 + *(long *)(pQVar9 + 0x10),
                 ((long)(int)param_2 - (long)(int)uVar22) * 4);
      }
      *(uint *)(pQVar9 + 4) = param_2;
    }
    else {
      pQVar9 = (QArrayData *)QArrayData::allocate(4,8,(long)(int)param_3);
      if (pQVar9 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar9 + 4) = param_2;
      lVar20 = *param_1;
      uVar22 = *(uint *)(lVar20 + 4);
      uVar8 = param_2;
      if ((int)uVar22 <= (int)param_2) {
        uVar8 = uVar22;
      }
      lVar2 = *(long *)(pQVar9 + 0x10);
      pQVar17 = pQVar9 + lVar2;
      pQVar21 = pQVar17;
      if (((long)(int)uVar8 & 0x3fffffffffffffffU) != 0) {
        lVar3 = *(long *)(lVar20 + 0x10);
        pQVar13 = (QArrayData *)(lVar20 + lVar3);
        uVar22 = ~uVar22;
        uVar18 = ~param_2;
        uVar8 = uVar18;
        if ((int)uVar18 <= (int)uVar22) {
          uVar8 = uVar22;
        }
        uVar15 = (long)(int)~uVar8 * 4 - 4;
        uVar19 = (uVar15 >> 2) + 1;
        uVar10 = uVar19 & 0x7ffffffffffffff8;
        pQVar12 = pQVar17;
        if (uVar10 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if (((QArrayData *)(lVar3 + uVar15 + lVar20) < pQVar9 + lVar2) ||
             (pQVar9 + uVar15 + lVar2 < pQVar13)) {
            pQVar13 = pQVar13 + uVar10 * 4;
            pQVar21 = pQVar9 + lVar2 + 0x10;
            puVar16 = (undefined8 *)(lVar3 + 0x10 + lVar20);
            uVar14 = uVar18;
            if ((int)uVar18 <= (int)uVar22) {
              uVar14 = uVar22;
            }
            uVar15 = ((long)(int)~uVar14 * 4 - 4U >> 2) + 1 & 0xfffffffffffffff8;
            do {
              uVar1 = *(undefined4 *)((long)puVar16 + -0xc);
              uVar4 = *(undefined4 *)(puVar16 + -1);
              uVar5 = *(undefined4 *)((long)puVar16 + -4);
              uVar6 = *puVar16;
              uVar7 = puVar16[1];
              *(undefined4 *)(pQVar21 + -0x10) = *(undefined4 *)(puVar16 + -2);
              *(undefined4 *)(pQVar21 + -0xc) = uVar1;
              *(undefined4 *)(pQVar21 + -8) = uVar4;
              *(undefined4 *)(pQVar21 + -4) = uVar5;
              *(undefined8 *)pQVar21 = uVar6;
              *(undefined8 *)(pQVar21 + 8) = uVar7;
              pQVar21 = pQVar21 + 0x20;
              puVar16 = puVar16 + 4;
              uVar15 = uVar15 - 8;
              uVar11 = uVar10;
              pQVar12 = pQVar17 + uVar10 * 4;
            } while (uVar15 != 0);
          }
        }
        pQVar21 = pQVar9 + lVar2 + (long)(int)~uVar8 * 4;
        if (uVar19 != uVar11) {
          if ((int)uVar18 <= (int)uVar22) {
            uVar18 = uVar22;
          }
          do {
            uVar1 = *(undefined4 *)pQVar13;
            pQVar13 = pQVar13 + 4;
            *(undefined4 *)pQVar12 = uVar1;
            pQVar12 = pQVar12 + 4;
          } while ((QArrayData *)(lVar3 + (long)(int)~uVar18 * 4 + lVar20) != pQVar13);
        }
      }
      if ((*(int *)(lVar20 + 4) < (int)param_2) && (pQVar21 != pQVar17 + (long)(int)param_2 * 4)) {
        ___bzero(pQVar21,(long)(pQVar17 + (long)(int)param_2 * 4) - (long)pQVar21 &
                         0xfffffffffffffffc);
        lVar20 = *param_1;
      }
      *(uint *)(pQVar9 + 8) =
           *(uint *)(pQVar9 + 8) & 0x7fffffff | *(uint *)(lVar20 + 8) & 0x80000000;
    }
  }
  pQVar17 = (QArrayData *)*param_1;
  if (pQVar17 == pQVar9) {
    return;
  }
  if (*(uint *)pQVar17 != 0xffffffff) {
    if (*(uint *)pQVar17 != 0) {
      LOCK();
      *(uint *)pQVar17 = *(uint *)pQVar17 - 1;
      UNLOCK();
      if (*(uint *)pQVar17 != 0) goto LAB_1000e823c;
      pQVar17 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar17,4,8);
  }
LAB_1000e823c:
  *param_1 = (long)pQVar9;
  return;
}

