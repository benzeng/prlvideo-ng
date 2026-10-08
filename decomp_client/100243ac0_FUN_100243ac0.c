
void FUN_100243ac0(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  if (uVar1 < 8) {
    pcVar2 = (&PTR_s_Prepare_1021ef300)[(int)uVar1];
  }
  else {
    pcVar2 = "Unknown";
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                pcVar2);
                    /* WARNING: Could not recover jumptable at 0x000100243b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}

