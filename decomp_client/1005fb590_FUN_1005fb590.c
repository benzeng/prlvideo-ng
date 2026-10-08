
void FUN_1005fb590(QObject *param_1)

{
  int iVar1;
  long *plVar2;
  Data *pDVar3;
  long lVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f4c20;
  lVar4 = *(long *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar4 + 8);
  if (iVar1 != *(int *)(lVar4 + 0xc)) {
    plVar2 = (long *)(lVar4 + 0x10 + (long)iVar1 * 8);
    lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x20))();
      }
      plVar2 = plVar2 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_1005e7870(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  pDVar3 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_1005fb632;
      pDVar3 = *(Data **)(param_1 + 0x18);
    }
    QListData::dispose(pDVar3);
  }
LAB_1005fb632:
  QObject::~QObject(param_1);
  return;
}

