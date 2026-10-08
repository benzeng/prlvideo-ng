
void FUN_1006aad60(void)

{
  void *pvVar1;
  
  if (DAT_1023109d0 == (void *)0x0) {
    pvVar1 = operator_new(0x40);
    FUN_10077f120(pvVar1);
    DAT_102273500 = 1;
    DAT_1023109d0 = pvVar1;
  }
  FUN_1007817c0(DAT_1023109d0);
  return;
}

