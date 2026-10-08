
void FUN_1002acdf0(long *param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to update the proxy credentials");
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ace30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

