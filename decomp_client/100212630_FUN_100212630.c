
void FUN_100212630(long *param_1,undefined8 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_3 == 2) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",1,"Resolve the collision by applying user configuration");
    }
    CAbstractTask::clearSubTaskList();
  }
  else {
    if (param_3 != 1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar1 = 0x80000275;
      goto LAB_1002126e3;
    }
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",1,"Resolve the collision by committing our configuration");
    }
  }
  CAbstractTask::prependSubTask((int)param_1);
  CAbstractTask::prependSubTask((int)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar1 = 0;
LAB_1002126e3:
                    /* WARNING: Could not recover jumptable at 0x0001002126ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

