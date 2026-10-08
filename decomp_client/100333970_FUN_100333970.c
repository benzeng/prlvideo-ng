
void FUN_100333970(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  
  *param_1 = &PTR_FUN_1022736c0;
  param_1[2] = &PTR_FUN_1022736f0;
  pDVar4 = (Data *)param_1[0xd];
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1003339ff;
      pDVar4 = (Data *)param_1[0xd];
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar3 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1003339ff:
  *param_1 = &PTR_FUN_102273798;
  param_1[2] = &PTR_FUN_1022737c8;
  QImage::~QImage((QImage *)(param_1 + 4));
  FUN_1002932e0(param_1);
  return;
}

