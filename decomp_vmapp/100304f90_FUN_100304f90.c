
void FUN_100304f90(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x25f0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100304faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,param_2,param_3,(code *)DAT_1011c4a88[0x259]);
  return;
}

