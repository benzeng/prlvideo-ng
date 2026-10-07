
undefined8 FUN_10080f2d0(long *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0xf) {
    param_1[0x28] = param_3;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010080f2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xe0))();
  return uVar1;
}

