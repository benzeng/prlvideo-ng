
void * FUN_100463b90(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(int *)(*param_1 + 4) == 0) {
    pvVar1 = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar2 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_100463e90(pvVar1,param_1);
      pvVar2 = pvVar1;
    }
  }
  else {
    pvVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar2 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_100464a00(pvVar1,param_1);
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}

