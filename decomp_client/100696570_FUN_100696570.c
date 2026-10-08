
void FUN_100696570(void)

{
  undefined *puVar1;
  CAppUpdateLogic *this;
  void *pvVar2;
  
  puVar1 = PTR_m_instance_1021e1340;
  this = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
  if (this == (CAppUpdateLogic *)0x0) {
    this = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(this);
    *(CAppUpdateLogic **)puVar1 = this;
    DAT_102274b28 = 1;
  }
  if (DAT_102310990 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006ea620(pvVar2);
    DAT_102273501 = 1;
    DAT_102310990 = pvVar2;
  }
  FUN_1006ea6f0(DAT_102310990);
  CAppUpdateLogic::checkForUpdates(SUB81(this,0),false,false);
  return;
}

