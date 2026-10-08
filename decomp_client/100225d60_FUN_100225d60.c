
void FUN_100225d60(long param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if ((((iVar2 == 2) && (*(long *)(param_1 + 0x48) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) && (*(long *)(param_1 + 0x50) != 0)) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100225da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x50) + 0x80))();
      return;
    }
  }
  return;
}

