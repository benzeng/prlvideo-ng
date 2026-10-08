
void FUN_100271360(long *param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  void *pvVar3;
  CAppUpdateLogic *this;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  
  if (param_2 == -0x7ffffd8b) {
    cVar2 = FUN_100d80680();
    if (cVar2 != '\0') {
      if (DAT_102310930 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001e5440(pvVar3);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar3;
      }
      FUN_1001e5610(DAT_102310930,5,0);
    }
    puVar1 = PTR_m_instance_1021e1340;
    this = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
    if (this == (CAppUpdateLogic *)0x0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar1 = this;
      DAT_102274b28 = 1;
    }
    CAppUpdateLogic::setOnAppStart(SUB81(this,0));
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar4 = 0x3bfa;
  }
  else {
    CAbstractTask::clearSubTaskList();
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100271429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
  return;
}

