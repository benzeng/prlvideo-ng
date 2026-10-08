
void FUN_100249e70(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -0x7ffffd8b) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if ((((iVar1 == 6) && (*(long *)(param_1 + 0x38) != 0)) &&
        (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) && (*(long *)(param_1 + 0x40) != 0)) {
      CSdkRequest::cancel();
    }
  }
  CAbstractTask::finish((int)param_1);
  return;
}

