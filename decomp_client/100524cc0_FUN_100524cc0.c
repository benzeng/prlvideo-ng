
void FUN_100524cc0(undefined8 param_1,Data *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  Data *pDVar7;
  long lVar8;
  
  iVar1 = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 0xc) != iVar1) {
    pDVar4 = param_2 + (long)*(int *)(param_2 + 0xc) * 8 + 0x10;
    do {
      puVar3 = *(undefined8 **)(pDVar4 + -8);
      if (puVar3 != (undefined8 *)0x0) {
        pDVar7 = (Data *)puVar3[1];
        if (*(int *)pDVar7 != -1) {
          if (*(int *)pDVar7 != 0) {
            LOCK();
            *(int *)pDVar7 = *(int *)pDVar7 + -1;
            UNLOCK();
            if (*(int *)pDVar7 != 0) goto LAB_100524db5;
            pDVar7 = (Data *)puVar3[1];
          }
          iVar2 = *(int *)(pDVar7 + 0xc);
          if (iVar2 != *(int *)(pDVar7 + 8)) {
            lVar8 = (long)*(int *)(pDVar7 + 8) * 8 + (long)iVar2 * -8;
            pDVar6 = pDVar7 + (long)iVar2 * 8 + 8;
            do {
              pQVar5 = *(QArrayData **)pDVar6;
              if (*(int *)pQVar5 == 0) {
LAB_100524d90:
                QArrayData::deallocate(pQVar5,2,8);
              }
              else if (*(int *)pQVar5 != -1) {
                LOCK();
                *(int *)pQVar5 = *(int *)pQVar5 + -1;
                UNLOCK();
                if (*(int *)pQVar5 == 0) {
                  pQVar5 = *(QArrayData **)pDVar6;
                  goto LAB_100524d90;
                }
              }
              pDVar6 = pDVar6 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar7);
        }
LAB_100524db5:
        pQVar5 = (QArrayData *)*puVar3;
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            UNLOCK();
            if (*(int *)pQVar5 != 0) goto LAB_100524de3;
            pQVar5 = (QArrayData *)*puVar3;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_100524de3:
        operator_delete(puVar3);
      }
      pDVar4 = pDVar4 + -8;
    } while (pDVar4 != param_2 + (long)iVar1 * 8 + 0x10);
  }
  QListData::dispose(param_2);
  return;
}

