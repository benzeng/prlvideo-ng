
void FUN_10021c4d0(long param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if ((((iVar2 == 8) && (*(long *)(param_1 + 0x68) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) && (*(long *)(param_1 + 0x70) != 0)) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010021c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x70) + 0x80))();
      return;
    }
  }
  return;
}

