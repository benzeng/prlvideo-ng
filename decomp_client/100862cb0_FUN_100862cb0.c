
void FUN_100862cb0(QAbstractAnimation *param_1)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_10222d700;
  pDVar4 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_100862d33;
      pDVar4 = *(Data **)(param_1 + 0x10);
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar3 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        if (*(long **)pDVar2 != (long *)0x0) {
          (**(code **)(**(long **)pDVar2 + 8))();
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_100862d33:
  QAbstractAnimation::~QAbstractAnimation(param_1);
  return;
}

