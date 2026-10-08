
void FUN_1001d5260(long param_1)

{
  void *pvVar1;
  
  FUN_100df99c0("","prl_client_app",0,"Application is about to quit...");
  FUN_100066ab0(*(undefined8 *)(param_1 + 0x28),1);
  if (DAT_102310920 == (void *)0x0) {
    pvVar1 = operator_new(0x50);
    FUN_1001d1080(pvVar1);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar1;
  }
  QCoreApplication::exit(*(int *)((long)DAT_102310920 + 0x10));
  return;
}

