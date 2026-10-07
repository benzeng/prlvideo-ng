
void FUN_10081fa50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_1011c06b8 == (undefined **)0x0) {
    FUN_10081d010(9,2,"ex_data.c",0xc9);
    if (DAT_1011c06b8 == (undefined **)0x0) {
      DAT_1011c06b8 = &PTR_FUN_1011ab5c0;
    }
    FUN_10081d010(10,2,"ex_data.c",0xcc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010081fad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_1011c06b8[5])(param_1,param_2,param_3);
  return;
}

