
void FUN_100a3f590(undefined8 param_1,Data *param_2)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  int *piVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar5 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar3 = param_2 + (long)iVar1 * 8 + 8;
    do {
      pvVar2 = *(void **)pDVar3;
      if (pvVar2 != (void *)0x0) {
        piVar4 = *(int **)((long)pvVar2 + 8);
        if (*piVar4 != -1) {
          if (*piVar4 != 0) {
            LOCK();
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 != 0) goto LAB_100a3f601;
            piVar4 = *(int **)((long)pvVar2 + 8);
          }
          FUN_100a3fda0((undefined8 *)((long)pvVar2 + 8),piVar4);
        }
LAB_100a3f601:
        operator_delete(pvVar2);
      }
      pDVar3 = pDVar3 + -8;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
  }
  QListData::dispose(param_2);
  return;
}

