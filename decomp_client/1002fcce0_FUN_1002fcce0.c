
void FUN_1002fcce0(long *param_1,undefined8 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar2 = (int)param_1;
    CAbstractTask::removeSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    CAbstractTask::prependSubTask(iVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0x80000275;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002fcd3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

