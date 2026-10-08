
void FUN_100d15b20(long *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  QArrayData *pQVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *local_40;
  
  puVar8 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    iVar3 = (int)*(long *)PTR_shared_null_1021e1288;
    local_40 = puVar8;
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        if ((int)*(uint *)(PTR_shared_null_1021e1288 + 8) < 0) {
          local_40 = (undefined *)
                     QArrayData::allocate
                               (0x20,8,*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff,0);
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_40[0xb] = local_40[0xb] | 0x80;
          puVar10 = local_40;
        }
        else {
          local_40 = (undefined *)
                     QArrayData::allocate(0x20,8,*(long *)PTR_shared_null_1021e1288 >> 0x20,0);
          puVar10 = local_40;
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
            puVar10 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar10 + 8) & 0x7fffffff) != 0) {
          iVar3 = *(int *)(puVar8 + 4);
          if (((long)iVar3 & 0x7ffffffffffffffU) != 0) {
            puVar5 = (undefined8 *)(puVar8 + *(long *)(puVar8 + 0x10));
            puVar4 = puVar5 + (long)iVar3 * 4;
            puVar9 = (undefined8 *)(puVar10 + *(long *)(puVar10 + 0x10));
            do {
              piVar1 = (int *)*puVar5;
              *puVar9 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              piVar1 = (int *)puVar5[1];
              puVar9[1] = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              piVar1 = (int *)puVar5[2];
              puVar9[2] = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              *(undefined2 *)(puVar9 + 3) = *(undefined2 *)(puVar5 + 3);
              puVar5 = puVar5 + 4;
              puVar9 = puVar9 + 4;
            } while (puVar5 != puVar4);
            iVar3 = *(int *)(puVar8 + 4);
            puVar10 = local_40;
          }
          *(int *)(puVar10 + 4) = iVar3;
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
        UNLOCK();
      }
    }
    pQVar2 = (QArrayData *)*param_1;
    *param_1 = (long)local_40;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        UNLOCK();
        if (*(int *)pQVar2 != 0) goto LAB_100d15ce4;
      }
      lVar6 = (long)*(int *)(pQVar2 + 4) << 5;
      if (lVar6 != 0) {
        pQVar7 = pQVar2 + *(long *)(pQVar2 + 0x10);
        do {
          FUN_100d05f40(pQVar7);
          pQVar7 = pQVar7 + 0x20;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      QArrayData::deallocate(pQVar2,0x20,8);
    }
  }
LAB_100d15ce4:
  puVar8 = PTR_shared_null_1021e1288;
  iVar3 = (int)*(undefined8 *)PTR_shared_null_1021e1288;
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      iVar3 = (int)((ulong)*(undefined8 *)PTR_shared_null_1021e1288 >> 0x20);
    }
    else {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar8 != 0) {
        return;
      }
      iVar3 = *(int *)(puVar8 + 4);
    }
    lVar6 = (long)iVar3 << 5;
    if (lVar6 != 0) {
      puVar8 = puVar8 + *(long *)(puVar8 + 0x10);
      do {
        FUN_100d05f40(puVar8);
        lVar6 = lVar6 + -0x20;
        puVar8 = puVar8 + 0x20;
      } while (lVar6 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,0x20,8);
  }
  return;
}

