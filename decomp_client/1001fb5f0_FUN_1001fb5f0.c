
void FUN_1001fb5f0(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Get portal account email was finished. RC = %.8X, (%s)",
                param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001fb63d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

