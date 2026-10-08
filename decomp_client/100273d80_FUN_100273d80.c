
void FUN_100273d80(long *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  
  if (param_2 == -0x7ffffd8b) {
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (pvVar2 = (void *)param_1[5], pvVar2 != (void *)0x0)) {
        operator_delete(pvVar2);
      }
      param_1[6] = 0;
      param_1[5] = 0;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100273df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1);
  return;
}

