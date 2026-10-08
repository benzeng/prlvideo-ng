
void FUN_100245ba0(void)

{
  void *pvVar1;
  
  if (DAT_102310920 == (void *)0x0) {
    pvVar1 = operator_new(0x50);
    FUN_1001d1080(pvVar1);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar1;
  }
  FUN_1001d12b0(DAT_102310920,0,1,0xffff);
  return;
}

