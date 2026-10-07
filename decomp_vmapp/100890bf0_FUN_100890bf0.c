
void FUN_100890bf0(long param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100890c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100890c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),0,*param_2);
  return;
}

