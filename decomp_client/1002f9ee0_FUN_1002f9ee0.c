
void FUN_1002f9ee0(long *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000275;
  if (param_2 == 1) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f9efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

