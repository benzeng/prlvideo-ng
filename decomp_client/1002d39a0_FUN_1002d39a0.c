
void FUN_1002d39a0(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000009;
  if (*(int *)(param_1[9] + 4) != 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002d39c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

