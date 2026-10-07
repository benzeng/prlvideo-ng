
void FUN_1004e5e70(long *param_1)

{
  FUN_1004e32f0(param_1[4]);
  if ((char)param_1[5] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001004e5e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1);
    return;
  }
  return;
}

