
void FUN_10007f3d0(QObject *param_1)

{
  QObject *pQVar1;
  int iVar2;
  long *plVar3;
  Data *pDVar4;
  long lVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_1021eda90;
  pQVar1 = param_1 + 0x20;
  lVar5 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 != *(int *)(lVar5 + 0xc)) {
    plVar3 = (long *)(lVar5 + 0x10 + (long)iVar2 * 8);
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x20))();
      }
      plVar3 = plVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  FUN_100080ef0(pQVar1);
  pDVar4 = *(Data **)pQVar1;
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_10007f467;
      pDVar4 = *(Data **)pQVar1;
    }
    QListData::dispose(pDVar4);
  }
LAB_10007f467:
  QObject::~QObject(param_1);
  return;
}

