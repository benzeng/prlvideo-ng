
void FUN_10005aca0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  if ((3 < *param_1 - 4U) || ((0xbU >> ((byte)(*param_1 - 4U) & 0xf) & 1) == 0)) goto LAB_10005adb9;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    pDVar6 = (Data *)*puVar2;
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_10005ad71;
        pDVar6 = (Data *)*puVar2;
      }
      iVar1 = *(int *)(pDVar6 + 0xc);
      if (iVar1 != *(int *)(pDVar6 + 8)) {
        lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = pDVar6 + (long)iVar1 * 8 + 8;
        do {
          pQVar4 = *(QArrayData **)pDVar3;
          if (*(int *)pQVar4 == 0) {
LAB_10005ad50:
            QArrayData::deallocate(pQVar4,2,8);
          }
          else if (*(int *)pQVar4 != -1) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            UNLOCK();
            if (*(int *)pQVar4 == 0) {
              pQVar4 = *(QArrayData **)pDVar3;
              goto LAB_10005ad50;
            }
          }
          pDVar3 = pDVar3 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar6);
    }
LAB_10005ad71:
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)(param_1 + 6);
  if (puVar2 == (undefined8 *)0x0) goto LAB_10005adb9;
  pQVar4 = (QArrayData *)*puVar2;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10005adb1;
      pQVar4 = (QArrayData *)*puVar2;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10005adb1:
  operator_delete(puVar2);
LAB_10005adb9:
  ___bzero(param_1,0x838);
  return;
}

