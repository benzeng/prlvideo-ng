
void FUN_1002cca60(long *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001002cca76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002cca7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

