
void FUN_1002c5ef0(long param_1,long param_2,long *param_3)

{
  if (*(long *)(param_1 + 0x310) != 0) {
    *(long *)(param_2 + 0x30) = *(long *)(param_1 + 0x310);
                    /* WARNING: Could not recover jumptable at 0x0001002c5f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x80))(param_3,param_2,param_3,*(code **)(*param_3 + 0x80));
    return;
  }
  FUN_10070aef0(param_2,0);
  return;
}

