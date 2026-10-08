
void FUN_100252690(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (1 < DAT_10230ffd0) {
    uVar1 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",2,
                  "New license key installation has finished with RC = %.8X, [%s]",param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002526eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

