
void FUN_100252630(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (1 < DAT_10230ffd0) {
    uVar1 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",2,"Getting license info has finished with RC = %.8X, [%s]",
                  param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010025268b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

