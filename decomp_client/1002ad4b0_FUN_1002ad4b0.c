
void FUN_1002ad4b0(long *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 < 0) {
    if (param_2 == -0x7ffffd8b) {
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
  }
  else {
    cVar1 = FUN_1002ad410(param_1);
    if (cVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ad4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

