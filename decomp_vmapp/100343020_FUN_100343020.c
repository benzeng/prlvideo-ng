
void FUN_100343020(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  *param_1 = 0;
  return;
}

