
void FUN_1002125d0(long *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 != 0x3b08)) {
    CAbstractTask::prependSubTask((int)param_1);
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  iVar1 = -0x7ffffff7;
  if (param_2 != 0x3b08) {
    iVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000100212622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,iVar1);
  return;
}

