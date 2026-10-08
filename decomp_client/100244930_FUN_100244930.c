
void FUN_100244930(long *param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 7) {
                    /* WARNING: Could not recover jumptable at 0x000100244958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  return;
}

