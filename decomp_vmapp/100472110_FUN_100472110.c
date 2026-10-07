
void FUN_100472110(undefined8 param_1,Data *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *pvVar4;
  Data *pDVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar6 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar5 = param_2 + (long)iVar1 * 8 + 8;
    do {
      puVar2 = *(undefined8 **)pDVar5;
      if (puVar2 != (undefined8 *)0x0) {
        piVar3 = (int *)*puVar2;
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if ((*piVar3 == 0) && (pvVar4 = (void *)*puVar2, pvVar4 != (void *)0x0)) {
            FUN_100031ed0(pvVar4);
            operator_delete(pvVar4);
          }
        }
        operator_delete(puVar2);
      }
      pDVar5 = pDVar5 + -8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0);
  }
  QListData::dispose(param_2);
  return;
}

