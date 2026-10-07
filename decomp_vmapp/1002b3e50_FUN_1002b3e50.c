
long FUN_1002b3e50(void)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x106d0,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar1 == (void *)0x0) {
    lVar2 = 0;
  }
  else {
    FUN_1002b4780(pvVar1);
    lVar2 = (long)pvVar1 + 0x10;
  }
  return lVar2;
}

