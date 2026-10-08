
void FUN_1002a5390(long *param_1,undefined8 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_3 == 1) {
    CAbstractTask::prependSubTask((int)param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar1 = 0x80000275;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a53d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

