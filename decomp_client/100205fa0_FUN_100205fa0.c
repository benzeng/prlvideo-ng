
void FUN_100205fa0(long *param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000100205fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
    return;
  }
  if (param_1[0xc] != 0) {
    CSdkRequest::cancel();
    return;
  }
  return;
}

