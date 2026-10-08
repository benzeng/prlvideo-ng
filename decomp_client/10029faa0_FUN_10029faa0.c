
void FUN_10029faa0(long *param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010029fab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

