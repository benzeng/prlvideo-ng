
void FUN_10067e2c0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  
  cVar4 = CContentModel::isBusy();
  if ((cVar4 != '\0') && (*(int *)(param_1 + 0x14c) == 1)) {
    if ((*(long *)(param_1 + 0x48) != 0) &&
       ((*(int *)(*(long *)(param_1 + 0x48) + 4) != 0 &&
        (plVar2 = *(long **)(param_1 + 0x50), plVar2 != (long *)0x0)))) {
      puVar1 = (undefined8 *)(param_1 + 0x48);
      (**(code **)(*plVar2 + 0x78))(plVar2,0x80000275);
      piVar3 = (int *)*puVar1;
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((*piVar3 == 0) && ((void *)*puVar1 != (void *)0x0)) {
          operator_delete((void *)*puVar1);
        }
        *(undefined8 *)(param_1 + 0x50) = 0;
        *puVar1 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
    CContentModel::setBusy(SUB81(param_1,0));
  }
  return;
}

