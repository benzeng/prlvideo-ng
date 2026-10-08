
void FUN_1002ed6f0(long *param_1,int param_2)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    cVar1 = FUN_100d80680();
    if (cVar1 != '\0') {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0x80015340;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ed731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

