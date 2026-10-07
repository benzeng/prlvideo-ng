
void FUN_10005f8d0(undefined8 param_1,Data *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar6 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar3 = param_2 + (long)iVar1 * 8 + 8;
    do {
      puVar2 = *(undefined8 **)pDVar3;
      if (puVar2 != (undefined8 *)0x0) {
        pDVar4 = (Data *)puVar2[2];
        if (*(int *)pDVar4 != -1) {
          if (*(int *)pDVar4 != 0) {
            LOCK();
            *(int *)pDVar4 = *(int *)pDVar4 + -1;
            UNLOCK();
            if (*(int *)pDVar4 != 0) goto LAB_10005f93e;
            pDVar4 = (Data *)puVar2[2];
          }
          QListData::dispose(pDVar4);
        }
LAB_10005f93e:
        pQVar5 = (QArrayData *)*puVar2;
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            UNLOCK();
            if (*(int *)pQVar5 != 0) goto LAB_10005f96c;
            pQVar5 = (QArrayData *)*puVar2;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_10005f96c:
        operator_delete(puVar2);
      }
      pDVar3 = pDVar3 + -8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0);
  }
  QListData::dispose(param_2);
  return;
}

