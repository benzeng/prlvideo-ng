
void FUN_1005740f0(long *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') break;
    (**(code **)(*param_1 + 0x110))(param_1,0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010057412d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}

