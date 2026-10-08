
void FUN_1002e4ee0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1[3] + 0x80) != '\0') {
    return;
  }
  uVar1 = 0;
  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Page load really finished.");
  if (*(char *)(param_1[3] + 0x81) == '\0') {
    uVar1 = 0x80000009;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002e4f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

