
void FUN_100d2eb80(long *param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    if (*(long **)((long)pvVar1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar1 + 0x10) + 8))();
    }
    operator_delete(pvVar1);
  }
  param_1[4] = 0;
                    /* WARNING: Could not recover jumptable at 0x000100d2ebc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

