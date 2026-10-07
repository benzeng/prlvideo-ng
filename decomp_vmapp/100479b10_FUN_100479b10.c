
void FUN_100479b10(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    puVar1 = *(undefined8 **)(param_3 + -8);
    if (puVar1 != (undefined8 *)0x0) {
      piVar2 = (int *)*puVar1;
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (pvVar3 = (void *)*puVar1, pvVar3 != (void *)0x0)) {
          FUN_100031ed0(pvVar3);
          operator_delete(pvVar3);
        }
      }
      operator_delete(puVar1);
    }
  }
  return;
}

