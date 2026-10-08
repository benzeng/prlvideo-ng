
void FUN_100221330(long *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CAbstractTask::state();
  if (iVar1 != 3) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 6) {
      if ((param_2 == 0x30000005) && ((param_3 == 0x30000009 || (param_3 == 0x30000010)))) {
        CAbstractTask::appendSubTask((int)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010022139b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xb0))(param_1,0);
        return;
      }
      FUN_10024b6f0(param_1,param_2,param_3);
      return;
    }
  }
  return;
}

