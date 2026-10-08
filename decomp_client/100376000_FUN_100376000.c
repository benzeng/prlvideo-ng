
void FUN_100376000(undefined8 param_1,Data *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  Data *pDVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar5 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar4 = param_2 + (long)iVar1 * 8 + 8;
    do {
      puVar2 = *(undefined8 **)pDVar4;
      if (puVar2 != (undefined8 *)0x0) {
        piVar3 = (int *)*puVar2;
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if ((*piVar3 == 0) && ((void *)*puVar2 != (void *)0x0)) {
            operator_delete((void *)*puVar2);
          }
        }
        operator_delete(puVar2);
      }
      pDVar4 = pDVar4 + -8;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
  }
  QListData::dispose(param_2);
  return;
}

