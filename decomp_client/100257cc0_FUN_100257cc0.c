
void FUN_100257cc0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Registration dialog is closed with result %d",param_4);
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000009;
  }
                    /* WARNING: Could not recover jumptable at 0x000100257d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

