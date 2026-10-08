
void FUN_1002386d0(long *param_1)

{
  *(undefined4 *)((long)param_1 + 0x5c) = 5;
                    /* WARNING: Could not recover jumptable at 0x0001002386eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
  return;
}

