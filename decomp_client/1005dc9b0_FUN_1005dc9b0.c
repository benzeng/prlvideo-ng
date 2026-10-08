
void FUN_1005dc9b0(void)

{
  void *pvVar1;
  
  if (DAT_1023109c0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_10076b480(pvVar1);
    DAT_102271418 = 1;
    DAT_1023109c0 = pvVar1;
  }
  FUN_10076b4e0(DAT_1023109c0);
  return;
}

