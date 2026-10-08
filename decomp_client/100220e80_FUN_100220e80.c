
void FUN_100220e80(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  iVar2 = 0;
  if (iVar1 != 0xe) {
    iVar2 = param_2;
  }
  if (iVar2 < 0) {
    if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
       (lVar3 = *(long *)(param_1 + 0x20), lVar3 == 0)) goto LAB_100220eea;
  }
  else {
    iVar2 = CAbstractTask::getCurrentSubTask();
    if (((iVar2 == 6) || (*(long *)(param_1 + 0x18) == 0)) ||
       ((*(int *)(*(long *)(param_1 + 0x18) + 4) == 0 ||
        (lVar3 = *(long *)(param_1 + 0x20), lVar3 == 0)))) goto LAB_100220eea;
    iVar2 = 0;
  }
  FUN_10018edb0(lVar3,iVar2);
LAB_100220eea:
  CAbstractTask::subTaskCompleted((int)param_1);
  return;
}

