
undefined8 FUN_1002dc4f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((uint)param_3 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0001002dc527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_1002dcd5c + *(int *)(&DAT_1002dcd5c + param_3 * 4)))
                      (param_1,param_2,&DAT_1002dcd5c + *(int *)(&DAT_1002dcd5c + param_3 * 4));
    return uVar1;
  }
  return 0x20;
}

