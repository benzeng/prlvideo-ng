
void FUN_1006a0080(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_10069ffa0(pvVar1);
  operator_delete(pvVar1);
  return;
}

