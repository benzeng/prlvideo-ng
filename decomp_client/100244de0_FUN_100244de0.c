
void FUN_100244de0(long *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  *(undefined1 *)((long)param_1 + 0x4c) = 1;
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 3) {
    return;
  }
  uVar2 = CAbstractTask::getCurrentSubTask();
  if (uVar2 < 8) {
    pcVar3 = (&PTR_s_Prepare_1021ef300)[(int)uVar2];
  }
  else {
    pcVar3 = "Unknown";
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                pcVar3);
                    /* WARNING: Could not recover jumptable at 0x000100244e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}

