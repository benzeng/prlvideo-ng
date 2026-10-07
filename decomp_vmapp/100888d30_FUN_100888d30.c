
void FUN_100888d30(void)

{
  if (DAT_1011c0db0 == (undefined **)0x0) {
    FUN_10081d010(9,1,"err.c",0x127);
    if (DAT_1011c0db0 == (undefined **)0x0) {
      DAT_1011c0db0 = &PTR_FUN_100bde1a8;
    }
    FUN_10081d010(10,1,"err.c",0x12a);
  }
                    /* WARNING: Could not recover jumptable at 0x000100888d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_1011c0db0)(0);
  return;
}

