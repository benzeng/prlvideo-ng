
void FUN_100d05150(long *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *local_40;
  
  puVar5 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    iVar2 = (int)*(long *)PTR_shared_null_1021e1288;
    local_40 = puVar5;
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        if ((int)*(uint *)(PTR_shared_null_1021e1288 + 8) < 0) {
          local_40 = (undefined *)
                     QArrayData::allocate
                               (0x28,8,*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff,0);
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_40[0xb] = local_40[0xb] | 0x80;
          puVar11 = local_40;
        }
        else {
          local_40 = (undefined *)
                     QArrayData::allocate(0x28,8,*(long *)PTR_shared_null_1021e1288 >> 0x20,0);
          puVar11 = local_40;
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
            puVar11 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar11 + 8) & 0x7fffffff) != 0) {
          iVar2 = *(int *)(puVar5 + 4);
          if ((long)iVar2 * 0x28 != 0) {
            puVar4 = (undefined8 *)(puVar5 + *(long *)(puVar5 + 0x10));
            puVar3 = puVar4 + (long)iVar2 * 5;
            puVar10 = (undefined8 *)(puVar11 + *(long *)(puVar11 + 0x10));
            do {
              *puVar10 = *puVar4;
              piVar1 = (int *)puVar4[1];
              puVar10[1] = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              piVar1 = (int *)puVar4[2];
              puVar10[2] = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar4 + 4);
              puVar10[3] = puVar4[3];
              puVar4 = puVar4 + 5;
              puVar10 = puVar10 + 5;
            } while (puVar4 != puVar3);
            iVar2 = *(int *)(puVar5 + 4);
            puVar11 = local_40;
          }
          *(int *)(puVar11 + 4) = iVar2;
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
        UNLOCK();
      }
    }
    pQVar7 = (QArrayData *)*param_1;
    *param_1 = (long)local_40;
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        UNLOCK();
        if (*(int *)pQVar7 != 0) goto LAB_100d05370;
      }
      lVar9 = (long)*(int *)(pQVar7 + 4) * 0x28;
      if (lVar9 != 0) {
        pQVar8 = pQVar7 + *(long *)(pQVar7 + 0x10);
        do {
          pQVar6 = *(QArrayData **)(pQVar8 + 0x10);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              UNLOCK();
              if (*(int *)pQVar6 != 0) goto LAB_100d05322;
              pQVar6 = *(QArrayData **)(pQVar8 + 0x10);
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_100d05322:
          pQVar6 = *(QArrayData **)(pQVar8 + 8);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              UNLOCK();
              if (*(int *)pQVar6 != 0) goto LAB_100d05354;
              pQVar6 = *(QArrayData **)(pQVar8 + 8);
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_100d05354:
          pQVar8 = pQVar8 + 0x28;
          lVar9 = lVar9 + -0x28;
        } while (lVar9 != 0);
      }
      QArrayData::deallocate(pQVar7,0x28,8);
    }
  }
LAB_100d05370:
  puVar5 = PTR_shared_null_1021e1288;
  iVar2 = (int)*(undefined8 *)PTR_shared_null_1021e1288;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      iVar2 = (int)((ulong)*(undefined8 *)PTR_shared_null_1021e1288 >> 0x20);
    }
    else {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar5 != 0) {
        return;
      }
      iVar2 = *(int *)(puVar5 + 4);
    }
    lVar9 = (long)iVar2 * 0x28;
    if (lVar9 != 0) {
      puVar5 = puVar5 + *(long *)(puVar5 + 0x10);
      do {
        pQVar7 = *(QArrayData **)(puVar5 + 0x10);
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            UNLOCK();
            if (*(int *)pQVar7 != 0) goto LAB_100d053f0;
            pQVar7 = *(QArrayData **)(puVar5 + 0x10);
          }
          QArrayData::deallocate(pQVar7,2,8);
        }
LAB_100d053f0:
        pQVar7 = *(QArrayData **)(puVar5 + 8);
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            UNLOCK();
            if (*(int *)pQVar7 != 0) goto LAB_100d05420;
            pQVar7 = *(QArrayData **)(puVar5 + 8);
          }
          QArrayData::deallocate(pQVar7,2,8);
        }
LAB_100d05420:
        puVar5 = puVar5 + 0x28;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,0x28,8);
  }
  return;
}

