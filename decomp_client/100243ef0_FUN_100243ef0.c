
void FUN_100243ef0(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  FUN_100df99c0("","prl_client_app",0,"VM upgrade timed out - showing warning.");
  FUN_1002425c0(param_1,0x18a8e);
  uVar1 = CAbstractTask::getCurrentSubTask();
  if (uVar1 < 8) {
    pcVar2 = (&PTR_s_Prepare_1021ef300)[(int)uVar1];
  }
  else {
    pcVar2 = "Unknown";
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                pcVar2);
                    /* WARNING: Could not recover jumptable at 0x000100243f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}

