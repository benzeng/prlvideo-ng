
void FUN_1001f9c50(long *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0x3c20) {
    if (param_2 == 0x3c21) {
      uVar1 = 0x80000275;
      if (param_3 == 1) {
        uVar1 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001001f9c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
      return;
    }
    if (param_2 != 0x3c77) {
                    /* WARNING: Could not recover jumptable at 0x0001001f9ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000001);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001001f9c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
  return;
}

