
void FUN_1006122f0(long *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010061231b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1);
  return;
}

