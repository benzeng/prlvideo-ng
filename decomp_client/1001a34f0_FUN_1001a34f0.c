
void FUN_1001a34f0(long *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1001a2e70();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001001a351a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b0))(param_1,1);
    return;
  }
  return;
}

