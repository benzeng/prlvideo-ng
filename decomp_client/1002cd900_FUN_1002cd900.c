
void FUN_1002cd900(long *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  if ((iVar2 != 1) && (iVar2 = CAbstractTask::getCurrentSubTask(), iVar2 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002cd944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000015);
  return;
}

