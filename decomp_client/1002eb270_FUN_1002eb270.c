
void FUN_1002eb270(long *param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001002eb298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,0x80015339);
    return;
  }
  return;
}

