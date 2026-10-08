
undefined8 FUN_10022aed0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined8 *)(param_1 + 0x68);
    if ((piVar2[1] != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      FUN_10072a120();
      piVar2 = (int *)*puVar1;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
    }
    if ((piVar2[1] != 0) && (*(long **)(param_1 + 0x70) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
      piVar2 = (int *)*puVar1;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && ((void *)*puVar1 != (void *)0x0)) {
      operator_delete((void *)*puVar1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *puVar1 = 0;
  }
  return 0;
}

