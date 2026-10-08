
void FUN_1001b93e0(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  CScreenSaverBlocker *this;
  
  puVar1 = PTR_m_instance_1021e1420;
  this = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
  if (this == (CScreenSaverBlocker *)0x0) {
    this = operator_new(0x18);
    CScreenSaverBlocker::CScreenSaverBlocker(this);
    *(CScreenSaverBlocker **)puVar1 = this;
    DAT_10226c8a0 = 1;
  }
  if (param_2 != '\0') {
    CScreenSaverBlocker::addBlocker();
    return;
  }
  CScreenSaverBlocker::removeBlocker(this,2);
  return;
}

