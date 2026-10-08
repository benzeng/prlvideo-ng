
void FUN_1002c0440(long *param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001002c046b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000015);
    return;
  }
  return;
}

