
void FUN_1002d4c30(long *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = (void *)param_1[0xc], pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

