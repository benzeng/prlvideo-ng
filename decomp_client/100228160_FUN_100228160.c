
void FUN_100228160(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: VM instance is invalid.");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 4) {
    return;
  }
  iVar2 = CAbstractTask::state();
  if (iVar2 == 3) {
    return;
  }
  if (param_2 == -0x7ffffefc) {
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    cVar1 = FUN_10018dbd0(lVar3,0xe);
    if (cVar1 == '\0') goto LAB_10022820e;
    FUN_100228280(param_1);
  }
  else {
LAB_10022820e:
    if ((param_2 < 0) && (param_2 != -0x7ffffdc7)) {
      lVar3 = 0;
      if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar3 = param_1[4];
      }
      cVar1 = FUN_10018dbd0(lVar3,0xe);
      if (cVar1 != '\0') {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
        goto LAB_10022826f;
      }
    }
    CAbstractTask::removeSubTask((int)param_1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  param_2 = 0;
LAB_10022826f:
                    /* WARNING: Could not recover jumptable at 0x000100228273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

