
void FUN_10072ce50(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    pvVar2 = *(void **)(param_3 + -8);
    if (pvVar2 != (void *)0x0) {
      piVar3 = *(int **)((long)pvVar2 + 8);
      if (piVar3 != (int *)0x0) {
        LOCK();
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(piVar3 + 2))(piVar3);
        }
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          operator_delete(piVar3);
        }
      }
      operator_delete(pvVar2);
    }
  }
  return;
}

