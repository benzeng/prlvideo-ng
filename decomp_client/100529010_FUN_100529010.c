
void FUN_100529010(void)

{
  undefined *puVar1;
  CAppUpdateLogic *this;
  
  puVar1 = PTR_m_instance_1021e1340;
  this = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
  if (this == (CAppUpdateLogic *)0x0) {
    this = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(this);
    *(CAppUpdateLogic **)puVar1 = this;
    DAT_102274b28 = 1;
  }
  CAppUpdateLogic::checkForUpdates(SUB81(this,0),false,false);
  return;
}

