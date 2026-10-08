
void FUN_100228e20(long *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000100228e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100228e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  return;
}

