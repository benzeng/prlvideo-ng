
void FUN_100d06c90(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  QArrayData *pQVar8;
  long lVar9;
  QArrayData *pQVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar3 = PTR_shared_null_1021e1288;
  pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar4 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar4 < 2) && ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == param_3)) {
      uVar1 = *(uint *)(pQVar4 + 4);
      lVar11 = *(long *)(pQVar4 + 0x10);
      if ((int)uVar1 < (int)param_2) {
        if (uVar1 != param_2) {
          pQVar8 = pQVar4 + (long)(int)uVar1 * 0x20 + lVar11;
          auVar12._8_4_ = (int)PTR_shared_null_1021e1288;
          auVar12._0_8_ = PTR_shared_null_1021e1288;
          auVar12._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
          do {
            *(undefined8 *)(pQVar8 + 0x18) = 0;
            *(undefined8 *)(pQVar8 + 0x10) = 0;
            *(undefined8 *)(pQVar8 + 8) = 0;
            *(undefined8 *)pQVar8 = 0;
            *(undefined1 (*) [16])pQVar8 = auVar12;
            *(undefined **)(pQVar8 + 0x10) = puVar3;
            pQVar8 = pQVar8 + 0x20;
          } while (pQVar8 != pQVar4 + (long)(int)param_2 * 0x20 + lVar11);
        }
      }
      else if (uVar1 != param_2) {
        lVar9 = (long)(int)uVar1 * 0x20 + (long)(int)param_2 * -0x20;
        pQVar8 = pQVar4 + (long)(int)param_2 * 0x20 + lVar11;
        do {
          FUN_100d05f40(pQVar8);
          lVar9 = lVar9 + -0x20;
          pQVar8 = pQVar8 + 0x20;
        } while (lVar9 != 0);
      }
      *(uint *)(pQVar4 + 4) = param_2;
    }
    else {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x20,8,(long)(int)param_3);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar4 + 4) = param_2;
      lVar11 = *param_1;
      uVar1 = *(uint *)(lVar11 + 4);
      uVar6 = param_2;
      if ((int)uVar1 <= (int)param_2) {
        uVar6 = uVar1;
      }
      pQVar8 = pQVar4 + *(long *)(pQVar4 + 0x10);
      pQVar10 = pQVar8;
      if (((long)(int)uVar6 & 0x7ffffffffffffffU) != 0) {
        puVar5 = (undefined8 *)(lVar11 + *(long *)(lVar11 + 0x10));
        puVar7 = puVar5 + (long)(int)uVar6 * 4;
        uVar6 = ~param_2;
        if ((int)~param_2 <= (int)~uVar1) {
          uVar6 = ~uVar1;
        }
        pQVar10 = pQVar4 + *(long *)(pQVar4 + 0x10) + (long)(int)~uVar6 * 0x20;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)pQVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          piVar2 = (int *)puVar5[1];
          *(int **)(pQVar8 + 8) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          piVar2 = (int *)puVar5[2];
          *(int **)(pQVar8 + 0x10) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          *(undefined2 *)(pQVar8 + 0x18) = *(undefined2 *)(puVar5 + 3);
          puVar5 = puVar5 + 4;
          pQVar8 = pQVar8 + 0x20;
        } while (puVar5 != puVar7);
        lVar11 = *param_1;
      }
      puVar3 = PTR_shared_null_1021e1288;
      if ((*(int *)(lVar11 + 4) < (int)param_2) &&
         (lVar9 = *(long *)(pQVar4 + 0x10), uVar1 = *(uint *)(pQVar4 + 4),
         pQVar10 != pQVar4 + (long)(int)uVar1 * 0x20 + lVar9)) {
        auVar13._8_4_ = (int)PTR_shared_null_1021e1288;
        auVar13._0_8_ = PTR_shared_null_1021e1288;
        auVar13._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
        do {
          *(undefined8 *)(pQVar10 + 0x18) = 0;
          *(undefined8 *)(pQVar10 + 0x10) = 0;
          *(undefined8 *)(pQVar10 + 8) = 0;
          *(undefined8 *)pQVar10 = 0;
          *(undefined1 (*) [16])pQVar10 = auVar13;
          *(undefined **)(pQVar10 + 0x10) = puVar3;
          pQVar10 = pQVar10 + 0x20;
        } while (pQVar10 != pQVar4 + (long)(int)uVar1 * 0x20 + lVar9);
        lVar11 = *param_1;
      }
      *(uint *)(pQVar4 + 8) =
           *(uint *)(pQVar4 + 8) & 0x7fffffff | *(uint *)(lVar11 + 8) & 0x80000000;
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
      if (*(uint *)pQVar8 != 0) goto LAB_100d06f54;
      pQVar8 = (QArrayData *)*param_1;
    }
    lVar11 = (long)*(int *)(pQVar8 + 4) << 5;
    if (lVar11 != 0) {
      pQVar10 = pQVar8 + *(long *)(pQVar8 + 0x10);
      do {
        FUN_100d05f40(pQVar10);
        lVar11 = lVar11 + -0x20;
        pQVar10 = pQVar10 + 0x20;
      } while (lVar11 != 0);
    }
    QArrayData::deallocate(pQVar8,0x20,8);
  }
LAB_100d06f54:
  *param_1 = (long)pQVar4;
  return;
}

