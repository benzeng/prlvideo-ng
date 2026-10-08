
void FUN_100636a10(CBaseDialog *param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  Data *pDVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_102222420;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102222610;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102222660;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  pDVar5 = *(Data **)(param_1 + 0x70);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_100636ae1;
      pDVar5 = *(Data **)(param_1 + 0x70);
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar4 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100636ac0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_100636ac0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100636ae1:
  pQVar3 = *(QArrayData **)(param_1 + 0x68);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100636b11;
      pQVar3 = *(QArrayData **)(param_1 + 0x68);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100636b11:
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

