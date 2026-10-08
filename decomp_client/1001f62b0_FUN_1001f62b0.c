
void FUN_1001f62b0(long *param_1,undefined8 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (param_3 == 2) {
    FUN_100df99c0("","prl_client_app",0,"Resolve collision by updating preferences.");
    CAbstractTask::clearSubTaskList();
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    *(undefined4 *)(param_1 + 9) = 2;
  }
  else {
    if (param_3 != 1) {
      *(undefined4 *)(param_1 + 9) = 3;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar1 = 0x80000275;
      goto LAB_1001f63a5;
    }
    FUN_100df99c0("","prl_client_app",0,"Resolve the collision by committing our changes");
    CAbstractTask::clearSubTaskList();
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    *(undefined4 *)(param_1 + 9) = 1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar1 = 0;
LAB_1001f63a5:
                    /* WARNING: Could not recover jumptable at 0x0001001f63ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

