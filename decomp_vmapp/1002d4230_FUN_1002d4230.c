
void FUN_1002d4230(long *param_1)

{
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC] BeforeSuspend");
  }
  if ((*(byte *)(param_1[8] + 0x80) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002d4283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}

