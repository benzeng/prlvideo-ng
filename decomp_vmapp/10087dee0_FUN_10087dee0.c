
long FUN_10087dee0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == 0) ||
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0))
    {
      FUN_100887ce0(0x20,0x67,0x79,"bio_lib.c",0x15d);
      lVar1 = -2;
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = (code *)param_1[1];
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010087dfa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,0xd,0,0);
        return lVar1;
      }
      lVar1 = (*UNRECOVERED_JUMPTABLE_00)(param_1,6,0,0xd,0,1);
      if (0 < lVar1) {
        uVar2 = (**(code **)(*param_1 + 0x30))(param_1,0xd,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010087df64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE_00)(param_1,0x86,0,0xd,0,uVar2);
        return lVar1;
      }
    }
  }
  return lVar1;
}

