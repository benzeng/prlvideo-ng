
void FUN_100751480(QObject *param_1)

{
  QObject *pQVar1;
  int iVar2;
  long *plVar3;
  Data *pDVar4;
  long lVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_1022283c0;
  pQVar1 = param_1 + 0x10;
  lVar5 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 != *(int *)(lVar5 + 0xc)) {
    plVar3 = (long *)(lVar5 + 0x10 + (long)iVar2 * 8);
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  FUN_1007545f0(pQVar1);
  pDVar4 = *(Data **)pQVar1;
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_100751517;
      pDVar4 = *(Data **)pQVar1;
    }
    QListData::dispose(pDVar4);
  }
LAB_100751517:
  QObject::~QObject(param_1);
  return;
}

