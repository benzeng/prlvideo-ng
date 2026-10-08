
void FUN_1001fb180(long *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 0) {
    return;
  }
  if ((((param_1[6] != 0) && (*(int *)(param_1[6] + 4) != 0)) && ((bool *)param_1[7] != (bool *)0x0)
      ) && (cVar1 = CSdkRequest::isCompleted((bool *)param_1[7],(int *)0x0), cVar1 == '\0')) {
    CSdkRequest::cancel();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001fb1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000015);
  return;
}

