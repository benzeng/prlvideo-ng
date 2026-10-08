
void FUN_10063d010(CBaseDialog *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102222cc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102222eb0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102222f00;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x200);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10063d085;
      pQVar1 = *(QArrayData **)(param_1 + 0x200);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10063d085:
  pQVar1 = *(QArrayData **)(param_1 + 0x1f8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10063d0bb;
      pQVar1 = *(QArrayData **)(param_1 + 0x1f8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10063d0bb:
  CDownloadedKeyInfo::~CDownloadedKeyInfo((CDownloadedKeyInfo *)(param_1 + 0x108));
  CDownloadedKeyList::~CDownloadedKeyList((CDownloadedKeyList *)(param_1 + 0x68));
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

