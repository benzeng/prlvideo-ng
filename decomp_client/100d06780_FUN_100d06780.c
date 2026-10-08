
void FUN_100d06780(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  uint uVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  undefined8 *puVar9;
  QArrayData *pQVar10;
  long lVar11;
  
  pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar4 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar4 < 2) && ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == param_3)) {
      uVar1 = *(uint *)(pQVar4 + 4);
      lVar3 = (long)(int)uVar1;
      if ((int)uVar1 < (int)param_2) {
        if (uVar1 != param_2) {
          lVar11 = (long)(int)param_2 * 0x28 + lVar3 * -0x28;
          pQVar7 = pQVar4 + lVar3 * 0x28 + *(long *)(pQVar4 + 0x10);
          do {
            FUN_100d15130(pQVar7);
            lVar11 = lVar11 + -0x28;
            pQVar7 = pQVar7 + 0x28;
          } while (lVar11 != 0);
        }
      }
      else if (uVar1 != param_2) {
        pQVar7 = pQVar4 + (long)(int)param_2 * 0x28 + *(long *)(pQVar4 + 0x10);
        lVar3 = lVar3 * 0x28 + (long)(int)param_2 * -0x28;
        do {
          pQVar8 = *(QArrayData **)(pQVar7 + 0x10);
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              UNLOCK();
              if (*(int *)pQVar8 != 0) goto LAB_100d069d0;
              pQVar8 = *(QArrayData **)(pQVar7 + 0x10);
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_100d069d0:
          pQVar8 = *(QArrayData **)(pQVar7 + 8);
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              UNLOCK();
              if (*(int *)pQVar8 != 0) goto LAB_100d06a00;
              pQVar8 = *(QArrayData **)(pQVar7 + 8);
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_100d06a00:
          pQVar7 = pQVar7 + 0x28;
          lVar3 = lVar3 + -0x28;
        } while (lVar3 != 0);
      }
      *(uint *)(pQVar4 + 4) = param_2;
    }
    else {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x28,8,(long)(int)param_3);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar4 + 4) = param_2;
      lVar3 = *param_1;
      uVar1 = *(uint *)(lVar3 + 4);
      uVar6 = param_2;
      if ((int)uVar1 <= (int)param_2) {
        uVar6 = uVar1;
      }
      pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10);
      pQVar8 = pQVar7;
      if ((long)(int)uVar6 * 0x28 != 0) {
        puVar5 = (undefined8 *)(lVar3 + *(long *)(lVar3 + 0x10));
        puVar9 = puVar5 + (long)(int)uVar6 * 5;
        uVar6 = ~param_2;
        if ((int)~param_2 <= (int)~uVar1) {
          uVar6 = ~uVar1;
        }
        pQVar8 = pQVar4 + *(long *)(pQVar4 + 0x10) + 0x28 +
                          (((long)(int)~uVar6 * 0x28 - 0x28U) / 0x28) * 0x28;
        do {
          *(undefined8 *)pQVar7 = *puVar5;
          piVar2 = (int *)puVar5[1];
          *(int **)(pQVar7 + 8) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          piVar2 = (int *)puVar5[2];
          *(int **)(pQVar7 + 0x10) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          *(undefined4 *)(pQVar7 + 0x20) = *(undefined4 *)(puVar5 + 4);
          *(undefined8 *)(pQVar7 + 0x18) = puVar5[3];
          puVar5 = puVar5 + 5;
          pQVar7 = pQVar7 + 0x28;
        } while (puVar5 != puVar9);
        lVar3 = *param_1;
      }
      if (*(int *)(lVar3 + 4) < (int)param_2) {
        lVar11 = *(long *)(pQVar4 + 0x10);
        uVar1 = *(uint *)(pQVar4 + 4);
        if (pQVar8 != pQVar4 + (long)(int)uVar1 * 0x28 + lVar11) {
          do {
            FUN_100d15130(pQVar8);
            pQVar8 = pQVar8 + 0x28;
          } while (pQVar4 + lVar11 + (long)(int)uVar1 * 0x28 != pQVar8);
          lVar3 = *param_1;
        }
      }
      *(uint *)(pQVar4 + 8) = *(uint *)(pQVar4 + 8) & 0x7fffffff | *(uint *)(lVar3 + 8) & 0x80000000
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
      if (*(uint *)pQVar7 != 0) goto LAB_100d06adc;
      pQVar7 = (QArrayData *)*param_1;
    }
    lVar3 = (long)*(int *)(pQVar7 + 4) * 0x28;
    if (lVar3 != 0) {
      pQVar8 = pQVar7 + *(long *)(pQVar7 + 0x10);
      do {
        pQVar10 = *(QArrayData **)(pQVar8 + 0x10);
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            UNLOCK();
            if (*(int *)pQVar10 != 0) goto LAB_100d06a90;
            pQVar10 = *(QArrayData **)(pQVar8 + 0x10);
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_100d06a90:
        pQVar10 = *(QArrayData **)(pQVar8 + 8);
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            UNLOCK();
            if (*(int *)pQVar10 != 0) goto LAB_100d06ac0;
            pQVar10 = *(QArrayData **)(pQVar8 + 8);
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_100d06ac0:
        pQVar8 = pQVar8 + 0x28;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
    }
    QArrayData::deallocate(pQVar7,0x28,8);
  }
LAB_100d06adc:
  *param_1 = (long)pQVar4;
  return;
}

