
void FUN_1002f1e70(long param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100df99c0("","prl_client_app",0,"Deploy Id is set with %d, %d",param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001002f1eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),0);
  return;
}

