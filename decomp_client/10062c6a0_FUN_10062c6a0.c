
void FUN_10062c6a0(long *param_1)

{
  char cVar1;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  CAbstractTask::prependSubTask((int)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010062c6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

