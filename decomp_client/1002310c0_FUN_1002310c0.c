
void FUN_1002310c0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar1 = param_1[4];
  }
  lVar1 = FUN_100319960(lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002310f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))(param_1);
    return;
  }
  return;
}

