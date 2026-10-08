
long FUN_100b590a0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  QArrayData *pQVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  iVar6 = (int)((ulong)(param_3 - param_2) >> 4);
  if (iVar6 != 0) {
    puVar11 = (uint *)*param_1;
    lVar3 = *(long *)(puVar11 + 4);
    uVar7 = param_2 - ((long)puVar11 + lVar3);
    if ((puVar11[2] & 0x7fffffff) == 0) {
      lVar8 = (long)(int)(uVar7 >> 4);
    }
    else {
      if (1 < *puVar11) {
        FUN_100b588e0(param_1,puVar11[1],puVar11[2] & 0x7fffffff,0);
        puVar11 = (uint *)*param_1;
        lVar3 = *(long *)(puVar11 + 4);
      }
      lVar8 = (long)(int)(uVar7 >> 4);
      lVar10 = lVar8 * 0x10;
      puVar12 = (undefined8 *)((long)puVar11 + lVar3 + lVar10);
      uVar5 = puVar11[1];
      if (lVar8 + iVar6 != (long)(int)uVar5) {
        lVar14 = (long)(int)uVar5 << 4;
        lVar13 = (long)iVar6 * 0x10 + lVar10;
        lVar3 = (long)puVar11 + lVar3;
        do {
          lVar4 = lVar3;
          pQVar9 = *(QArrayData **)(lVar10 + 8 + lVar4);
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              UNLOCK();
              if (*(int *)pQVar9 != 0) goto LAB_100b591a5;
              pQVar9 = *(QArrayData **)(lVar10 + 8 + lVar4);
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_100b591a5:
          pQVar9 = *(QArrayData **)(lVar10 + lVar4);
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              UNLOCK();
              if (*(int *)pQVar9 != 0) goto LAB_100b591d5;
              pQVar9 = *(QArrayData **)(lVar10 + lVar4);
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_100b591d5:
          piVar2 = *(int **)(lVar13 + lVar4);
          *(int **)(lVar10 + lVar4) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          piVar2 = *(int **)(lVar13 + 8 + lVar4);
          puVar12[1] = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar12 = puVar12 + 2;
          lVar14 = lVar14 + -0x10;
          lVar3 = lVar4 + 0x10;
        } while (lVar13 != lVar14);
        puVar12 = (undefined8 *)(lVar4 + 0x10 + lVar10);
        puVar11 = (uint *)*param_1;
        lVar3 = *(long *)(puVar11 + 4);
        uVar5 = puVar11[1];
      }
      if (puVar12 < (undefined8 *)((long)puVar11 + (long)(int)uVar5 * 0x10 + lVar3)) {
        do {
          pQVar9 = (QArrayData *)puVar12[1];
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              UNLOCK();
              if (*(int *)pQVar9 != 0) goto LAB_100b59293;
              pQVar9 = (QArrayData *)puVar12[1];
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_100b59293:
          puVar1 = puVar12 + 2;
          pQVar9 = (QArrayData *)*puVar12;
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              UNLOCK();
              if (*(int *)pQVar9 != 0) goto LAB_100b592c5;
              pQVar9 = (QArrayData *)*puVar12;
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_100b592c5:
          puVar12 = puVar1;
        } while ((undefined8 *)((long)puVar11 + lVar3 + (long)(int)uVar5 * 0x10) != puVar1);
        puVar11 = (uint *)*param_1;
        lVar3 = *(long *)(puVar11 + 4);
      }
      puVar11[1] = puVar11[1] - iVar6;
    }
    param_2 = (long)puVar11 + lVar8 * 0x10 + lVar3;
  }
  return param_2;
}

