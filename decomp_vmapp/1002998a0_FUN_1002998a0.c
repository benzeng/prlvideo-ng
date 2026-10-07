
void FUN_1002998a0(long *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(param_1[0x14] + 0x54) == 0) {
    bVar1 = *(int *)(param_1[0x14] + 0x50) == 0;
  }
  FUN_1002998e0(param_1,bVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002998d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}

