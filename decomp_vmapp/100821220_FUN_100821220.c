
void FUN_100821220(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x000100821233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 2))(param_1,*(undefined8 *)(param_2 + 4));
    return;
  }
  return;
}

