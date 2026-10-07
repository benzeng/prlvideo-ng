
void FUN_100694a30(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_100694900(pvVar1);
  operator_delete(pvVar1);
  return;
}

