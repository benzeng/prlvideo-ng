
void FUN_1001d3710(long param_1)

{
  void *pvVar1;
  
  FUN_1001d37b0();
  QObject::installEventFilter(*(QObject **)PTR_self_1021e1388);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  FUN_1001a6390(DAT_1023108e0,*(undefined8 *)(param_1 + 0x10),
                "2appUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",
                "2appUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",0);
  FUN_1001d3dc0(param_1,0);
  return;
}

