
void FUN_1002eeef0(long *param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  CAppUpdateLogic *this;
  
  puVar1 = PTR_m_instance_1021e1340;
  if (param_3 != '\0') {
    return;
  }
  this = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
  if (this == (CAppUpdateLogic *)0x0) {
    this = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(this);
    *(CAppUpdateLogic **)puVar1 = this;
    DAT_102274b28 = 1;
  }
  CAppUpdateLogic::setOnAppStart(SUB81(this,0));
                    /* WARNING: Could not recover jumptable at 0x0001002eef5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

