
void FUN_100756350(long *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100756369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b0))(param_1,2);
    return;
  }
  return;
}

