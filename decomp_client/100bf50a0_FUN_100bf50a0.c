
void FUN_100bf50a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_1023160a8 == (undefined **)0x0) {
    FUN_100bf2780(9,2,"ex_data.c",0xc9);
    if (DAT_1023160a8 == (undefined **)0x0) {
      DAT_1023160a8 = &PTR_FUN_102305390;
    }
    FUN_100bf2780(10,2,"ex_data.c",0xcc);
  }
                    /* WARNING: Could not recover jumptable at 0x000100bf5129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_1023160a8[3])(param_1,param_2,param_3);
  return;
}

