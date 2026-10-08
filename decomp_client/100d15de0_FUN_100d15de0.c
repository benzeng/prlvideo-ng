
void FUN_100d15de0(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *local_40;
  
  puVar2 = PTR_shared_null_1021e1288;
  if ((undefined *)*param_1 != PTR_shared_null_1021e1288) {
    iVar3 = (int)*(long *)PTR_shared_null_1021e1288;
    local_40 = puVar2;
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        if ((int)*(uint *)(PTR_shared_null_1021e1288 + 8) < 0) {
          local_40 = (undefined *)
                     QArrayData::allocate
                               (0x18,8,*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff,0);
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
          }
          local_40[0xb] = local_40[0xb] | 0x80;
          puVar9 = local_40;
        }
        else {
          local_40 = (undefined *)
                     QArrayData::allocate(0x18,8,*(long *)PTR_shared_null_1021e1288 >> 0x20,0);
          puVar9 = local_40;
          if (local_40 == (undefined *)0x0) {
            qBadAlloc();
            puVar9 = (undefined *)0x0;
          }
        }
        if ((*(uint *)(puVar9 + 8) & 0x7fffffff) != 0) {
          iVar3 = *(int *)(puVar2 + 4);
          if ((long)iVar3 * 0x18 != 0) {
            puVar4 = (undefined8 *)(puVar2 + *(long *)(puVar2 + 0x10));
            puVar11 = puVar4 + (long)iVar3 * 3;
            puVar8 = (undefined8 *)(puVar9 + *(long *)(puVar9 + 0x10));
            do {
              piVar1 = (int *)*puVar4;
              *puVar8 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar4 + 2);
              puVar8[1] = puVar4[1];
              puVar4 = puVar4 + 3;
              puVar8 = puVar8 + 3;
            } while (puVar4 != puVar11);
            iVar3 = *(int *)(puVar2 + 4);
            puVar9 = local_40;
          }
          *(int *)(puVar9 + 4) = iVar3;
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
        if (*(int *)pQVar7 != 0) goto LAB_100d15fab;
      }
      lVar10 = (long)*(int *)(pQVar7 + 4) * 0x18;
      if (lVar10 != 0) {
        pQVar5 = pQVar7 + *(long *)(pQVar7 + 0x10);
        do {
          pQVar6 = *(QArrayData **)pQVar5;
          if (*(int *)pQVar6 == 0) {
LAB_100d15f80:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 == 0) {
              pQVar6 = *(QArrayData **)pQVar5;
              goto LAB_100d15f80;
            }
          }
          pQVar5 = pQVar5 + 0x18;
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != 0);
      }
      QArrayData::deallocate(pQVar7,0x18,8);
    }
  }
LAB_100d15fab:
  puVar2 = PTR_shared_null_1021e1288;
  iVar3 = (int)*(undefined8 *)PTR_shared_null_1021e1288;
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      iVar3 = (int)((ulong)*(undefined8 *)PTR_shared_null_1021e1288 >> 0x20);
    }
    else {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      iVar3 = *(int *)(puVar2 + 4);
    }
    lVar10 = (long)iVar3 * 0x18;
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(puVar2 + *(long *)(puVar2 + 0x10));
      do {
        pQVar7 = (QArrayData *)*puVar11;
        if (*(int *)pQVar7 == 0) {
LAB_100d16010:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          UNLOCK();
          if (*(int *)pQVar7 == 0) {
            pQVar7 = (QArrayData *)*puVar11;
            goto LAB_100d16010;
          }
        }
        puVar11 = puVar11 + 3;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != 0);
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,0x18,8);
  }
  return;
}

