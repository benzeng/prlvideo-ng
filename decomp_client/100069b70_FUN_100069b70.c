
void FUN_100069b70(long *param_1,undefined4 param_2)

{
  FUN_100df99c0("","prl_client_app",0,"Shell process was finished with error: %d",param_2);
                    /* WARNING: Could not recover jumptable at 0x000100069bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

