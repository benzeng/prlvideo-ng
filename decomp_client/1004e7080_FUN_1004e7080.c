
void FUN_1004e7080(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  Data *pDVar7;
  Data *pDVar8;
  long lVar9;
  
  pDVar4 = (Data *)*param_1;
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
      pDVar4 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar4 + 8);
    if (*(int *)(pDVar4 + 0xc) != iVar1) {
      pDVar5 = pDVar4 + (long)*(int *)(pDVar4 + 0xc) * 8 + 0x10;
      do {
        puVar3 = *(undefined8 **)(pDVar5 + -8);
        if (puVar3 != (undefined8 *)0x0) {
          pDVar8 = (Data *)puVar3[1];
          if (*(int *)pDVar8 != -1) {
            if (*(int *)pDVar8 != 0) {
              LOCK();
              *(int *)pDVar8 = *(int *)pDVar8 + -1;
              UNLOCK();
              if (*(int *)pDVar8 != 0) goto LAB_1004e7195;
              pDVar8 = (Data *)puVar3[1];
            }
            iVar2 = *(int *)(pDVar8 + 0xc);
            if (iVar2 != *(int *)(pDVar8 + 8)) {
              lVar9 = (long)*(int *)(pDVar8 + 8) * 8 + (long)iVar2 * -8;
              pDVar7 = pDVar8 + (long)iVar2 * 8 + 8;
              do {
                pQVar6 = *(QArrayData **)pDVar7;
                if (*(int *)pQVar6 == 0) {
LAB_1004e7170:
                  QArrayData::deallocate(pQVar6,2,8);
                }
                else if (*(int *)pQVar6 != -1) {
                  LOCK();
                  *(int *)pQVar6 = *(int *)pQVar6 + -1;
                  UNLOCK();
                  if (*(int *)pQVar6 == 0) {
                    pQVar6 = *(QArrayData **)pDVar7;
                    goto LAB_1004e7170;
                  }
                }
                pDVar7 = pDVar7 + -8;
                lVar9 = lVar9 + 8;
              } while (lVar9 != 0);
            }
            QListData::dispose(pDVar8);
          }
LAB_1004e7195:
          pQVar6 = (QArrayData *)*puVar3;
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              UNLOCK();
              if (*(int *)pQVar6 != 0) goto LAB_1004e71c3;
              pQVar6 = (QArrayData *)*puVar3;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_1004e71c3:
          operator_delete(puVar3);
        }
        pDVar5 = pDVar5 + -8;
      } while (pDVar5 != pDVar4 + (long)iVar1 * 8 + 0x10);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

