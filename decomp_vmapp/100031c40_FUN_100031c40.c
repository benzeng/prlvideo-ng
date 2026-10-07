
void FUN_100031c40(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  
  piVar3 = operator_new(0x70);
  FUN_100031cc0(piVar3,*param_1);
  LOCK();
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  piVar1 = (int *)*param_1;
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) && (pvVar2 = (void *)*param_1, pvVar2 != (void *)0x0)) {
    FUN_100031ed0(pvVar2);
    operator_delete(pvVar2);
  }
  *param_1 = piVar3;
  return;
}

