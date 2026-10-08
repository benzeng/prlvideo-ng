
void FUN_1002f18c0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_100df99c0("","prl_client_app",0,"User credentails reseted with %d, %d",param_2,param_3);
  uVar1 = 0x80000009;
  if ((param_2 == 0) && (uVar1 = 0x80000009, param_3 == 0)) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f1926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),uVar1);
  return;
}

