
void FUN_100272550(undefined8 param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
  pvVar2 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_100272760(pvVar1,param_1);
    pvVar2 = pvVar1;
  }
  DAT_1011c3800 = pvVar2;
  return;
}

