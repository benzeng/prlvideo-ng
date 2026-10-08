
void FUN_10098a430(undefined8 param_1,Data *param_2)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  Data *pDVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar5 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar3 = param_2 + (long)iVar1 * 8 + 8;
    do {
      pvVar2 = *(void **)pDVar3;
      if (pvVar2 != (void *)0x0) {
        *(undefined ***)((long)pvVar2 + 8) = &PTR_FUN_10227dad8;
        *(undefined ***)((long)pvVar2 + 0x10) = &PTR_FUN_10227db30;
        pDVar4 = *(Data **)((long)pvVar2 + 0x18);
        if (*(int *)pDVar4 != -1) {
          if (*(int *)pDVar4 != 0) {
            LOCK();
            *(int *)pDVar4 = *(int *)pDVar4 + -1;
            UNLOCK();
            if (*(int *)pDVar4 != 0) goto LAB_10098a4ba;
            pDVar4 = *(Data **)((long)pvVar2 + 0x18);
          }
          QListData::dispose(pDVar4);
        }
LAB_10098a4ba:
        operator_delete(pvVar2);
      }
      pDVar3 = pDVar3 + -8;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
  }
  QListData::dispose(param_2);
  return;
}

