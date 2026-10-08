
void FUN_1007e2ee0(long *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Mount finished %d, %d",param_2,param_3);
  }
  if (param_3 == 0 && param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000009;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007e2f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

