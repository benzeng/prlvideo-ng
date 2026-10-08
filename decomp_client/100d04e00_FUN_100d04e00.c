
void FUN_100d04e00(long *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  QArrayData *pQVar8;
  undefined8 *puVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  long lVar12;
  undefined *local_40;
  
  puVar3 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    iVar4 = (int)*(long *)PTR_shared_null_1021e1288;
    local_40 = puVar3;
    if (iVar4 != -1) {
      if (iVar4 == 0) {
        if ((int)*(uint *)(PTR_shared_null_1021e1288 + 8) < 0) {
          local_40 = (undefined *)
                     QArrayData::allocate
                               (0x28,8,*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff,0);
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_40[0xb] = local_40[0xb] | 0x80;
          puVar7 = local_40;
        }
        else {
          local_40 = (undefined *)
                     QArrayData::allocate(0x28,8,*(long *)PTR_shared_null_1021e1288 >> 0x20,0);
          puVar7 = local_40;
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
            puVar7 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar7 + 8) & 0x7fffffff) != 0) {
          iVar4 = *(int *)(puVar3 + 4);
          if ((long)iVar4 * 0x28 != 0) {
            puVar5 = (undefined8 *)(puVar3 + *(long *)(puVar3 + 0x10));
            puVar9 = puVar5 + (long)iVar4 * 5;
            puVar6 = (undefined8 *)(puVar7 + *(long *)(puVar7 + 0x10));
            do {
              uVar1 = *puVar5;
              puVar6[1] = puVar5[1];
              *puVar6 = uVar1;
              piVar2 = (int *)puVar5[2];
              puVar6[2] = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                UNLOCK();
              }
              uVar1 = puVar5[3];
              puVar6[4] = puVar5[4];
              puVar6[3] = uVar1;
              puVar5 = puVar5 + 5;
              puVar6 = puVar6 + 5;
            } while (puVar5 != puVar9);
            iVar4 = *(int *)(puVar3 + 4);
            puVar7 = local_40;
          }
          *(int *)(puVar7 + 4) = iVar4;
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
        UNLOCK();
      }
    }
    pQVar11 = (QArrayData *)*param_1;
    *param_1 = (long)local_40;
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        UNLOCK();
        if (*(int *)pQVar11 != 0) goto LAB_100d04fdb;
      }
      lVar12 = (long)*(int *)(pQVar11 + 4) * 0x28;
      if (lVar12 != 0) {
        pQVar8 = pQVar11 + *(long *)(pQVar11 + 0x10) + 0x10;
        do {
          pQVar10 = *(QArrayData **)pQVar8;
          if (*(int *)pQVar10 == 0) {
LAB_100d04fb0:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            UNLOCK();
            if (*(int *)pQVar10 == 0) {
              pQVar10 = *(QArrayData **)pQVar8;
              goto LAB_100d04fb0;
            }
          }
          pQVar8 = pQVar8 + 0x28;
          lVar12 = lVar12 + -0x28;
        } while (lVar12 != 0);
      }
      QArrayData::deallocate(pQVar11,0x28,8);
    }
  }
LAB_100d04fdb:
  puVar3 = PTR_shared_null_1021e1288;
  iVar4 = (int)*(undefined8 *)PTR_shared_null_1021e1288;
  if (iVar4 != -1) {
    if (iVar4 == 0) {
      iVar4 = (int)((ulong)*(undefined8 *)PTR_shared_null_1021e1288 >> 0x20);
    }
    else {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar3 != 0) {
        return;
      }
      iVar4 = *(int *)(puVar3 + 4);
    }
    lVar12 = (long)iVar4 * 0x28;
    if (lVar12 != 0) {
      puVar9 = (undefined8 *)(puVar3 + *(long *)(puVar3 + 0x10) + 0x10);
      do {
        pQVar11 = (QArrayData *)*puVar9;
        if (*(int *)pQVar11 == 0) {
LAB_100d05050:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          UNLOCK();
          if (*(int *)pQVar11 == 0) {
            pQVar11 = (QArrayData *)*puVar9;
            goto LAB_100d05050;
          }
        }
        puVar9 = puVar9 + 5;
        lVar12 = lVar12 + -0x28;
      } while (lVar12 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,0x28,8);
  }
  return;
}

