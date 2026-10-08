
void FUN_1001ef810(long *param_1,int param_2)

{
  long lVar1;
  
  if (-1 < param_2) {
    lVar1 = 0;
    if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar1 = param_1[4];
    }
    FUN_1001902d0(lVar1,1);
    CAbstractTask::removeSubTask((int)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ef860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

