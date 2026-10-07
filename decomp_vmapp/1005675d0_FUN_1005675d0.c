
void FUN_1005675d0(undefined8 param_1,Data *param_2)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar5 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar3 = param_2 + (long)iVar1 * 8 + 8;
    do {
      pvVar2 = *(void **)pDVar3;
      if (pvVar2 != (void *)0x0) {
        pQVar4 = *(QArrayData **)((long)pvVar2 + 0x18);
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            UNLOCK();
            if (*(int *)pQVar4 != 0) goto LAB_100567648;
            pQVar4 = *(QArrayData **)((long)pvVar2 + 0x18);
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_100567648:
        operator_delete(pvVar2);
      }
      pDVar3 = pDVar3 + -8;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
  }
  QListData::dispose(param_2);
  return;
}

