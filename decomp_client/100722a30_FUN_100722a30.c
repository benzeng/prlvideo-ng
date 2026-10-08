
void FUN_100722a30(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1021f5d38;
  if ((((param_1[1] != 0) && (*(int *)(param_1[1] + 4) != 0)) && ((long *)param_1[2] != (long *)0x0)
      ) && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[2] + 0xf8))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x60))();
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[1] != (void *)0x0)) {
      operator_delete((void *)param_1[1]);
    }
  }
  return;
}

