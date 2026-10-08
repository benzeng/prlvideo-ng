
void FUN_100210110(undefined8 param_1,Data *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  Data *pDVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != *(int *)(param_2 + 8)) {
    lVar6 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar2 * -8;
    pDVar5 = param_2 + (long)iVar2 * 8 + 8;
    do {
      pvVar3 = *(void **)pDVar5;
      if (pvVar3 != (void *)0x0) {
        piVar4 = *(int **)((long)pvVar3 + 8);
        if (piVar4 != (int *)0x0) {
          LOCK();
          piVar1 = piVar4 + 1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(piVar4 + 2))(piVar4);
          }
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            operator_delete(piVar4);
          }
        }
        operator_delete(pvVar3);
      }
      pDVar5 = pDVar5 + -8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0);
  }
  QListData::dispose(param_2);
  return;
}

