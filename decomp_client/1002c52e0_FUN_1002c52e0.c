
void FUN_1002c52e0(long *param_1,undefined4 param_2,undefined4 param_3)

{
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Unmount finished %d, %d",param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002c5332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,(int)param_1[0xe]);
  return;
}

