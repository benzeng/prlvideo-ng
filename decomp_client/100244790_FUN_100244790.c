
void FUN_100244790(long *param_1)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  char *pcVar4;
  
  *(undefined1 *)((long)param_1 + 0x4d) = 1;
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar3 = 0;
  }
  else {
    uVar2 = CAbstractTask::getCurrentSubTask();
    if (uVar2 < 8) {
      pcVar4 = (&PTR_s_Prepare_1021ef300)[(int)uVar2];
    }
    else {
      pcVar4 = "Unknown";
    }
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                  pcVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
    uVar3 = 0x80000009;
  }
                    /* WARNING: Could not recover jumptable at 0x00010024480e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}

