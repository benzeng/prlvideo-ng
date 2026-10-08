
void * FUN_100b8f730(void)

{
  void *pvVar1;
  
  if (DAT_1023142a8 == (void *)0x0) {
    pvVar1 = operator_new(8);
    FUN_100b8f590(pvVar1);
    DAT_1023142a8 = pvVar1;
  }
  return DAT_1023142a8;
}

