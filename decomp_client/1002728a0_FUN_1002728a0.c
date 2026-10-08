
void FUN_1002728a0(long *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 9) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0001002728d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,param_3);
      return;
    }
  }
  return;
}

