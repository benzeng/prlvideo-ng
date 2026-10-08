
void FUN_100238f10(long *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000009;
  if (param_2 == 0x30000001) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100238f2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

