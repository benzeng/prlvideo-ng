
void FUN_1000e0af0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if ((char)param_1[9] != '\0') {
    cVar1 = FUN_1000a6280(param_1 + 2);
    if (cVar1 != '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
      uVar2 = FUN_1000bbb10(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001000e0b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,0);
      return;
    }
  }
  return;
}

