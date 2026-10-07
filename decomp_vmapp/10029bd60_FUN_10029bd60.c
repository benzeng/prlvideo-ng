
void FUN_10029bd60(long *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x58))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_1004098f0(param_1 + 1,(char)param_1[3]);
  FUN_1004097b0((char)param_1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010029bd9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

