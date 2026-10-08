
void FUN_1005b82f0(long param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x38) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x38) = param_2;
  if ((param_2 == 0) && (piVar2 = *(int **)(param_1 + 0x40), piVar2 != (int *)0x0)) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    if ((piVar2[1] != 0) && (*(long **)(param_1 + 0x48) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
      piVar2 = (int *)*puVar1;
      if (piVar2 == (int *)0x0) goto LAB_1005b835e;
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && ((void *)*puVar1 != (void *)0x0)) {
      operator_delete((void *)*puVar1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *puVar1 = 0;
  }
LAB_1005b835e:
  FUN_100840290(param_1,*(undefined4 *)(param_1 + 0x38));
  return;
}

