
void FUN_100d063c0(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  QArrayData *pQVar5;
  undefined8 *puVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  undefined8 *puVar10;
  QArrayData *pQVar11;
  long lVar12;
  
  pQVar5 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar5 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar5 < 2) && ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == param_3)) {
      uVar1 = *(uint *)(pQVar5 + 4);
      lVar4 = (long)(int)uVar1;
      if ((int)uVar1 < (int)param_2) {
        if (uVar1 != param_2) {
          lVar12 = (long)(int)param_2 * 0x28 + lVar4 * -0x28;
          pQVar8 = pQVar5 + lVar4 * 0x28 + *(long *)(pQVar5 + 0x10);
          do {
            FUN_100d14eb0(pQVar8);
            lVar12 = lVar12 + -0x28;
            pQVar8 = pQVar8 + 0x28;
          } while (lVar12 != 0);
        }
      }
      else if (uVar1 != param_2) {
        pQVar8 = pQVar5 + *(long *)(pQVar5 + 0x10) + (long)(int)param_2 * 0x28 + 0x10;
        lVar4 = lVar4 * 0x28 + (long)(int)param_2 * -0x28;
        do {
          pQVar9 = *(QArrayData **)pQVar8;
          if (*(int *)pQVar9 == 0) {
LAB_100d065f0:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            UNLOCK();
            if (*(int *)pQVar9 == 0) {
              pQVar9 = *(QArrayData **)pQVar8;
              goto LAB_100d065f0;
            }
          }
          pQVar8 = pQVar8 + 0x28;
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != 0);
      }
      *(uint *)(pQVar5 + 4) = param_2;
    }
    else {
      pQVar5 = (QArrayData *)QArrayData::allocate(0x28,8,(long)(int)param_3);
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar5 + 4) = param_2;
      lVar4 = *param_1;
      uVar1 = *(uint *)(lVar4 + 4);
      uVar7 = param_2;
      if ((int)uVar1 <= (int)param_2) {
        uVar7 = uVar1;
      }
      pQVar8 = pQVar5 + *(long *)(pQVar5 + 0x10);
      pQVar9 = pQVar8;
      if ((long)(int)uVar7 * 0x28 != 0) {
        puVar6 = (undefined8 *)(lVar4 + *(long *)(lVar4 + 0x10));
        puVar10 = puVar6 + (long)(int)uVar7 * 5;
        uVar7 = ~param_2;
        if ((int)~param_2 <= (int)~uVar1) {
          uVar7 = ~uVar1;
        }
        pQVar9 = pQVar5 + *(long *)(pQVar5 + 0x10) + 0x28 +
                          (((long)(int)~uVar7 * 0x28 - 0x28U) / 0x28) * 0x28;
        do {
          uVar2 = *puVar6;
          *(undefined8 *)(pQVar8 + 8) = puVar6[1];
          *(undefined8 *)pQVar8 = uVar2;
          piVar3 = (int *)puVar6[2];
          *(int **)(pQVar8 + 0x10) = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          uVar2 = puVar6[3];
          *(undefined8 *)(pQVar8 + 0x20) = puVar6[4];
          *(undefined8 *)(pQVar8 + 0x18) = uVar2;
          puVar6 = puVar6 + 5;
          pQVar8 = pQVar8 + 0x28;
        } while (puVar6 != puVar10);
        lVar4 = *param_1;
      }
      if (*(int *)(lVar4 + 4) < (int)param_2) {
        lVar12 = *(long *)(pQVar5 + 0x10);
        uVar1 = *(uint *)(pQVar5 + 4);
        if (pQVar9 != pQVar5 + (long)(int)uVar1 * 0x28 + lVar12) {
          do {
            FUN_100d14eb0(pQVar9);
            pQVar9 = pQVar9 + 0x28;
          } while (pQVar5 + lVar12 + (long)(int)uVar1 * 0x28 != pQVar9);
          lVar4 = *param_1;
        }
      }
      *(uint *)(pQVar5 + 8) = *(uint *)(pQVar5 + 8) & 0x7fffffff | *(uint *)(lVar4 + 8) & 0x80000000
      ;
    }
  }
  pQVar8 = (QArrayData *)*param_1;
  if (pQVar8 == pQVar5) {
    return;
  }
  if (*(uint *)pQVar8 != 0xffffffff) {
    if (*(uint *)pQVar8 != 0) {
      LOCK();
      *(uint *)pQVar8 = *(uint *)pQVar8 - 1;
      UNLOCK();
      if (*(uint *)pQVar8 != 0) goto LAB_100d066ab;
      pQVar8 = (QArrayData *)*param_1;
    }
    lVar4 = (long)*(int *)(pQVar8 + 4) * 0x28;
    if (lVar4 != 0) {
      pQVar9 = pQVar8 + *(long *)(pQVar8 + 0x10) + 0x10;
      do {
        pQVar11 = *(QArrayData **)pQVar9;
        if (*(int *)pQVar11 == 0) {
LAB_100d06680:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          UNLOCK();
          if (*(int *)pQVar11 == 0) {
            pQVar11 = *(QArrayData **)pQVar9;
            goto LAB_100d06680;
          }
        }
        pQVar9 = pQVar9 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
    QArrayData::deallocate(pQVar8,0x28,8);
  }
LAB_100d066ab:
  *param_1 = (long)pQVar5;
  return;
}

