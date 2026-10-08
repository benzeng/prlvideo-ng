
void FUN_100c64010(undefined8 param_1)

{
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
                    /* WARNING: Could not recover jumptable at 0x000100c64083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_1023167f0[6])(param_1);
  return;
}

