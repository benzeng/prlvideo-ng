
void FUN_1001ce360(void)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (DAT_102312171 == '\x01') {
    FUN_100df99c0("","prl_client_app",0,"Application is finalized already");
    return;
  }
  DAT_102312171 = 1;
  cVar1 = QCoreApplication::closingDown();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001d50a0();
    FUN_100ae8bd0(uVar2);
  }
  if (DAT_102310920 == (long *)0x0) {
    plVar3 = operator_new(0x50);
    FUN_1001d1080(plVar3);
    DAT_10226c778 = 1;
    DAT_102310920 = plVar3;
  }
  FUN_1001d1f10(DAT_102310920);
  if (DAT_102310920 != (long *)0x0) {
    (**(code **)(*DAT_102310920 + 0x20))();
  }
  DAT_102310920 = (long *)0x0;
  return;
}

