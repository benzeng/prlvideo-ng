
void FUN_100224510(long *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000275;
  if (param_3 == 1) {
    uVar1 = FUN_100224550(param_1,0x80000275);
  }
                    /* WARNING: Could not recover jumptable at 0x000100224540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

