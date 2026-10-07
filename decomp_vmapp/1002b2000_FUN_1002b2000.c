
void * FUN_1002b2000(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = operator_new(0xd0,(nothrow_t *)PTR_nothrow_100ba21c8);
  pvVar2 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_1002b2bd0(pvVar1);
    pvVar2 = pvVar1;
  }
  return pvVar2;
}

