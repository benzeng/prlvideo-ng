
void FUN_10020d560(long *param_1)

{
  CSdkRequest::cancel();
                    /* WARNING: Could not recover jumptable at 0x00010020d59d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

