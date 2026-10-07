
void FUN_10046bd80(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  
  *param_1 = &PTR_FUN_100bc1590;
  puVar1 = param_1 + 5;
  pDVar6 = (Data *)param_1[5];
  if (*(int *)(pDVar6 + 8) < *(int *)(pDVar6 + 0xc)) {
    iVar4 = (*(int *)(pDVar6 + 0xc) + 1) - *(int *)(pDVar6 + 8);
    do {
      puVar3 = (undefined8 *)FUN_10046c8a0(puVar1,iVar4 + -2);
      pvVar2 = (void *)*puVar3;
      if (pvVar2 != (void *)0x0) {
        pQVar5 = *(QArrayData **)((long)pvVar2 + 8);
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            UNLOCK();
            if (*(int *)pQVar5 != 0) goto LAB_10046be03;
            pQVar5 = *(QArrayData **)((long)pvVar2 + 8);
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_10046be03:
        operator_delete(pvVar2);
      }
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
    pDVar6 = (Data *)*puVar1;
  }
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_10046be38;
      pDVar6 = (Data *)*puVar1;
    }
    QListData::dispose(pDVar6);
  }
LAB_10046be38:
  FUN_1004734b0(param_1);
  return;
}

