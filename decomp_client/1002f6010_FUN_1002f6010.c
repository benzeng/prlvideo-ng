
void FUN_1002f6010(long *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x18) = param_2;
  uVar1 = 0;
  if (param_2 != 2) {
    param_3 = 0;
    uVar1 = 0x80000275;
    if (param_2 == 1) {
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f603b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1,param_3,*(code **)(*param_1 + 0xb0));
  return;
}

