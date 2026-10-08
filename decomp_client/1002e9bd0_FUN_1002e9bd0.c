
void FUN_1002e9bd0(long *param_1,int param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_2 == 0x36ed) {
    if (param_3 == 1) {
      CAbstractTask::insertBeforeSubTask((int)param_1,3);
      CAbstractTask::insertBeforeSubTask((int)param_1,2);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0x80000275;
    if (param_3 != 2) {
      uVar1 = 0;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0x80000275;
    if (param_3 == 1) {
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002e9c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

