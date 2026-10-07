
void FUN_10046c2a0(long param_1,long param_2,QString *param_3)

{
  int *piVar1;
  QString *pQVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  bool bVar9;
  char cVar10;
  undefined8 *puVar11;
  Data *pDVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  QTypedArrayData<unsigned_short> *pQVar16;
  
  iVar4 = *(int *)(*(long *)(param_1 + 0x28) + 0xc);
  piVar1 = (int *)(*(long *)(param_1 + 0x28) + 8);
  iVar15 = iVar4 - *piVar1;
  if (iVar15 != 0 && *piVar1 <= iVar4) {
    plVar3 = (long *)(param_1 + 0x28);
    do {
      iVar4 = iVar15 + -1;
      puVar11 = (undefined8 *)FUN_10046c8a0(plVar3,iVar4);
      plVar6 = (long *)*puVar11;
      if (*plVar6 == param_2) {
        pQVar2 = (QString *)(plVar6 + 1);
        cVar10 = operator==(pQVar2,param_3);
        if (cVar10 != '\0') {
          if (0 < iVar15) {
            puVar7 = (uint *)*plVar3;
            uVar5 = puVar7[2];
            if (iVar4 < (int)(puVar7[3] - uVar5)) {
              if (1 < *puVar7) {
                pDVar12 = (Data *)QListData::detach((int)plVar3);
                lVar8 = *plVar3;
                lVar13 = (long)*(int *)(lVar8 + 8);
                if ((puVar7 + (long)(int)uVar5 * 2 != (uint *)(lVar8 + lVar13 * 8)) &&
                   (lVar14 = *(int *)(lVar8 + 0xc) - lVar13,
                   lVar14 != 0 && lVar13 <= *(int *)(lVar8 + 0xc))) {
                  _memcpy((void *)(lVar8 + 0x10 + lVar13 * 8),puVar7 + (long)(int)uVar5 * 2 + 4,
                          lVar14 * 8);
                }
                if (*(int *)pDVar12 != -1) {
                  if (*(int *)pDVar12 != 0) {
                    LOCK();
                    *(int *)pDVar12 = *(int *)pDVar12 + -1;
                    UNLOCK();
                    if (*(int *)pDVar12 != 0) goto LAB_10046c3b0;
                  }
                  QListData::dispose(pDVar12);
                }
              }
LAB_10046c3b0:
              QListData::remove((int)plVar3);
            }
          }
          if (plVar6 == (long *)0x0) {
            return;
          }
          pQVar16 = pQVar2->field0_0x0;
          if (*(int *)pQVar16 != -1) {
            if (*(int *)pQVar16 != 0) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              UNLOCK();
              if (*(int *)pQVar16 != 0) goto LAB_10046c3ef;
              pQVar16 = pQVar2->field0_0x0;
            }
            QArrayData::deallocate((QArrayData *)pQVar16,2,8);
          }
LAB_10046c3ef:
          operator_delete(plVar6);
          return;
        }
      }
      bVar9 = 1 < iVar15;
      iVar15 = iVar4;
    } while (bVar9);
  }
  return;
}

