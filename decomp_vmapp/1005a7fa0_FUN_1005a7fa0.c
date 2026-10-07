
void FUN_1005a7fa0(long *param_1,char param_2)

{
  if ((param_2 == '\0') && ((char)param_1[0x19] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001005a7fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc0))(param_1,0x3ed);
    return;
  }
  return;
}

