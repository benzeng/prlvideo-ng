
void FUN_10024df30(long *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000009;
  if ((param_2 != 0x3aab) && (uVar1 = 0x80000009, param_3 == 1)) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010024df5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  return;
}

