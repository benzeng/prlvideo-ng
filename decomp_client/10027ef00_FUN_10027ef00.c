
void FUN_10027ef00(long *param_1)

{
  char cVar1;
  
  cVar1 = FUN_10027edf0();
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010027ef2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

