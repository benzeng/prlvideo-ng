
void FUN_10081f7a0(void)

{
  if (DAT_1011c06b8 == (undefined **)0x0) {
    FUN_10081d010(9,2,"ex_data.c",0xc9);
    if (DAT_1011c06b8 == (undefined **)0x0) {
      DAT_1011c06b8 = &PTR_FUN_1011ab5c0;
    }
    FUN_10081d010(10,2,"ex_data.c",0xcc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010081f806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_1011c06b8)();
  return;
}

