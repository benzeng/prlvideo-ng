
void FUN_1002eef80(long *param_1,int param_2)

{
  undefined *puVar1;
  CAppUpdateLogic *this;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  puVar1 = PTR_m_instance_1021e1340;
  if (param_2 == -0x7ffffd8b) {
    this = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
    if (this == (CAppUpdateLogic *)0x0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar1 = this;
      DAT_102274b28 = 1;
    }
    CAppUpdateLogic::setOnAppStart(SUB81(this,0));
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0x80000275;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0x80000013;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eeffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

