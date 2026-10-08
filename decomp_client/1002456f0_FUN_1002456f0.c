
void FUN_1002456f0(long *param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Deferred license activation failed");
  }
                    /* WARNING: Could not recover jumptable at 0x000100245730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

