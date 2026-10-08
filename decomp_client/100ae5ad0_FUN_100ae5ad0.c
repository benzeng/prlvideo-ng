
void FUN_100ae5ad0(long *param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 0x1f) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100ae5aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))
            (param_1,param_3 >> 5 & 0x7ffffff,param_2,*(code **)(*param_1 + 0x10));
  return;
}

