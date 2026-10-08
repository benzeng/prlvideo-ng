
void FUN_1002acfb0(long *param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)param_1[6];
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (param_1[7] != 0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = (void *)param_1[6], pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    param_1[7] = 0;
    param_1[6] = 0;
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  }
  return;
}

